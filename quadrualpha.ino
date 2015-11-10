#include <Servo.h> 
 
int pos = 0; 

int rf1pos = 0, rf2pos = 0;
int rb1pos = 0, rb2pos = 0;
int lf1pos = 0, lf2pos = 0;
int lb1pos = 0, lb2pos = 0;
int rf1temp = 0, rb1temp = 0, lf1temp = 0, lb1temp = 0;

Servo rf1;
Servo rf2;
Servo rb1;
Servo rb2;
Servo lf1;
Servo lf2;
Servo lb1;
Servo lb2;

void refstate(){
rf1pos = 94;
rf2pos = 10;
rb1pos = 97;
rb2pos = 180;
lb2pos = 0;
lb1pos = 87;
lf1pos = 95;
lf2pos = 180;
}

void writeref(){
  rf1.write(rf1pos);
  rf2.write(rf2pos);
  rb1.write(rb1pos);
  rb2.write(rb2pos);
  lf1.write(lf1pos);
  lf2.write(lf2pos);
  lb1.write(lb1pos);
  lb2.write(lb2pos);
}
  
void setup() 
{
  rf1.attach(2);
  rf2.attach(3); 
  lf1.attach(4);
  lf2.attach(5);
  lb1.attach(6);
  lb2.attach(7);
  rb1.attach(8);
  rb2.attach(9);
  refstate();
  writeref();
  delay(3000); 
  for(pos = 180; pos >= 150; pos -= 1) 
  {                                  
    rb2.write(pos); 
    delay(15);      
  }
  delay(500);
  for(pos = 97; pos <= 132; pos += 1) 
  {                                  
    rb1.write(pos);              
    delay(15);                   
  } 
  delay(500);  
  for(pos = 150; pos <= 180; pos += 1) 
  {                                  
    rb2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 180; pos >= 150; pos -= 1) 
  {                                  
    lf2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 95; pos >= 60; pos -= 1) 
  {                                  
    lf1.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 150; pos <= 180; pos += 1) 
  {                                  
    lf2.write(pos);              
    delay(15);                   
  }
  delay(500);
  lb1temp = 62;
  lf1temp = 70;
  rf1temp = 119;
  rb1temp = 122;
  for(lb1temp; lb1temp<=97; lb1temp++){
    lb1.write(lb1temp);
    lf1.write(lf1temp);
    rb1.write(rb1temp);
    rf1.write(rf1temp);
    lf1temp++;
    rf1temp--;
    rb1temp--;
    delay(15);
  }
  delay(500);
  for(pos = 0; pos <= 30; pos += 1) 
  {                                 
    lb2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 87; pos >= 52; pos -= 1)
  {                                 
    lb1.write(pos);              
    delay(15);                   
  } 
  delay(500);
  for(pos = 30; pos >= 0; pos -= 1)
  {                                
    lb2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 10; pos <= 30; pos += 1)
  {                                 
    rf2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 94; pos <= 129; pos += 1)
  {                                  
    rf1.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 30; pos >= 10; pos -= 1) 
  {                                  
    rf2.write(pos);              
    delay(15);                   
  }
  delay(500);
  lb1temp = 62;
  lf1temp = 70;
  rf1temp = 119;
  rb1temp = 122;
  for(lb1temp; lb1temp<=97; lb1temp++){
    lb1.write(lb1temp);
    lf1.write(lf1temp);
    rb1.write(rb1temp);
    rf1.write(rf1temp);
    lf1temp++;
    rf1temp--;
    rb1temp--;
    delay(15);
  }
  delay(2000);
} 
 
void loop() 
{   
  for(pos = 180; pos >= 150; pos -= 1) 
  {                                  
    rb2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 97; pos <= 132; pos += 1)
  {                                  
    rb1.write(pos);              
    delay(15);                   
  } 
  delay(500);  
  for(pos = 150; pos <= 180; pos += 1)
  {                                  
    rb2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 180; pos >= 150; pos -= 1) 
  {                                  
    lf2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 95; pos >= 60; pos -= 1) 
  {                                  
    lf1.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 150; pos <= 180; pos += 1) 
  {                                  
    lf2.write(pos);              
    delay(15);                   
  }
  delay(500);
  lb1temp = 62;
  lf1temp = 70;
  rf1temp = 119;
  rb1temp = 122;
  for(lb1temp; lb1temp<=97; lb1temp++){
    lb1.write(lb1temp);
    lf1.write(lf1temp);
    rb1.write(rb1temp);
    rf1.write(rf1temp);
    lf1temp++;
    rf1temp--;
    rb1temp--;
    delay(10);
  }
  delay(500);
  for(pos = 0; pos <= 30; pos += 1) 
  {                                 
    lb2.write(pos);              
    delay(15);                       
  }
  delay(500);
  for(pos = 87; pos >= 52; pos -= 1) 
  {                                  
    lb1.write(pos);              
    delay(15);                   
  } 
  delay(500);
  for(pos = 30; pos >= 0; pos -= 1) 
  {                                 
    lb2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 10; pos <= 30; pos += 1) 
  {                                  
    rf2.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 94; pos <= 129; pos += 1)
  {                                  
    rf1.write(pos);              
    delay(15);                   
  }
  delay(500);
  for(pos = 30; pos >= 10; pos -= 1)
  {                                 
    rf2.write(pos);              
    delay(15);                   
  }
  delay(500);
  lb1temp = 62;
  lf1temp = 70;
  rf1temp = 119;
  rb1temp = 122;
  for(lb1temp; lb1temp<=87; lb1temp++){
    lb1.write(lb1temp);
    lf1.write(lf1temp);
    rb1.write(rb1temp);
    rf1.write(rf1temp);
    lf1temp++;
    rf1temp--;
    rb1temp--;
    delay(10);
  }
} 
