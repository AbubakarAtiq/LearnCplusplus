void setup()
{
    Serial.begin(9600);
}
void loop()
{
    /*
        we will use potentiometer, to change the reading
    */
    int val = analogRead(0);
    //mapping function
    int mapVal= map(val,0/*minimum value could be*/,1023/*maximum value could be*/)
    //byte x=0;
    /*
        change the variable when x=0 it will print case 0 and 
        vice versa.
        if it is not 0 or 1, it will run default.

    */
        // if(x==0)
        // {

        // }
        // else if(x==1)
        // {

        // }
        switch (mapVal)
        {
            case 0:
            Serial.println("case 0");
            break;
            case 1:
            Serial.println("case 1");
            break;
        default:
            break;
        }
}