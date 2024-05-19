#include "BinString.h"

BinString::BinString() :MyString() {}

BinString::BinString(int lenght):MyString(lenght){}

BinString::BinString(const char* str) : MyString(str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != '0' && str[i] != '1') {
            this->clear(); // вызов очистки если строка не верная
            throw IncorrectValueException("Incorrect value exception");
        }
    }
}

BinString::BinString(const BinString& obj):MyString(obj){}

BinString& BinString::operator=(const BinString& obj) 
{
    if (this != &obj) 
    { 
        *this = obj;
    }
    return *this;
}

BinString::~BinString()
{
}

void BinString::changeSign()
{
}

BinString BinString::operator+(BinString& obj)
{
    int maxSize,minSize;
    int fSize = this->lenght();
    int sSize = obj.lenght();
    char* newStr; 
    char* fStr = this->getStr();
    char* sStr = obj.getStr();
    if (fSize>sSize)
    {

        maxSize = fSize;
        minSize = sSize;
        newStr = new char[maxSize+1];
        for (int i = 0; i < maxSize; i++)
        {
            newStr[i] = fStr[i];
        }
        newStr[maxSize] = '\0';
        for (int i = maxSize-1,j = minSize-1; i >= minSize; i--,j--)
        {
            if (newStr[i] == sStr[j])
            {
                newStr[i] = '0';
            }
            else
                newStr[i] = '1';
            cout << newStr[i] << endl;
        }
    }
    else
    {
        maxSize = sSize;
        minSize = fSize;
        newStr = new char[maxSize];
        for (int i = 0; i < maxSize; i++)
        {
            newStr[i] = sStr[i];
        }
        newStr[maxSize] = '\0';
        for (int i = minSize; i <= maxSize; i++)
        {
            if (newStr[fSize - i] == fStr[sSize - i])
            {
                newStr[maxSize - i] = 0;
            }
            else
                newStr[maxSize - i] = 1;
        }
    }

    BinString result(newStr);
    delete[] fStr;
    delete[] sStr;
    delete[] newStr;
    return result;

}

BinString BinString::operator+=(BinString&)
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
