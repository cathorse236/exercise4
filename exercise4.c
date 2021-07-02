#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	int a, b;
	char name[30];
	printf("What is your name?\n");
	scanf("%s", name);
	printf("Hello, %s!\n", name);
	printf("Rolling the dice...\n");
	srand((unsigned int) time(NULL));
	a = rand() % 6 + 1;
	printf("Die 1: %d\n", a);
	b = rand() % 6 + 1;
	printf("Die 2: %d\n", b);
	printf("Total value: %d\n", a+b);
	if (a + b > 7) printf("%s won.\n",name);
	else printf("%s lost.\n", name);
	return 0;
}