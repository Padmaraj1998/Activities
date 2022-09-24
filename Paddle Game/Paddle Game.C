#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include<conio.h>
#include<graphics.h>

#define TRUE 1
void main()
{
int gd=DETECT,gm=DETECT;   //xmax=640 ymax=470
void ball()
{
 int maxx=640;
 int maxy=470,midx=320,midy=235;
int bx=180,by=200,dx=1,dy=-1;
int a=0,b=410,c=610,d=420;
clrscr();
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
cleardevice();

circle(180,400,10);
while(TRUE)
{
setcolor(6);

rectangle(a,b,c,d);
circle(bx,by,10);
delay(3);

cleardevice();



  bx=bx+dx;
  by=by+dy;
  //hit right boundary
  if(bx>(maxx-25))
  {
  bx=maxx-30;
  dx=-dx;
  }
     //hit left boundary
  if(bx<1)
  {
  bx=1;
  dx=-(dx);
  }
//up
  if(by<1)
  {
  by=1;
  dy=-(dy);
  }

//down finsh
if(by>420)
{
by=410;
dy=dx;
}
if(bx>=0&&bx<=305&&by==400)
{

  {
  dy=-dy;

  }
}
if(bx>=306&&bx<=610&&by==400)
{
dy=-dy;
}

 }


 }//close
getch();
closegraph();
}
