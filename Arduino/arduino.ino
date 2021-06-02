/*
    #include<Arduino.h>
    This video link is mentioned below
    https://www.youtube.com/watch?v=eovoh88IA38
    Ardiuno - functions 1 - C++ vs Arduino (Old version)
    Put this format in Arduino compiler.
*/
void setup()
{
    pinMode(13,OUTPUT);
}
void loop()
{
    digitalWrite(13,HIGH);
    delay(1000);
    digitalWrite(13,LOW);
    delay(1000);
}
int main(void)
{
    /*
        it is good to know what is happening in main(): message from
        isteeleEvCC, youtube channel: https://www.youtube.com/channel/UC_QJ5cPlGvrI2ywCRpyN-0A
        
    */
  //  init();

// #if defined(USBCON)
//     USBDevice.attach();
// #endif

    setup();

    while (true)//for(;;)//way to write infinite loop
    {
        loop();
        //if (serialEventRun) serialEventRun();
    }
    return 0;
}