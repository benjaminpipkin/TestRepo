// example3.c
#include <stdio.h>

typedef struct test_s
{
	char fltNum[4];
	char fltDate[5];
	char brd[3];
	char off[3];
	char time[4];
} test_t;
typedef test_t * test_p;

int main()
{
	test_p testPtr = (test_p)calloc(1,sizeof(test_t));
	memcpy(testPtr->fltNum,"0001",sizeof(testPtr->fltNum));
	memcpy(testPtr->fltDate,"24OCT",sizeof(testPtr->fltDate));
	memcpy(testPtr->brd,"ATL",sizeof(testPtr->brd));
	memcpy(testPtr->off,"LHR",sizeof(testPtr->off));
	memcpy(testPtr->time,"1430",sizeof(testPtr->time));
	
	free(test_p);
	return 0;
}// end main