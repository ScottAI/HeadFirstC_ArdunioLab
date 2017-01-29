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
  digitalWrite(ledPin, HIGH);
    Serial.print(senval) ;
}
