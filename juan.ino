#include <Servo.h>
#define pinbase 13
#define pinladod 10
#define pinladoi 11
#define pingarra 9
#define NFIL 3

float matriz_b [NFIL]={40,123,175};
float matriz_d [NFIL]={40,57,60};
float matriz_i [NFIL]={130,100,115};
float matriz_g [NFIL]={80,185,70};

Servo garra;
Servo base;
Servo ladod;
Servo ladoi;
int i;

void setup() {
  base.attach (pinbase);
  ladod.attach (pinladod);
  ladoi.attach (pinladoi);
  garra.attach (pingarra);


  for(i=0;i<20;i++){
  base.write(matriz_b[i]);
  delay(1000);
  ladod.write(matriz_d[i]);
  delay(1000);
  ladoi.write(matriz_i[i]);
  delay(1000);
  garra.write(matriz_g[i]);
  delay(1000);

  }  
}

void loop() {
}

