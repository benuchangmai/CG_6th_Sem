
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#define PI 3.14
void main(){
int gd,gm=VGAMAX;
int a,i,j,x,y;
gd=DETECT;
initgraph(&gd,&gm,NULL);

setcolor(LIGHTRED);
line(100,100,600,100);
line(100,200,600,200);
line(100,100,100,200);
line(600,100,600,200);
floodfill(102,102,LIGHTRED);

setcolor(WHITE);
line(100,201,600,201);
line(100,300,600,300);
line(100,201,100,300);
line(600,201,600,300);
floodfill(102,202,WHITE);

setcolor(GREEN);
line(100,301,600,301);
line(100,400,600,400);
line(100,301,100,400);
line(600,301,600,400);
floodfill(102,302,GREEN);
//line(100,400,600,400);
//line(600,400,600,400);
//line(100,200,600,200);
//line(100,300,600,300);
//line(600,100,600,400);
setcolor(BLUE);
circle(350,250,50);

for(j=0;j<=360;j+=15)
 {
   x=50*cos(j*PI/180);
   y=50*sin(j*PI/180);
   line(350,250,350+x,250-y);
 }

//floodfill(102,102,RED);
delay(1000);
getch();

}
