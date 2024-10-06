#include <stdio.h>
#include <locale.h>
#include <math.h>
#define   pi            3.14159265358979323846
float main()
{
	setlocale(LC_ALL, "RUS");
	//задание 1
	int yeas;
	float ost;
	puts("Введите год");
	scanf_s("%d", &yeas);
	ost = yeas % 4;
	if (ost == 0 && yeas % 100 != 0 || yeas % 400 == 0)  printf("Год %d високосный\n", yeas);
	else printf("Год %d не високосный\n", yeas);

	//задание 2
	//при x = 1, F = 0; при x = 2, F = 4
	float x, F;
	puts("Введите значение x");
	scanf_s("%f", &x);
	printf("F = %2.3f\n", (x >= 0 && x <= 1) ? pow(x, 2) - x : pow(x, 2) - sin(pow(x, 2) * pi));

	//задание 3
	int c,r1,r2,r3,r4;
	puts("Введите четырехзначное число");
	scanf_s("%d", &c);
	r1 = c % 10;
	r2 = (c / 10) % 10;
	r3 = (c / 100) % 10;
	r4 = c / 1000;
	if (r1 % 2 == 0) puts("Число единиц - четное");
	if (r2 % 2 == 0) puts("Число десятков - четное");
	if (r3 % 2 == 0) puts("Число сотен - четное");
	if (r4 % 2 == 0) puts("Число тысяч - четное");
}