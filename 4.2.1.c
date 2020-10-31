#include <stdio.h>
#include <math.h>
	
	int main()
	{

	int s = 1, i = 9; while (i < 100) {
i++;
if (i%2!=0) continue;
s += i;
}
printf("Sum=%d", s);
return 0;
  }