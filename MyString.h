#pragma once
class MyString
{
	char* _str;
	int _length;

public:
					//Описати базовий клас «Рядок».
					//Методи:
	MyString();									//1) конструктор без параметрів;
	MyString(const char* s);							//2) конструктор, що приймає як параметр C - рядок(закінчується нульовим байтом);
	MyString(const MyString& obj);				//3) конструктор копіювання;
	MyString& operator=(const MyString&);		//4) оператор присвоєння;
	int lenght();								//5) отримання довжини рядка;
	void clear();								//6) очищення рядка(зробити рядок порожнім);
	~MyString();								//7) деструктор;
	MyString operator+(const MyString&);		//8) конкатенація рядків(перевантажити оператори + і += );
	void operator+=(const MyString&);
	bool operator==(const MyString&);			//9) перевірка на рівність(== ) і на нерівність(!= ).
	bool operator!=(const MyString&);
	void show();

};

