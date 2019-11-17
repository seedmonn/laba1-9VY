#pragma warning(disable:4996) 
#include <stdio.h> 
#include <time.h> 
#define N 10

int main()
{
	int* p;
	int a[N], i, max;
	p = a;
	srand(time(NULL));
	max = p;
	printf("Заменить все отрицательные элементы целочисленного массива размера N на значение максимального.\n");
	printf("Искомый массив:\n");
	for (i = 0; i < N; i++)
	{
		*(a+i) = rand() % 101 + (-50);
		printf("A[%d] = %d\n", i, *(a + i));
		if (*(a + i) > max)
		{
			max = *(a + i);
		}
	}
	printf("Результат:\n");
	for (i = 0; i < N; i++)
	{
		if (*(a + i) < 0)
		{
			*(a + i) = max;
		}
		printf("A[%d] = %d\n", i, *(a + i));
	}
	printf("Макс. эл. = %d \n", max);
	return 0;
}