#include <graphics.h>
using namespace std;
int main()
{
    int gd = DETECT;
    int gm;
    inigraph(&gd,&gm,"D:\\programming");
    settextstyle(BOLD_FONT,HORIZ_DIR,0);
    outtextxy(10,10,"VCR Games");
    closegraph();
    return 0;
}