//�������� �1
//�������� ������� ���� �������� ������� � ������
//����� �������, �ʳ���, �������.�� ��������� ������������ ���������� ��� ����� ������� � �� ��������������.

#pragma once
#include <iostream>
using namespace std;
#include "Pet.h"

int main()
{
	Dog pet1;
	pet1.info();
	cout << "+============================" << endl;
	Dog pet2("Doberman");
	pet2.info();
	cout << "+============================" << endl;
	Dog pet3("Bob", 1, 32, "Doberman");
	pet3.info();
	cout << "+============================" << endl;

	return 0;
}