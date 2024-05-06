#pragma once
class MyString
{
	char* _str;
	int _length;

public:
					//������� ������� ���� ������.
					//������:
	MyString();									//1) ����������� ��� ���������;
	MyString(const char* s);							//2) �����������, �� ������ �� �������� C - �����(���������� �������� ������);
	MyString(const MyString& obj);				//3) ����������� ���������;
	MyString& operator=(const MyString&);		//4) �������� ���������;
	int lenght();								//5) ��������� ������� �����;
	void clear();								//6) �������� �����(������� ����� �������);
	~MyString();								//7) ����������;
	MyString operator+(const MyString&);		//8) ������������ �����(������������� ��������� + � += );
	void operator+=(const MyString&);
	bool operator==(const MyString&);			//9) �������� �� ������(== ) � �� ��������(!= ).
	bool operator!=(const MyString&);
	void show();

};

