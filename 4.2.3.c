#include <stdio.h>
#include <math.h>
	
	int main()
	{
	int c = 1, k = 9; 
	do {
	if (k % 2 == 0) 
	c += k;
	k++;
  }
   while (k <= 100);
	printf("do while:%d", c);
	return 0;
	}