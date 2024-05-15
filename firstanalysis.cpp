#include <iostream>
#include <vector>
#include <list>

int main() {
	std::cout << "������ ������ ������ ��� ������� � ������:\n";

	// �������� ������� � ������
	std::vector<int> vec;
	std::list<int> lst;

	// ���������� ��������� � ���������
	for (int i = 0; i < 10000; ++i) {
		vec.push_back(i);
		lst.push_back(i);
	}

	// ����� ������ ������, ����������� ������������
	std::cout << "����� ������ ��� �������: " << sizeof(vec) / 1024 << " KB\n";
	std::cout << "����� ������ ��� ������: " << sizeof(lst) / 1024 << " KB\n";

	return 0;
}