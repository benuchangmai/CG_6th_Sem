#include"stdio.h"
#include"graphics.h"
#include"stdlib.h"
void main()
{
    float xwmin,xwmax,ywmax,ywmin;
    float xvmin,xvmax,yvmax,yvmin;
    float x[15],y[15],yv,xv,sx,sy;
    int gd=DETECT,gm,i;
    //clrscr();
    printf("\n enter window port coordinates:\n(xwmin,ywmin,xwmax,ywmax): ");
    scanf("%f%f%f%f",&xwmin,&ywmin,&xwmax,&ywmax);
    printf("\n enter view port coordinates:\n(xvmin,yvmin,xvmax,yvmax): ");
    scanf("%f%f%f%f",&xvmin,&yvmin,&xvmax,&yvmax);
    //printf("\n enter vertices for triangle: ");
   /* for(i=0;i < 3;i++)
    {
    printf("\n enter(x%d,y%d):",i,i);
    scanf("%f%f",&x[i],&y[i]);
    }
    	 x[0]=100;y[0]=200;
	 x[1]=300;y[1]=200;
	 x[3]=300;y[2]=400;
	 x[2]=100;y[3]=400;
	 x[4]=500;y[4]=200;
	 x[5]=500;y[5]=400;
	 x[6]=200;y[6]=50;
	 x[7]=400;y[7]=50;*/
	
 x[0]=10;y[0]=20;
	 x[1]=30;y[1]=20;
	 x[3]=30;y[2]=40;
	 x[2]=10;y[3]=40;
	 x[4]=50;y[4]=20;
	 x[5]=50;y[5]=40;
	 x[6]=20;y[6]=5;
	 x[7]=40;y[7]=5;
    sx=((xvmax-xvmin)/(xwmax-xwmin));
    sy=((yvmax-yvmin)/(ywmax-xwmin));

    initgraph(&gd,&gm," ");
    outtextxy(80,30,"window port");
    rectangle(xwmin,ywmin,xwmax,ywmax);
    /*for(i=0;i <2;i++)
    {
    line(x[i],y[i],x[i+1],y[i+1]);
    }
    line(x[2],y[2],x[0],y[0]);*/
	line(x[0],y[0],x[1],y[1]);
        line(x[1],y[1],x[3],y[3]);
	line(x[0],y[0],x[2],y[2]);
	line(x[2],y[2],x[3],y[3]);
	line(x[3],y[3],x[5],y[5]);
	line(x[4],y[4],x[5],y[5]);
	line(x[1],y[1],x[4],y[4]);
	line(x[0],y[0],x[1],y[1]);
	line(x[6],y[6],x[0],y[0]);
	line(x[6],y[6],x[1],y[1]);
	line(x[7],y[7],x[6],y[6]);
	line(x[7],y[7],x[4],y[4]);

    getch();
    cleardevice();
    delay(50);
    for(i=0;i <8;i++)
    {
    x[i]=xvmin+((x[i]-xwmin)*sx);
    y[i]=yvmin+((y[i]-ywmin)*sy);
    }
    outtextxy(150,10,"view port");
    rectangle(xvmin,yvmin,xvmax,yvmax);
   /* for(i=0;i <2;i++)
    {
    line(x[i],y[i],x[i+1],y[i+1]);
    }
    line(x[2],y[2],x[0],y[0]);*/
	line(x[0],y[0],x[1],y[1]);
        line(x[1],y[1],x[3],y[3]);
	line(x[0],y[0],x[2],y[2]);
	line(x[2],y[2],x[3],y[3]);
	line(x[3],y[3],x[5],y[5]);
	line(x[4],y[4],x[5],y[5]);
	line(x[1],y[1],x[4],y[4]);
	line(x[0],y[0],x[1],y[1]);
	line(x[6],y[6],x[0],y[0]);
	line(x[6],y[6],x[1],y[1]);
	line(x[7],y[7],x[6],y[6]);
	line(x[7],y[7],x[4],y[4]);

    getch();
}

