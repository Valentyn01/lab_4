#include <stdio.h>
#include <math.h>
	

	int main()
	{
	    int x,z,y,er;
	    float a;
	    do
	    {
	    er=0;
	    printf("введіть ціле число x:");
	    scanf("%d",&x);
	    printf("введіть ціле число z:");
      scanf("%d",&x);
	    printf("введіть ціле число y:");
	    scanf("%d",&y);
	    if(sqrt(y)-2*sqrt(x*z)==0)
	    {
	        printf("помилка, ви ділите на 0\n");
	        er=1;
	    }
	    else if(x==0)
	    {
	        printf("помилка, ви ділите на 0\n");
	        er=1;
	    }
	    }while(er==1);
	    a=sqrt(x)+2*sqrt(x*z)/sqrt(y)-2*sqrt(x*z);
	    printf("відповідь:%g",a);
	    return 0;
	}