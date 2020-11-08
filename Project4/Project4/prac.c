#include <stdio.h>

typedef unsigned char* pointer;

#define WSIZE 8*sizeof(int)

long pcount_for(unsigned long x)
{
	size_t i;
	long result = 0;
	for (i = 0; i < WSIZE; i++)
	{
		unsigned bit = (x >> i) & 0x1;
		result += bit;
	}
	return result;
}

void show_bytes(pointer start, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("0x%p\t0x%.2x\n",
			start + i, start[i]);
	printf("\n");
}

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}


void getInput() {
	char ch;
	while ((ch = getchar()) != EOF){
		putchar(ch);

	}
}

void MinMax(int* score)
{
	int tmpL = 0;
	int tmpS = 100;
	for (int i = 0; i < 100; i++) {
		if (*(score + i) >= tmpL) {
			tmpL = *(score + i);
		}
		if (*(score + i) <= tmpS) {
			tmpS = *(score + i);
		}
	}
	printf("%d, %d", tmpL, tmpS);
}

int main() {
	printf("%d\n", sizeof(unsigned long));
	printf("%d" , pcount_for(10));
}