
#include <algorithm>
#include <iostream>
#include <locale>
int main()
{
	setlocale(LC_ALL, "Russian");
	//Счастливое число
	int num, num1, num2,sum1,sum2;
	int num11, num22, num33, num44, num55, num66;
	std::cout << "Введите 6 значное число"<<std::endl;
	std::cin >> num;
	if (num > 999999 or num < 100000) {
		std::cout << "\nВаше число не 6 значное\n";
	}
	else {
		num1 = num / 1000;

		num11 = num1 / 100;
		num22 = (num1 / 10) % 10;
		num33 = num1 % 10;

		num2 = num % 1000;

		num44 = num2 / 100;
		num55 = (num2 / 10) % 10;
		num66 = num2 % 10;

		sum1 = num11 + num22 + num33;
		sum2 = num44 + num55 + num66;

		if (sum1 == sum2) {
			std::cout << "\nВаше число счастливое!";
		}
		else {
			std::cout << "\nЧисло не счастливое(";
		}
		
	}

	//смена чисел
	int ch;

	int n1, n2, n3, n4;
	std::cout << "\nВведите 4 значное число\n";
	std::cin >> ch;
	if (ch > 9999 or ch < 1000) {
		std::cout<<"\nЧисло не 4 значное\n";
	}
	else {
		n1 = ch / 1000;
		n2 = (ch / 100) % 10;
		n3 = (ch / 10) % 10;
		n4 = ch % 10;
		std::cout << ch << " - " << n2 << n1  << n4 << n3;
	}
	//Сильнейшее число
	std::cout << "\nВведите 7 чисел\n";
	int leader, n;
	std::cin >> leader;
	for (int i = 0;i < 6;i++) {
		std::cin >> n;
		leader = std::max(leader, n);
	}
	std::cout << "лидер среди этих чисел - " << leader;


	return 0;
}


