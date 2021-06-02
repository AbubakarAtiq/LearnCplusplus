/*
    Author of this code:
    https://www.youtube.com/watch?v=wQEyvmGoHvk&list=PLyfUc9VtviefRG78ohxwE42vxxhszZSGD
    https://www.youtube.com/channel/UC_QJ5cPlGvrI2ywCRpyN-0A
    use this website for simulation
    tinkercad.com
*/
byte number=0;
void setup()
{
    serial.begin(9600);
}
void loop()
{
    serial.println(number%5);
    delay(50000);
    number++;
    //Modulus operator is powerful operator, once you know to use it.
    
}