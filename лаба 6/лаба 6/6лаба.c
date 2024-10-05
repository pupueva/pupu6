#define CRT_NO_SECURE_DEPRECATE
#define _USE_MATH_DEFINES 

#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_CTYPE, "RUS");
	int yeas;
	//1 задание


	printf("введите год:");
	scanf_s("%d",&yeas);
	printf("%d\n", yeas);
	if(yeas % 4==0 && yeas % 100 != 0)printf("високосный год");
	else printf("не високосный год");


	//2 задание


	double x;
	printf("\nвведите x:");
	scanf_s("%lf", &x);
	x >= 3 ? printf("%lf", pow(x, 2) - 3 * x + 9) : printf("%lf", 1 / pow(x, 3) + 6);

	//3 задание

	int a, b, c;

	printf("Введите три цифры: ");
	scanf("%d %d %d", &a, &b, &c);

	if (a >= b && a >= c) {
		printf("Наибольшее число: %lf%lf%lf\n", a, (b >= c ? b : c), (b >= c ? c : b));
	}

	if (b >= a && b >= c) {
		printf("Наибольшее число: %lf%lf%lf\n", b, (a >= c ? a : c), (a >= c ? c : a));
	}
	
	else {
		printf("Наибольшее число: %lf%lf%lf\n", c, (a >= b ? a : b), (a >= b ? b : a));
		}
	

	return 0;


}