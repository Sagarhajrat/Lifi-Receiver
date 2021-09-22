//Receiver section
int ldrPin = 3;
void setup()
{
 pinMode(6, INPUT);
 Serial.begin(9600);
 Serial.print("Starting\n");
 //pinMode(LED_PIN, OUTPUT);
 //pinMode(2, INPUT);
}
void loop()
{
 //long duration = analogRead(A0);
 unsigned long duration = pulseIn(6,HIGH);
 Serial.println(duration);
 if (duration > 10000 && duration < 19000)
 {

 Serial.print("Received: 1 ");
 } 
 else if (duration > 20000 && duration < 29000)
 {

 Serial.print("Received: 2 ");
 }
 else if (duration > 30000 && duration < 38000)
 {

 Serial.print("Received: 3 ");
 }
 else if (duration > 40000 && duration < 48000)
 {

 Serial.print("Received: 4 ");
 }
 else if (duration > 50000 && duration < 58000)
 {

 Serial.print("Received: 5 ");
 }
 else if (duration > 60000 && duration < 68000)
 {

 Serial.print("Received: 6 ");
 }
 else if (duration > 70000 && duration < 78000)
 {

 Serial.print("Received: 7 ");
 }
 else if (duration > 80000 && duration < 88000)
 {

 Serial.print("Received: 8 ");
 }
 else if (duration > 90000 && duration < 98000)
 {

 Serial.print("Received: 9 ");
 }
 else if (duration > 100000 && duration < 108000)
 {

 Serial.print("Received: 0 ");
 }

 else if (duration > 130000 && duration < 138000)
 {

 Serial.print("Received: * ");
 } 
else if (duration > 160000 && duration < 168000)
 {

 Serial.print("Received: # ");
 }
}