#include<TM1637Display.h>
#include<Time.h>
#include<TimeLib.h>

#define CLK 3
#define DIO 4
TM1637Display display(CLK, DIO);

//how long to delay
#define delayTime 1000

//millis to store
unsigned long timer = millis();

void setup(){
//set arbitary time
setTime(1,6,0,9,6,2020);

//brightness from off/0 to 7/brightest
display.setBrightness(4);
}

void loop(){ 
  //wait a second
  betterDelay(delayTime);
  //blink the colon
  bool drawDot;
  if(second(now())%2 ==0)
  {
    drawDot = true;
  }
  else
  {
    drawDot = false;
  }
//set the display hours
if(drawDot)
{
  display.showNumberDecEx(hour(now()), 0b11100000, true, 2,0);
}
else
{
  display.showNumberDec(hour(now()),true, 2, 0);
}
//display minutes
display.showNumberDec(minute(now()), true, 2,2);
}
//better delay
//uses millis since time was taken
void betterDelay(int delayToWait)
{
//if the current millis is > 100 since timer ...
while(millis()-timer < delayToWait) {
  //do nothing  
}
//reset now the delay is passed
 timer = millis();
  
}    
