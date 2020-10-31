#include <stdio.h>
#include <math.h>
	
	int main()
	{
	int b = 1, j; 
	for(j=9; j <= 100; j++)
	{
	if (j%2!=0) continue;
  b += j;
	}
	printf("for:%d\n", b);
	return 0;
  }