#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int a, b;
	printf("Rolling the dice...\n");
	srand((unsigned int) time(NULL));
	a = rand() % 6 + 1;
	printf("Die 1: %d\n", a);
	srand((unsigned int) time(NULL)+3);
	b = rand() % 6 + 1;
	printf("Die 2: %d\n", b);
	printf("Total value: %d\n", a+b);

	return 0;
}