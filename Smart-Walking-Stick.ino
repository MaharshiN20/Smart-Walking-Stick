
const int echo = 10;
const int trig = 9;
const int vibro = 11;
const int buzzer = 13;  // assiging pins to all the components

long dura;
int dist;
int safetyD;


void setup() {
pinMode(trig, OUTPUT); 
pinMode(echo, INPUT); 
pinMode(vibro, OUTPUT);
pinMode(buzzer, OUTPUT);
Serial.begin(9600); 
}


void loop() {

digitalWrite(trig, LOW);
delayMicroseconds(2);

digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);


dura = pulseIn(echo, HIGH);


dist= dura*0.034/2; // Used to convert input to cm 

safetyD = dist;
if (safetyD <= 15){
  digitalWrite(buzzer, HIGH); // Triggers Buzzer and vibration motor 
  digitalWrite(vibro, HIGH);  //when it is in the threshold distance of 15 cm
}
else{
  digitalWrite(vibro, LOW);  
  digitalWrite(buzzer, LOW);
}


Serial.print("Distance: ");
Serial.println(dist);
}