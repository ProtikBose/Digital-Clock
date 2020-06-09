# include "iGraphics.h"
#include <time.h>

int x1=175,r=5,y2=315,x2=330 ;
int y=355;
double xa[]= {40,80,85,80,40,35,40};
double ya[]= {400,400,395,390,390,395,400};
double x2a[]= {35,40,40,35,30,30,35};
double y2a[]= {395,385,345,340,345,385,395};
double x3a[]= {35,40,80,85,80,40,35};
double y3a[]= {335,340,340,335,330,330,335};
double x4a[]= {85,80,80,85,90,90,85};
double y4a[]= {340,345,385,395,385,345,340};
double y5a[]= {330,325,285,275,285,325,330};
double y6a[]= {275,280,280,275,270,270,275};
double y7a[]= {275,285,325,330,325,285,275};
double x8a[]= {110,150,155,150,110,105,110};
double x9a[]= {105,110,110,105,100,100,105};
double x10a[]= {105,110,150,155,150,110,105};
double x11a[]= {155,150,150,155,160,160,155};
double x15a[]= {195,235,240,235,195,190,195};
double x16a[]= {190,195,195,190,185,185,190};
double x17a[]= {190,195,235,240,235,195,190};
double x18a[]= {240,235,235,240,245,245,240};
double x22a[]= {265,305,310,305,265,260,265};
double x23a[]= {260,265,265,260,255,255,260};
double x24a[]= {260,265,305,310,305,265,260};
double x25a[]= {310,305,305,310,315,315,310};
double x29a[]= {350,390,395,390,350,345,350};
double x30a[]= {345,350,350,345,340,340,345};
double x31a[]= {345,350,390,395,390,350,345};
double x32a[]= {395,390,390,395,400,400,395};
double x36a[]= {420,460,465,460,420,415,420};
double x37a[]= {415,420,420,415,410,410,415};
double x38a[]= {415,420,460,465,460,420,415};
double x39a[]= {465,460,460,465,470,470,465};
void iDraw()
{

    iClear();
    int a,b,c,d,e,f;
    int t[3] = {};
    time_t ctime;
    struct tm * current;
    time ( &ctime );
    current = localtime ( &ctime );
    t[0] = current->tm_hour;
    t[1] = current->tm_min;
    t[2] = current->tm_sec;
    a=t[0]/10;
    b=t[0]%10;
    if(a==0)
    {
        iSetColor(186,143,73);
        iFilledPolygon(xa,ya,7 );
        iFilledPolygon(x2a,y2a,7 );
        iFilledPolygon(x4a,y4a,7 );
        iFilledPolygon(x2a,y5a,7 );
        iFilledPolygon(x3a,y6a,7 );
        iFilledPolygon(x4a,y7a,7 );

    }
    if(a==1)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x4a,y4a,7 );
        iFilledPolygon(x4a,y7a,7 );

    }
    if(a==2)
    {
        iSetColor(186,143,73);
        iFilledPolygon(xa,ya,7 );
        iFilledPolygon(x4a,y4a,7 );
        iFilledPolygon(x2a,y5a,7 );
        iFilledPolygon(x3a,y6a,7 );
        iFilledPolygon(x3a,y3a,7 );
    }
    if(b==0)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x8a,ya,7 );
        iFilledPolygon(x9a,y2a,7 );
        iFilledPolygon(x11a,y4a,7 );
        iFilledPolygon(x9a,y5a,7 );
        iFilledPolygon(x10a,y6a,7 );
        iFilledPolygon(x11a,y7a,7 );
    }
    if(b==1)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x11a,y4a,7 );
        iFilledPolygon(x11a,y7a,7 );
    }
    if(b==2)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x8a,ya,7 );
        iFilledPolygon(x11a,y4a,7 );
        iFilledPolygon(x10a,y3a,7 );
        iFilledPolygon(x9a,y5a,7 );
        iFilledPolygon(x10a,y6a,7 );
    }
    if(b==3)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x8a,ya,7 );
        iFilledPolygon(x11a,y4a,7 );
        iFilledPolygon(x10a,y3a,7 );
        iFilledPolygon(x11a,y7a,7 );
        iFilledPolygon(x10a,y6a,7 );
    }
    if(b==4)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x9a,y2a,7 );
        iFilledPolygon(x10a,y3a,7 );
        iFilledPolygon(x11a,y4a,7 );
        iFilledPolygon(x11a,y7a,7 );
    }
    if(b==5)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x8a,ya,7 );
        iFilledPolygon(x9a,y2a,7 );
        iFilledPolygon(x10a,y3a,7 );
        iFilledPolygon(x11a,y7a,7 );
        iFilledPolygon(x10a,y6a,7 );
    }
    if(b==6)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x8a,ya,7 );
        iFilledPolygon(x9a,y2a,7 );
        iFilledPolygon(x10a,y3a,7 );
        iFilledPolygon(x9a,y5a,7 );
        iFilledPolygon(x10a,y6a,7 );
        iFilledPolygon(x11a,y7a,7 );
    }
    if(b==7)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x8a,ya,7 );
        iFilledPolygon(x11a,y4a,7 );
        iFilledPolygon(x11a,y7a,7 );
    }
    if(b==8)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x8a,ya,7 );
        iFilledPolygon(x9a,y2a,7 );
        iFilledPolygon(x10a,y3a,7 );
        iFilledPolygon(x11a,y4a,7 );
        iFilledPolygon(x9a,y5a,7 );
        iFilledPolygon(x10a,y6a,7 );
        iFilledPolygon(x11a,y7a,7 );
    }
    if(b==9)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x8a,ya,7 );
        iFilledPolygon(x9a,y2a,7 );
        iFilledPolygon(x10a,y3a,7 );
        iFilledPolygon(x11a,y4a,7 );

        iFilledPolygon(x10a,y6a,7 );
        iFilledPolygon(x11a,y7a,7 );
    }
    c=t[1]/10;
    d=t[1]%10;
    if(c==0)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x15a,ya,7 );
        iFilledPolygon(x16a,y2a,7 );
        iFilledPolygon(x18a,y4a,7 );
        iFilledPolygon(x16a,y5a,7 );
        iFilledPolygon(x17a,y6a,7 );
        iFilledPolygon(x18a,y7a,7 );
    }
    if(c==1)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x18a,y4a,7 );
        iFilledPolygon(x18a,y7a,7 );
    }
    if(c==2)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x15a,ya,7 );
        iFilledPolygon(x18a,y4a,7 );
        iFilledPolygon(x17a,y3a,7 );
        iFilledPolygon(x16a,y5a,7 );
        iFilledPolygon(x17a,y6a,7 );
    }
    if(c==3)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x15a,ya,7 );
        iFilledPolygon(x18a,y4a,7 );
        iFilledPolygon(x17a,y3a,7 );
        iFilledPolygon(x17a,y6a,7 );
        iFilledPolygon(x18a,y7a,7 );
    }
    if(c==4)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x16a,y2a,7);
        iFilledPolygon(x17a,y3a,7);
        iFilledPolygon(x18a,y4a,7 );
        iFilledPolygon(x18a,y7a,7 );
    }
    if(c==5)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x15a,ya,7 );
        iFilledPolygon(x16a,y2a,7);
        iFilledPolygon(x17a,y3a,7 );
        iFilledPolygon(x17a,y6a,7 );
        iFilledPolygon(x18a,y7a,7 );
    }
    if(d==0)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x22a,ya,7 );
        iFilledPolygon(x23a,y2a,7 );
        iFilledPolygon(x25a,y4a,7 );
        iFilledPolygon(x23a,y5a,7 );
        iFilledPolygon(x24a,y6a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    if(d==1)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x25a,y4a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    if(d==2)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x22a,ya,7 );
        iFilledPolygon(x25a,y4a,7 );
        iFilledPolygon(x24a,y3a,7 );
        iFilledPolygon(x23a,y5a,7 );
        iFilledPolygon(x24a,y6a,7 );
    }
    if(d==3)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x22a,ya,7 );
        iFilledPolygon(x25a,y4a,7 );
        iFilledPolygon(x24a,y3a,7 );
        iFilledPolygon(x24a,y6a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    if(d==4)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x23a,y2a,7 );
        iFilledPolygon(x24a,y3a,7 );
        iFilledPolygon(x25a,y4a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    if(d==5)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x22a,ya,7 );
        iFilledPolygon(x23a,y2a,7 );
        iFilledPolygon(x24a,y3a,7 );
        iFilledPolygon(x24a,y6a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    if(d==6)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x22a,ya,7 );
        iFilledPolygon(x23a,y2a,7 );
        iFilledPolygon(x24a,y3a,7 );
        iFilledPolygon(x23a,y5a,7 );
        iFilledPolygon(x24a,y6a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    if(d==7)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x22a,ya,7 );
        iFilledPolygon(x25a,y4a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    if(d==8)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x22a,ya,7 );
        iFilledPolygon(x23a,y2a,7 );
        iFilledPolygon(x24a,y3a,7 );
        iFilledPolygon(x25a,y4a,7 );
        iFilledPolygon(x23a,y5a,7 );
        iFilledPolygon(x24a,y6a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    if(d==9)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x22a,ya,7 );
        iFilledPolygon(x23a,y2a,7 );
        iFilledPolygon(x24a,y3a,7 );
        iFilledPolygon(x25a,y4a,7 );
        iFilledPolygon(x24a,y6a,7 );
        iFilledPolygon(x25a,y7a,7 );
    }
    e=t[2]/10;
    f=t[2]%10;
    if(e==0)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x29a,ya,7 );
        iFilledPolygon(x30a,y2a,7 );
        iFilledPolygon(x32a,y4a,7 );
        iFilledPolygon(x30a,y5a,7 );
        iFilledPolygon(x31a,y6a,7 );
        iFilledPolygon(x32a,y7a,7 );
    }
    if(e==1)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x32a,y4a,7 );
        iFilledPolygon(x32a,y7a,7 );
    }
    if(e==2)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x29a,ya,7 );
        iFilledPolygon(x32a,y4a,7 );
        iFilledPolygon(x31a,y3a,7 );
        iFilledPolygon(x30a,y5a,7 );
        iFilledPolygon(x31a,y6a,7 );
    }
    if(e==3)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x29a,ya,7 );
        iFilledPolygon(x32a,y4a,7 );
        iFilledPolygon(x31a,y3a,7 );
        iFilledPolygon(x31a,y6a,7 );
        iFilledPolygon(x32a,y7a,7 );
    }
    if(e==4)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x30a,y2a,7 );
        iFilledPolygon(x31a,y3a,7 );
        iFilledPolygon(x32a,y4a,7 );
        iFilledPolygon(x32a,y7a,7 );
    }
    if(e==5)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x29a,ya,7 );
        iFilledPolygon(x30a,y2a,7 );
        iFilledPolygon(x31a,y3a,7 );
        iFilledPolygon(x31a,y6a,7 );
        iFilledPolygon(x32a,y7a,7 );

    }
    if(f==0)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x36a,ya,7 );
        iFilledPolygon(x37a,y2a,7 );
        iFilledPolygon(x39a,y4a,7 );
        iFilledPolygon(x37a,y5a,7 );
        iFilledPolygon(x38a,y6a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }
    if(f==1)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x39a,y4a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }
    if(f==2)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x36a,ya,7 );
        iFilledPolygon(x39a,y4a,7 );
        iFilledPolygon(x38a,y3a,7 );
        iFilledPolygon(x37a,y5a,7 );
        iFilledPolygon(x38a,y6a,7 );
    }
    if(f==3)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x36a,ya,7 );
        iFilledPolygon(x39a,y4a,7 );
        iFilledPolygon(x38a,y3a,7 );
        iFilledPolygon(x38a,y6a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }
    if(f==4)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x37a,y2a,7 );
        iFilledPolygon(x38a,y3a,7 );
        iFilledPolygon(x39a,y4a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }
    if(f==5)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x36a,ya,7 );
        iFilledPolygon(x37a,y2a,7 );
        iFilledPolygon(x38a,y3a,7 );
        iFilledPolygon(x38a,y6a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }
    if(f==6)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x36a,ya,7 );
        iFilledPolygon(x37a,y2a,7 );
        iFilledPolygon(x38a,y3a,7 );
        iFilledPolygon(x37a,y5a,7 );
        iFilledPolygon(x38a,y6a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }
    if(f==7)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x36a,ya,7 );
        iFilledPolygon(x39a,y4a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }
    if(f==8)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x36a,ya,7 );
        iFilledPolygon(x37a,y2a,7 );
        iFilledPolygon(x38a,y3a,7 );
        iFilledPolygon(x39a,y4a,7 );
        iFilledPolygon(x37a,y5a,7 );
        iFilledPolygon(x38a,y6a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }
    if(f==9)
    {
        iSetColor(186,143,73);
        iFilledPolygon(x36a,ya,7 );
        iFilledPolygon(x37a,y2a,7 );
        iFilledPolygon(x38a,y3a,7 );
        iFilledPolygon(x39a,y4a,7 );

        iFilledPolygon(x38a,y6a,7 );
        iFilledPolygon(x39a,y7a,7 );
    }

    iFilledCircle(x1,y,r);
    iFilledCircle(x1,y2,r);
    iFilledCircle(x2,y,r);
    iFilledCircle(x2,y2,r);


}


void iMouseMove(int mx, int my)
{

}
void iMouse(int button, int state, int mx, int my)
{
}
void iKeyboard(unsigned char key)
{

}
void iSpecialKeyboard(unsigned char key)
{


}
int main()
{
    iInitialize(500, 500, "demo");
    return 0;
}
