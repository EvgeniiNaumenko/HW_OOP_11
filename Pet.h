#pragma once
#include <iostream>
using namespace std;
//Створити базовий клас «Домашня тварина» і похідні
class Pet
{
	string _name;
	int _age;
	float _weight;
public:
	Pet();
	Pet(string, int, float);
	void setName(string);
	void setAge(int);
	void setWeight(float);
	string getName();
	int getAge();
	float getWeight();
};
//класи «Собака», «Кішка», «Папуга».За допомогою конструктора встановити ім’я кожної тварини і її характеристики.
class Dog : public Pet
{
	string _breed;
public:
	Dog();
	Dog(string);
	Dog(string, int, float, string);
	void setBreed(string);
	string getBreed();
	void info();
};

class Cat : public Pet
{
	string _breed;
public:
	Cat();
	Cat(string);
	Cat(string, int, float, string);
	void setBreed(string);
	string getBreed();
	void info();
};

class Parrot : public Pet
{
	string _breed;
public:
	Parrot();
	Parrot(string);
	Parrot(string, int, float, string);
	void setBreed(string);
	string getBreed();
	void info();
};

