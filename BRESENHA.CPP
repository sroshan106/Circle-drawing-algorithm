#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,x1,y1,x2,y2,x,y,e,dx,dy,i;
	initgraph(&gd,&gm,"");
	cout<<"enter x1,y1,x2,y2 coordinates";
	cin>>x1>>y1>>x2>>y2;
	if(x1>x2)
	dx=x1-x2;
	else
	dx=x2-x1;
	if(y1>y2)
	dy=y1-y2;
	else
	dy=y2-y1;
	x=x1;
	y=y1;
	e=2*dy-dx;
	i=1;
	do
	{

		putpixel(x,y,3);
		while(e>=0)
		{
			y=y+1;
			e=e-2*dx;
		}
		x=x+1;
		e=e+2*dy;
		i=i+1;
	}while(i<=dx);
	getch();
}
