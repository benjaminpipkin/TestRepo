// this is a second example
#include <stdio.h>

int main()
{
	int size = 20;
	char * charPtr = (char *)malloc(size);
	for (int i = 0; i < size; i++)
	{
		*(charPtr + i) = 0xF0 + (i % 10);
	}// end for loop
	printf("%s",charPtr); // should print '01234567890123456789'
	free(charPtr);
	return 0;
} // end main