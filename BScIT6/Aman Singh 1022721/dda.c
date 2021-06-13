#include<stdio.h>
#include<graphics.h>
#include<math.h>

void DDA(int X0, int Y0, int X1, int Y1)
{
    int dx = X1 - X0;
    int dy = Y1 - Y0;
 
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
 
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;
 
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (round(X),round(Y),RED);  
        X += Xinc;           
        Y += Yinc;        
        delay(100);          
                             
    }
}
 
int main()
{
    int gd = DETECT, gm;
 
    initgraph (&gd, &gm, Null);  
 
    DDA(100, 200, 400, 600);
    return 0;
}