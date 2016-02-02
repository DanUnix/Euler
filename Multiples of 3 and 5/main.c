// Author: Daniel Pulley
// Description: sum of multiples of 3 or 5
// Date: 02/2/2016
#include <stdio.h>

int main()
{
	int i,count=0;
	for(i = 0; i < 1000; i++)
		if((i % 3) == 0 || (i % 5) == 0)
			count += i;	

	printf("Answer: %d\n", count);
}
