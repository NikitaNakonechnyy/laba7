#include <iostream>
#include <vector>
#include <list>

int main() {
	std::cout << "Анализ объема памяти для вектора и списка:\n";

	// Создание вектора и списка
	std::vector<int> vec;
	std::list<int> lst;

	// Добавление элементов в контейнер
	for (int i = 0; i < 10000; ++i) {
		vec.push_back(i);
		lst.push_back(i);
	}

	// Вывод объема памяти, занимаемого контейнерами
	std::cout << "Объем памяти для вектора: " << sizeof(vec) / 1024 << " KB\n";
	std::cout << "Объем памяти для списка: " << sizeof(lst) / 1024 << " KB\n";

	return 0;
}