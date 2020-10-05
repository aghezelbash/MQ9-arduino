#include "mq9.h"
mq9 m9 = mq9();
void setup() {
  m9.inits();
  m9.calibrate();
  Serial.begin(9600);
  //m2.getValue(true,'M',);
  // put your setup code here, to run once:

}

void loop() {
  double data[5];
  m9.getValue(false,'M',data);
  Serial.println(data[1]);
  /*for(int i=0;i<5;i++){Serial.print(data[i],4);Serial.print(',');}  // put your main code here, to run repeatedly:
  Serial.println();*/
  if(m9.thrValue('L',0.001)){Serial.println("yes");}
  
}
