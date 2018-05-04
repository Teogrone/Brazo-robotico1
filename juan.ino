#include <Servo.h>
Servo base;
int pos=0;
int TECLA=0; 



void setup() {
Serial.begin(9600);
  base.attach(11);
  pos=0; 
}

void loop() {
base.write(pos);
    delay(50);
    Serial.println(pos);
    if (Serial.available() > 0) { 
       delay(100);
       TECLA=Serial.read();
       if (TECLA==49){  //es decir,  "1" 
          pos=0;
          }
       if (TECLA==50){  //es decir,  "2" 
          pos=90;
          }
       if (TECLA==51){  //es decir,  "3" 
          pos=180;
          }
       }

  
  
}
