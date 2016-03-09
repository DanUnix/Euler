// Author: Daniel Pulley
// Description: sum of multiples of 3 or 5
// Date: 02/2/2016
#include <stdio.h>

// Main Function
int main()
{
    // setup a counter
	int i,count=0;
    // Loop through 0 - 999
	for(i = 0; i < 1000; i++)
		if((i % 3) == 0 || (i % 5) == 0) // if i mod 3 or i mod 5 equals 0 
			count += i;	                // Then sum the multiples
    // print out answer
	printf("Answer: %d\n", count);
}
// End of Main Function
