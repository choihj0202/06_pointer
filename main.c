#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int grade[5] = {10, 20, 30, 40, 50};
	int average;
	int *ptr;
	
	// pointer setting
	ptr = grade;
	
	// average calculation
	for (i=0; i<5; i++)
	{
		average += *(ptr+i);
	}
	average /= 5;
	
	printf("average : %d\n", average);

	return 0;
}
