#include <stdio.h>
#include <math.h>

void chalange()
{
	int n, i;
	double num, max = 0, min = 0, sum = 0, avg;
	
	printf("Введите количество чисел: ");
	scanf("%d", &n);
	
	for (i = 0; i < n; i++)
	{
		printf("Введите число: ");
		scanf("%lf", &num);
		
		if (i == 0)
		{
			max = num;
			min = num;
		}
		
		if (num > max)
			max = num;
		
		if (num < min)
			min = num;
		
		sum += num;
	}
	
	avg = sum / n;
	
	printf("Максимальное значение: %.2lf\n", max);
	printf("Минимальное значение: %.2lf\n", min);
	printf("Сумма всех чисел: %.2lf\n", sum);
	printf("Среднее арифметическое: %.2lf\n", avg);
	
	
}


void one_zero_zero ()
{
	int sums = 0;
	

	for (int i=1; i<=100; ++i)
	{
		
		sums += i;
	}
	printf("\n___________________________________________");
	printf("\nСумма чисел от 1 до 100: %d",sums);
	printf("\n--------------------------------------------");
	
	
}


int main (void)
{
	 chalange();  one_zero_zero();
	return 0;
}