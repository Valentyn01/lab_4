#include <stdio.h>
#include <math.h>
int main()
{
float y=0,x=-1,b=3,dx=0.05;
printf("X\t\t\t\t\tY\n");
do
{
  if(x>0)
  {
y=log(x)/x;
printf(" %f\t%9.2lf\n", x, y);
  }
x+=dx;
}
while(x<=b);
return 0;
}