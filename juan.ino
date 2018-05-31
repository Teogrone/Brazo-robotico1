#include <Servo.h>
#define pinbase 13
#define pinladod 10
#define pinladoi 11
#define pingarra 9
#define NFIL 21

float matriz_b [NFIL]={0,7,14,21,28,35,40,50,60,70,80,100,110,123,130,137,144,151,158,172,175};
float matriz_d [NFIL]={28,30,32,34,36,38,40,42,44,46,48,51,54,57,57,57,57,58,59,60};
float matriz_i [NFIL]={70,80,90,100,110,120,130,127,124,121,118,115,112,100,102,104,106,108,110,112,115};
float matriz_g [NFIL]={80,80,80,80,80,80,80,80,80,80,185,185,185,185,70,70,70,70,70,70,70};

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
  delay(50);
  ladod.write(matriz_d[i]);
  delay(50);
  ladoi.write(matriz_i[i]);
  delay(50);
  garra.write(matriz_g[i]);
  delay(50);

  }  
}

void loop() {
}

