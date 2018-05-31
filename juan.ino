#include <Servo.h>
#define pinbase 13
#define pinladod 10
#define pinladoi 11
#define pingarra 9
#define NFIL 35


/*           Columnas: 1,2,3 ,4 ,5 ,6 ,7 ,8 ,9 ,10,11,12 ,13 ,14 ,15 ,16 ,17 ,18 ,19 ,20 ,21 ,22 ,23 ,24 ,25 ,26 ,27 ,28 ,29 ,30*/
float matriz_b [NFIL]={0,7,14,21,28,35,40,50,60,70,80,100,110,123,123,123,123,123,123,123,123,123,123,123,123,123,133,145,160,175,175,175,175,175,175};
float matriz_d [NFIL]={28,30,32,34,36,38,40,42,44,46,48,51,54,57,57,57,57,57,57,57,57,57,57,57,58,59,60,60,60,60,60,60,60,60,60};
float matriz_i [NFIL]={70,80,90,100,110,120,130,130,130,130,130,130,130,130,127,124,121,118,110,100,95,95,95,102,104,106,108,110,112,115,118,120,122,124,126};
float matriz_g [NFIL]={80,80,80,80,80,80,80,80,80,80,80,80,80,85,85,85,85,85,85,85,85,85,185,185,185,185,185,185,185,185,185,185,185,185,70};

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


  for(i=0;i<NFIL;i++){
  base.write(matriz_b[i]);
  ladod.write(matriz_d[i]);
  ladoi.write(matriz_i[i]);
  garra.write(matriz_g[i]);
  delay(100);

  }  
}

void loop() {

ladod.write(30);
garra.write(85);
delay (500);
ladod.write(0);
garra.write(185);
delay (500);

}
