#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString() : MyString(nullptr) {}

MyString::MyString(const char* s) {
	if (s != nullptr) {
		for (int i = 0; s[i] != '\0'; i++) {
			this->_length++;
		}
		this->_str = new char[_length + 1];
		for (int i = 0; i < _length; i++) {
			_str[i] = s[i];
		}
		_str[_length] = '\0';
	}
	else {
		_str = new char[11]{};
		_length =10;
	}
}

MyString::MyString(const MyString& obj)
{
	_length = obj._length;
	if (obj._str != nullptr)
	{
		_str = new char[_length + 1];
		for (int i = 0; i < _length; i++)
		{
			_str[i] = obj._str[i];
		}
		_str[_length] = '\0';

	}
}

MyString& MyString::operator=(const MyString& str)
{
	_length = str._length;
	_str = new char[_length];
	for (int i = 0; i < _length; i++)
	{
		_str[i] = str._str[i];
	}
	_str[_length] = '\0';
	return *this;
}

int MyString::lenght()
{
	return _length;
}

void MyString::clear()
{
	if (_str != nullptr)
	{
		delete[] _str;
		_str = nullptr;
	}
}

//Х	деструктор;
MyString::~MyString()
{
	if (_str != nullptr)
	{
		delete[] _str;
	}
}

MyString MyString::operator+(const MyString& str)
{
	int newLength = _length + str._length + 1;
	char* newStr = new char[newLength];
	for (int i = 0; i < _length; i++)
	{
		newStr[i] = _str[i];
	}
	for (int i = _length, j = 0; j < str._length; i++, j++)
	{
		newStr[i] = str._str[j];
	}
	newStr[newLength] = '\0';
	_length = newLength;
	delete[] _str;
	_str = newStr;
	return *this;
}

void MyString::operator+=(const MyString& str)
{
	int newLength = _length + str._length + 1;
	char* newStr = new char[newLength];
	for (int i = 0; i < _length; i++)
	{
		newStr[i] = _str[i];
	}
	for (int i = _length, j = 0; j < str._length; i++, j++)
	{
		newStr[i] = str._str[j];
	}
	newStr[newLength] = '\0';
	_length = newLength;
	delete[] _str;
	_str = newStr;
}

bool MyString::operator==(const MyString& str)
{
	int result = strcmp(_str, str._str);

	if (result == 0) {
		return true;
	}
	else
		return false; 
}

bool MyString::operator!=(const MyString& str)
{
	return !(*this == str);
}

void MyString::show()
{
	for (int i = 0; i < _length; i++)
	{
		cout << _str[i];
	}
	cout << endl;
}
