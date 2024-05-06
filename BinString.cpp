#include "BinString.h"

BinString::BinString() :MyString() {}

BinString::BinString(const char* str) : MyString(str)
{
    bool valid = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            valid = false;
            break;
        }
    }
    if (!valid) {
        this->clear(); // вызов очистки если строка не верная
        
    }
}

BinString::BinString(const BinString& obj):MyString(obj){}

BinString& BinString::operator=(const BinString& obj) 
{
        if (this != &obj) { 
            MyString::operator=(obj);
        }
}

BinString::~BinString()
{
}

void BinString::changeSign()
{
}

BinString BinString::operator+(const BinString& obj)
{
    this->_str[this->lenght]
	return BinString();
}

BinString BinString::operator+=(const BinString&)
{
	return BinString();
}

bool BinString::operator==(const BinString&)
{
	return false;
}

bool BinString::operator!=(const BinString&)
{
	return false;
}
