#include <graphics.h>
#include <stdio.h>
#include <math.h>

#define pi 3.14159265359

void draw(float x1, float y1, float x2, float y2, float col)
{
    float dx, dy, s, m;
    float xi, yi, x, y;

    dx = x2 - x1;
    dy = y2 - y1;
 
    if (abs(dx) > abs(dy))
    s = abs(dx);
    else
    s = abs(dy);
 
    xi = dx / (float) s;
    yi = dy / (float) s;
 
    x = x1;
    y = y1;
 
    putpixel(x1, y1, col);
 
    for (m = 0; m < s; m++) {
    x += xi;
    y += yi;
    putpixel(x, y, col);
    }
}

void spokes(int hdc,int xc,int yc, int a, int b)
            {
                    putpixel(xc+a, yc+b, hdc);
                    putpixel(xc-a, yc+b, hdc);
                    putpixel(xc-a, yc-b, hdc);
                    putpixel(xc+a, yc-b, hdc);
                    putpixel(xc+b, yc+a, hdc);
                    putpixel(xc-b, yc+a, hdc);
                    putpixel(xc-b, yc-a, hdc);
                    putpixel(xc+b, yc-a, hdc);
          }

void CirclePolar(int hdc,int xc,int yc, int R)
            {
            int x=R,y=0;
            double theta=0,dtheta=1.0/R;
            spokes(hdc,xc,yc,x,y );
            while(x>y)
            {
            theta+=dtheta;
            x=round(R*cos(theta));
            y=round(R*sin(theta));
            spokes(hdc,xc,yc,x,y);
            }
            }

void main()
{
 
    int i, gd = DETECT, gm = DETECT, s, dx, dy, m, x1, y1, x2, y2;
    float xi, yi, x, y;
 
    initgraph(&gd, &gm, "");
    cleardevice();

    draw(100, 100, 240, 100, LIGHTRED);
    draw(100, 125, 240, 125, LIGHTRED);
    draw(100, 150, 240, 150, GREEN);
    draw(100, 175, 240, 175, GREEN);

    for(i=126; i<150; i++)
    draw(100, i, 240, i, WHITE);

    draw(100, 100, 100, 125, LIGHTRED);
    draw(100, 125, 100, 150, WHITE);
    draw(100, 150, 100, 175, GREEN);
    draw(100, 175, 100, 400, WHITE);

    draw(240, 100, 240, 125, LIGHTRED);
    draw(240, 125, 240, 150, WHITE);
    draw(240, 150, 240, 175, GREEN);

   /* draw(50, 400, 180, 400, WHITE);
    draw(50, 405, 180, 405, WHITE);
    draw(50, 400, 50, 405, WHITE);
    draw(180, 400, 180, 405, WHITE);*/

    setcolor(LIGHTRED);
    floodfill(120, 120, LIGHTRED);
    setcolor(GREEN);
    floodfill(120, 160, GREEN);
    setcolor(BLUE);
   
    CirclePolar(BLUE, 170, 137.5, 12.5);

    for(i=0; i<24; i++)
    {
        float theta = pi/12*i;
        draw(170, 137.5, 170+12.5*sin(theta), 137.5+12.5*cos(theta), BLUE);
    }

    getch();
}
