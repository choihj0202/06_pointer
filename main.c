#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x = 10;
	int y = 20;
	int *ptr;
	
	ptr = &x;
	printf("ptr의 값 : %d\n", *ptr);
	
	ptr = &y;
	printf("ptr의 값 : %d\n", *ptr);	// 첫번째  
	
	ptr = &x;
	printf("ptr의 값 : %d\n", *ptr);
	
	*ptr = 20;
	printf("x의 값 : %d\n", x);		// 두번째  
	
	return 0;
}
