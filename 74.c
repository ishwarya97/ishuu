#include <stdio.h>

int main(void) {
	int x;
	float n;
	printf("enter the decimal number");
	scanf("%f",&n);
	x=(int)(n+0.5);
	printf("%d",x);
	return 0;
}
