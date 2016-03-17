#include<stdio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,r = 600;
float shx,shy;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(4);
line(100,200,300,200);
 
line(100,400,300,400);
 
line(100,400,100,200);
 
line(300,400,300,200);
                   
line(300,200,500,200);
 
line(300,400,500,400);
 
line(500,200,500,400);
 
line(170,250,270,250);
 
line(170,200,270,200);
 
line(170,250,170,400);
 
line(270,250,270,400);
 
line(200,50,400,50);
 
line(400,50,500,200);
 
line(300,200,200,50);
 
line(100,200,200,50);
getch();
closegraph();
delay(50);
printf("Enter the shear value for x:");
scanf("%f",&shx);

printf("Enter the shear value for y:");
scanf("%f",&shy);


initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(3);
/*line(100+200*shx,200+100*shy,300+200*shx,200+300*shy);
line(100+400*shx,400+100*shy,300+400*shx,400+300*shy);
//line(100,400,300,400);
 line(100+400*shx,400+100*shy,100+200*shx,200+100*shy);
//line(100,400,100,200);
 line(300+400*shx,400+300*shy,300+200*shx,200+300*shy);
//line(300,400,300,200);
  line(300+200*shx,200+300*shy,500+200*shx,200+500*shy);                 
//line(300,200,500,200);
 line(300+400*shx,400+300*shy,500+400*shx,400+500*shy);
//line(300,400,500,400);
 line(500+200*shx,200+500*shy,500+400*shx,400+500*shy);
//line(500,200,500,400);
 line(170+250*shx,250+170*shy,270+250*shx,250+270*shy);
//line(170,250,270,250);
 line(170+200*shx,200+170*shy,270+200*shx,200+270*shy);
//line(170,200,270,200);
 line(170+250*shx,250+170*shy,170+400*shx,400+170*shy);
//line(170,250,170,400);
 line(270+250*shx,250+270*shy,270+400*shx,400+270*shy);
//line(270,250,270,400);
 line(200+50*shx,50+200*shy,400+50*shx,50+400*shy);
//line(200,50,400,50);
 line(400+50*shx,50+400*shy,500+200*shx,200+500*shy);
//line(400,50,500,200);
line(300+200*shx,200+300*shy,200+50*shx,50+200*shy); 
//line(300,200,200,50);
 line(100+200*shx,200+100*shy,200+50*shx,50+200*shy);
//line(100,200,200,50);

getch();
closegraph();*/

line(r-100,200,r-300,200);
 
line(r-100,400,r-300,400);
 
line(r-100,400,r-100,200);
 
line(r-300,400,r-300,200);
                   
line(r-300,200,r-500,200);
 
line(r-300,400,r-500,400);
 
line(r-500,200,r-500,400);
 
line(r-170,250,r-270,250);
 
line(r-170,200,r-270,200);
 
line(r-170,250,r-170,400);
 
line(r-270,250,r-270,400);
                                                                                                                                                                                      
line(r-200,50,r-400,50);
 
line(r-400,50,r-500,200);
 
line(r-300,200,r-200,50);
 
line(r-100,200,r-200,50);
getch();
closegraph();


}
