#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int naturalNumber = 0;
	while (naturalNumber <= 0)
	{
		std::cout << "Введите натуральное число: ";
		std::cin >> naturalNumber;
	}

	int sum = 0;
	int pro = 1;
	do
	{
		sum += naturalNumber % 10;
		pro *= naturalNumber % 10;
		naturalNumber /= 10;
	} while (naturalNumber != 0);

	std::cout << "Сумма = " << sum << "\nПроизведение = " << pro;
}