/*                            Project
 *                  --------------------------          
 *                        Little Groot                      (Name inspired from Guardian of Galaxy Movie Character)  
 *                   --------------------------
 * The plant monitor has a moisture sensor that measures how wet your
 * plant’s soil is. If the plant needs watering, an LED lights up until the
 * plant’s been watered, and the string “Feed me!” is repeatedly sent to your computer.
 * When the plant has been watered, the LED switches off and the string “Thank you, Seymour!” is sent once to your computer.
 * It is for normal plant.
 * 
 * Created on 13 April 2016 Under the guidance of Mr. ShivRam Meena
 * copyright 2016 Vijay Purohit <http://www.prepkida.com>
 * vijay.pu9@gmail.com
*/

int ledPin = 13;
int sensorPin = 0;
int senval = 0;

void setup() 
{
  pinMode(ledPin, OUTPUT);
  pinMode(sensorPin, INPUT);

  Serial.begin(9600);

}

void loop() 
{
 senval = analogRead(sensorPin);

 if(senval<800 && senval>500)
 {
  digitalWrite(ledPin, HIGH);
    Serial.print("Feed Me, Feed Me, Need Water\n");
    delay(5000);
 }

 if(senval<400)
 {
   digitalWrite(ledPin, HIGH); 
   delay(1000); 
   digitalWrite(ledPin, LOW); 
   delay(1000);
    Serial.print("I am dying, Please Help Me, Need Water\n ");
 }
 
 if(senval>800) 
 {
   digitalWrite(ledPin, LOW);
   if(senval==850)  
   Serial.print("Thank You!,\nThank You very much, Vijay");
 }
 
}
