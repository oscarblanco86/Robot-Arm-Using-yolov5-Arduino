////////////////////////////////////////////////////////////
//  RoboSap Ptuj, 21.1.2017 
//  Robot Arm
////////////////////////////////////////////////////////////

#include <Servo.h>

#define LED_pin 2
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
int i = 0;
int j = 0;
int k = 0;
int m = 0;
int x = 0;

void setup() {
  servo1.attach(6);
  servo2.attach(9);
  servo3.attach(10);
  servo4.attach(11);
  Serial.begin(9600);
  Serial.write("Arduino Ready\n");
  pinMode(LED_pin, OUTPUT);
}

void Domov()
{
  servo1.write(70); //Servo 1
  servo2.write(60); //Servo 2
  servo3.write(130); //Servo 3
  servo4.write(120); //Servo 4
  delay(10);
}

void Kaseta()
{
  servo1.write(165); //Servo 1
  servo2.write(60); //Servo 2
  servo3.write(110); //Servo 3
  servo4.write(50); //Servo 4
  delay(1500);
  servo1.write(170); //Servo 1
  servo2.write(60); //Servo 2
  servo3.write(80); //Servo 3
  servo4.write(70); //Servo 4
  delay(1500);
  servo1.write(100); //Servo 1
  servo2.write(60); //Servo 2
  servo3.write(80); //Servo 3
  servo4.write(70); //Servo 4
  delay(800);
  servo1.write(100); //Servo 1
  servo2.write(60); //Servo 2
  servo3.write(120); //Servo 3
  servo4.write(60); //Servo 4
  delay(1000);
   servo1.write(100); //Servo 1
  servo2.write(140); //Servo 2
  servo3.write(120); //Servo 3
  servo4.write(60); //Servo 4
  delay(500000);
}

void pick(){ 
  Domov();
  delay(2000);
  j=120;
  k=390;
  for(i=70;i<=140;i++)
  {
    j--;
    k--;
    servo1.write(i); //Servo 1
    servo2.write(60); //Servo 2
    servo3.write((k/3)); //Servo 3
    servo4.write(j); //Servo 4
    delay(20);
  }
  j=100;
  for(i=140;i<=160;i++)
  {
  j--;
    servo1.write(i); //Servo 1
    servo2.write(60); //Servo 2
    servo3.write(106); //Servo 3
    servo4.write(j/2); //Servo 4
    delay(20);

  }

  j=50;
  for(i=106;i>=80;i--)
  {
    j++;
    servo1.write(165); //Servo 1
    servo2.write(60); //Servo 2
    servo3.write(i); //Servo 3
    servo4.write(j); //Servo 4
    delay(20);
  }

  for(i=71;i>=50;i--)
  {
    servo1.write(165); //Servo 1
    servo2.write(60); //Servo 2
    servo3.write(80); //Servo 3
    servo4.write(i); //Servo 4
    delay(20);
  }
  j=160;
  k=90;
  m=0;

  for(i=165;i>=70;i--)
  {
    m++;
    if(m>50);
    {
    k++;
    }
    j++;
    servo1.write(i); //Servo 1
    servo2.write(60); //Servo 2
    servo3.write(j/2); //Servo 3
    servo4.write(k/2); //Servo 4
    delay(20);
  }
  // x = Serial.readString().toInt();
  if (x == 1){
    for(i=60;i>=10;i--)
    {
      servo1.write(70); //Servo 1
      servo2.write(i); //Servo 2
      servo3.write(130); //Servo 3
      servo4.write(90); //Servo 4
      delay(20);
      digitalWrite(LED_pin,HIGH);
      Serial.println('finish');
    }
  } else {
    for(i=60;i<=110;i++)
    {
      servo1.write(70); //Servo 1
      servo2.write(i); //Servo 2
      servo3.write(130); //Servo 3
      servo4.write(90); //Servo 4
      delay(20);
      Serial.println('finish');
    }
  }
  digitalWrite(LED_pin,LOW);
}


void loop() {
  x = Serial.readString().toInt();
  if (x != 0){
    pick();
  }
  x = 0;
}


