/*#include<stdio.h>
#include<graphics.h>
#include<math.h>
 
int xc=50,yc=200,r=35;
int x[15],y[15];
void drawcircles()
{
	setcolor(YELLOW);
	circle(xc,yc,r);
	circle(xc,yc,r+5);
}
void main()
{
	double angle=0,theta;
	int i,a;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	a=xc+r;
	while(!kbhit())
	{
		while(a<=630)
		{
			theta=M_PI*angle/180;
			cleardevice();
			drawcircles();
			for(i=0;i<18;i++)
			{
				theta=M_PI*angle/180;
				x[i]=xc+r*cos(theta);
				y[i]=yc+r*sin(theta);
				angle+=20;
				line(xc,yc,x[i],y[i]);
			}
			angle+=2; xc+=2; a=xc+r;
			delay(50);
		}
		xc=50;	r=35; a=xc+r;
	}
	getch();
	closegraph();
}*/

//This program will create a rotating wheel animation during execution
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#define PI 3.1415


void rotate_wheel(int xc,int yc,int t)
{
int x,y;
for(t=t;t<180;t=t+30)
{
x=50*cos(t*PI/180);
y=50*sin(t*PI/180);
line(xc+x,yc+y,xc-x,yc-y);
}
circle(xc,yc,50);
//circle(xc,yc,52);
}
void wheel(float xc,float yc,float t)
{
float x,y;

x=50*cos(t*PI/180);
y=50*sin(t*PI/180);
line(xc+x,yc+y,xc-x,yc-y);

circle(xc,yc,50);
//circle(xc,yc,52);
}
void rotate_wheel1(int xc,int yc,int t)
{
int x,y;
for(t=t;t<360;t=t+180)
{
x=25*cos(t*PI/180);
y=25*sin(t*PI/180);
line(xc+x,yc+y,xc-x,yc-y);
}
//circle(xc,yc,50);
//circle(xc,yc,52);
}


main()
{
int d=0,m=0,x;
initgraph(&d,&m,"c:\\tc\\bgi");



for(x=50;x<400;x++)
{
line(0,290,600,290);
line(x,240,x+140,240);
line(x+30,170,x+160,170);

circle(x+80,80,15);
line(x+75,94,x+30,162);
line(x+75,94,x+160,170);

line(x+120,240,x+30,162);

line(x+30,170,x-30,170);
line(x+30,175,x-30,175);
line(x+30,175,x+30,170);
line(x-30,175,x-30,170);

line(x+45,170,x+25,170);
line(x+45,162,x+25,162);
line(x+45,162,x+45,170);
line(x+25,162,x+25,170);


line(x+30,170,x+70,240);
line(x+160,170,x+140,240);
line(x+160,170,x+170,168);
line(x,240,x+30,170);
line(x+200,240,x+160,170);
setcolor(BLUE);
rotate_wheel(x,240,x%60);
rotate_wheel1(x+120,240,x%180);
rotate_wheel(x+200,240,(x+100)%60);
delay(5);
cleardevice();
rotate_wheel(x,240,x%60);
rotate_wheel1(x+120,240,x%180);
rotate_wheel(x+200,240,(x+100)%60);
line(0,290,600,290);
line(x,240,x+140,240);
line(x+30,170,x+160,170);
//line(x+55,94,x+160,170);

line(x+120,240,x+30,162);
circle(x+80,80,15);
line(x+75,94,x+30,162);
line(x+75,94,x+160,170);


line(x+30,170,x-30,170);

line(x+30,175,x-30,175);
line(x+30,175,x+30,170);
line(x-30,175,x-30,170);

line(x+45,170,x+25,170);
line(x+45,162,x+25,162);
line(x+45,162,x+45,170);
line(x+25,162,x+25,170);


line(x+30,170,x+70,240);
line(x+160,170,x+140,240);
line(x+160,170,x+170,168);
line(x,240,x+30,170);
line(x+200,240,x+160,170);
}
cleardevice();
x=100;

line(0,290*1.5,600*1.5,290*1.5);
line(x*1.5,240*1.5,(x+140)*1.5,240*1.5);
line((x+30)*1.5,170*1.5,(x+160)*1.5,170*1.5);
//line(x+55,94,x+160,170);

line((x+120)*1.5,240*1.5,(x+30)*1.5,162*1.5);
circle((x+80)*1.5,80*1.5,15*1.5);
line((x+75)*1.5,94*1.5,(x+30)*1.5,162*1.5);
line((x+75)*1.5,94*1.5,(x+160)*1.5,170*1.5);



line((x+30)*1.5,170*1.5,(x-30)*1.5,170*1.5);

line((x+30)*1.5,175*1.5,(x-30)*1.5,175*1.5);
line((x+30)*1.5,175*1.5,(x+30)*1.5,170*1.5);
line((x-30)*1.5,175*1.5,(x-30)*1.5,170*1.5);

line((x+45)*1.5,170*1.5,(x+25)*1.5,170*1.5);
line((x+45)*1.5,162*1.5,(x+25)*1.5,162*1.5);
line((x+45)*1.5,162*1.5,(x+45)*1.5,170*1.5);
line((x+25)*1.5,162*1.5,(x+25)*1.5,170*1.5);

circle(x*1.5,240*1.5,50*1.5);
circle((x+200)*1.5,240*1.5,50*1.5);

line((x+30)*1.5,170*1.5,(x+70)*1.5,240*1.5);
line((x+160)*1.5,170*1.5,(x+140)*1.5,240*1.5);
line((x+160)*1.5,170*1.5,(x+170)*1.5,168*1.5);
line(x*1.5,240*1.5,(x+30)*1.5,170*1.5);
line((x+200)*1.5,240*1.5,(x+160)*1.5,170*1.5);
getch();
closegraph();
}
