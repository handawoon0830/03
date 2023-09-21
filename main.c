#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a;
	int b;
	float c;
	
	printf(" enter tne first number: ");
	scanf("%d",&a);
	
	printf(" enter the second number: ");
	scanf("%d",&b);
	
	c= (float)a/b;
	
	printf("the divided answer of %d and %d is %f", a, b, c);
	return 0;
}
