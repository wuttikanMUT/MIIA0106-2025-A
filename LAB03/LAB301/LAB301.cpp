#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
	int a, b;
	printf("Enter A: ");
	scanf("%d", &a);
	printf("Enter B: ");
	scanf("%d", &b);
	printf("A + B = %d\n", a + b);
	printf("A - B = %d\n", a - b);
	printf("A * B = %d\n", a * b);
	printf("A / B = %d\n", a / b); // หารจำนวนเต็ม
	printf("A %% B = %d\n", a % b); // %% เพื่อพิมพ์เครื่องหมาย %
	return 0;
}