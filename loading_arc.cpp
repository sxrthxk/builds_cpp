#include <iostream>
#include<graphics.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    int page=0,stangle=0,endangle=180,gd=DETECT,gm;
        initgraph(&gd,&gm,"c:/turboc3/bgi");
       while(1)
    {
        cleardevice();
    for(int i=0;i<=5;i++)
    {
      arc(getmaxx()/2,getmaxy()/2,stangle,endangle,50+i);
    }
    setactivepage(page);
       setvisualpage(1-page);
    delay(20);
    if(stangle==endangle)
    {
        cleardevice();
        stangle=0;
        endangle=180;
    }
    stangle+=5;
    endangle+=10;
    if(GetAsyncKeyState(VK_LCONTROL))
    {
        exit(0);
    }
    page=1-page;
    }
    getch();
    closegraph();
}
