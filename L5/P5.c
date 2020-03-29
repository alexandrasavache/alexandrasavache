#define _CRT_SECURE_NO_WARNINGS
#define MAX_ELEM 50
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct binaryStack
{
	char binaryNumber[8];
}S;

int isStackFull(int size)
{
	return size >= MAX_ELEM;
}

int isStackEmpty(int size)
{
	return size == -1;
}

void pushInt(int* size, int* stack, int valToAdd)
{
	if (isStackFull(*size))
	{
		printf("Stack is full!\n");
	}
	else
	{
		(*size)++;
		stack[*size] = valToAdd;
	}
}

void pushBinary(int* size, S* stack, char valToAdd[])
{
	int i;
	if (isStackFull(*size))
	{
		printf("\nStack is full!\n");
	}
	else {
		(*size)++;
		for (i = 0; i < 8; i++)
			stack[*size].binaryNumber[i] = valToAdd[i];
	}
}

int pop(int* size, int* stack)
{
	(*size)--;
	return stack[*size];
}

int getTop(int* size, int* stack)
{
	return stack[*size];
}

void printBinaryStack(int size, S* stack)
{
	int i, j;
	if (isStackEmpty(size))
	{
		printf("\nStack is empty!\n");
	}
	else
	{
		for (i = size; i >= 0; i--)
		{
			for (j = 0; j < 8; j++)
				printf("%c", stack[i].binaryNumber[j]);

			printf("\n");
		}

	}
}

void printIntStack(int size, int* stack)
{
	int i;
	if (isStackEmpty(size))
	{
		printf("\nStack is empty!\n");
	}
	else
	{
		for (i = 0; i <= size; i++)
			printf("%d\n", stack[i]);
	}
}

int main()
{
	int size_st, size_st2, size_aux, i, j, top, st[MAX_ELEM], aux[MAX_ELEM], ok;
	char bin[8];
	S st2[MAX_ELEM];

	size_st = -1;
	size_st2 = -1;
	size_aux = -1;

	for (i = 1; i <= MAX_ELEM; i++)
		pushInt(&size_st, st, i);

	while (!isStackEmpty(size_st))
	{

		top = getTop(&size_st, st);
		ok = 1;

		for (i = 2; i <= top / 2; i++)
			if (top % i == 0)
				ok = 0;

		if (size_st == 0)
		{
			pushInt(&size_aux, aux, top);
			pop(&size_st, st);
		}
		else if (ok)
		{
			if (top % 2 == 1)
				bin[7] = '1';
			else
				bin[7] = '0';

			top = top / 2;
			i = 6;
			while (top)
			{
				if (top % 2 == 1)
					bin[i] = '1';
				else
					bin[i] = '0';

				top = top / 2;
				i--;
			}

			for (j = i; j >= 0; j--)
				bin[j] = 0;

			pushBinary(&size_st2, st2, bin);
			pop(&size_st, st);
		}
		else
		{
			pushInt(&size_aux, aux, top);
			pop(&size_st, st);
		}

	}

	while (!isStackEmpty(size_aux))
	{
		top = getTop(&size_aux, aux);
		pushInt(&size_st, st, top);
		pop(&size_aux, aux);
	}

	printf("Binary stack is: \n");
	printBinaryStack(size_st2, st2);

	printf("First stack is: \n");
	printIntStack(size_st, st);

	return 0;
}