#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

int main()
{
   int page=0, gd = DETECT, gm, x=400, y=400, color, angle = 0;
   initwindow(1366,768,"");
   while(1)
   {
       setfillstyle(SOLID_FILL,MAGENTA);
       circle(x,y,20);
       floodfill(x+1,y+1,WHITE);
       setactivepage(page);
       setvisualpage(1-page);
       cleardevice();

       if(GetAsyncKeyState(VK_DOWN))
       {
           delay(2);
           y+=5;
       }
       else if(GetAsyncKeyState(VK_RIGHT))
       {
           delay(2);
           x+=5;
       }
       else if(GetAsyncKeyState(VK_UP))
       {
           delay(2);
           y-=5;
       }
       else if(GetAsyncKeyState(VK_LEFT))
       {
           delay(2);
           x-=5;
       }
       else if(GetAsyncKeyState(VK_LCONTROL))
       {
           exit(0);
       }
       page=1-page;
   }

   getch();
   closegraph();
}
