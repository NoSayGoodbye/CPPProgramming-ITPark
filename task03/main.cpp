/*

Написать две функции и вынести их в два отдельных файла. Первая находит 
минимум из двух чисел, вторая, пользуясь первой, находит минимум из трёх 
чисел. Прототипы функций:
int min(int, int); и int min(int,int,int);
В третьем файле напишите функцию main, которая эти функции вызывает.

Для сборки воспользуйтесь утилитой make (mingw32-make), если все получится,
засуньте две функции min в библиотеку и проверьте её работоспособность.

*/

#include <iostream>
#include "min.hpp"

int main() {
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	int c = 0;
	std::cin >> c;
	std::cout << min2(a, b) << std::endl;
	std::cout << min3(a, b, c) << std::endl;
}
