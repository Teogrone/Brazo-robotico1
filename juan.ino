#include <Servo.h>
#define pinbase 13
#define pinladod 10
#define pinladoi 11
#define pingarra 9
#define NCOL 35
#define NFIL 4

float matriz_b[NFIL][NCOL]{
   {0,7,14,21,28,35,40,50,60,70,80,100,110,123,123,123,123,123,123,123,123,123,123,123,123,123,133,145,160,175,175,175,175,175,175},
   {28,30,32,34,36,38,40,42,44,46,48,51,54,70,70,70,70,70,70,70,65,65,65,65,65,65,65,65,65,65,65,65,65,65,65},
   {70,80,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,90,102,104,106,108,110,112,115,118,120,122,124},
   {80,80,80,80,80,80,80,80,80,80,80,80,80,85,85,85,85,85,85,85,85,85,185,185,185,185,185,185,185,185,185,185,185,185,70},
};
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
}
 

void loop() {
for(i=0;i<NCOL;i++){
  base.write(matriz_b[0][i]);
  delay(150);
  ladod.write(matriz_b[1][i]);
  delay(150);
  ladoi.write(matriz_b[2][i]);
  delay(150);
  garra.write(matriz_b[3][i]);
  delay(150);
  }
  for (i=0;i<999;i++){
    ladod.write(30);
    garra.write(85);
    delay (500);
    ladod.write(0);
    garra.write(185);
    delay (500);
    }
  }
 
