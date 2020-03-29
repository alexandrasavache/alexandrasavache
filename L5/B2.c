#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 30

int stack[MAX_SIZE], top = -1;
void push(int nr)
{
	if (top == MAX_SIZE - 1)
	{
		printf("\nEroare : Stiva este plina\n ");
		return;
	}
	stack[++top] = nr;
}

void pop()
{
	if (top == -1)
	{
		printf("\nEroare : stiva este goala\n");
		return;
	}
	top--;
}

void print()
{
	int i;
	for (i = 0; i <= top; i++)
		printf("%d ", stack[i]);
	printf("\n");
}

int main()
{
	int C, N, a[30], i;
	printf("C = ");
	scanf("%d", &C);
	printf("N= ");
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	for (i = 0; i < N; i++)
		if (((a[i] >> C) & 1) == 1)
			push(a[i]);
	print();
	system("pause");
	return 0;
}