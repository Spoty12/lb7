#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	float x, y;
	char c;

	printf("Введите выражение: ");
	
	if (scanf("%f%c%f", &x, &c, &y) != 3)
	{
		printf("Ошибка ввода.\n");
		return 1;
	}
	switch (c)
	{
	case('+'):
		printf("=%f\n", x + y);
		break;
	
	case('-'):
		printf("=%f\n", x - y);
		break;

	case('*'):
		printf("=%f\n", x * y);
		break;

	case('/'):
		if (y != 0)
			printf("%f\n", x/y);
		else
			printf("Ошибка, деление на ноль\n");
		break;

	case('^'):
		printf("%f\n", pow(x, y));
		break;

	default:
		printf("Неизвестная команда\n");
	}
	return 0;

}
