#include "Pet.h"



Pet::Pet():Pet("NoName",0,0.0f){}
Pet::Pet(string name, int age, float weight)
{
	_name = name;
	_age = age;
	_weight = weight;
}
void Pet::setName(string name)
{
	_name = name;
}
void Pet::setAge(int age)
{
	_age = age;
}
void Pet::setWeight(float weight)
{
	_weight = weight;
}
string Pet::getName()
{
	return _name;
}
int Pet::getAge()
{
	return _age;
}
float Pet::getWeight()
{
	return _weight;
}


Dog::Dog() :Pet(), _breed("NoBreed") {}
Dog::Dog(string breed) :Pet(), _breed(breed) {}
Dog::Dog(string name, int age, float weight, string breed) :Pet(name, age, weight), _breed(breed) {}
void Dog::setBreed(string breed)
{
	_breed = breed;
}
string Dog::getBreed()
{
	return _breed;
}
void Dog::info()
{
	cout << "Dog" << endl;
	cout << "Name: " << Pet::getName() << endl;
	cout << "Age: " << Pet::getAge() << endl;
	cout << "Weight: " << Pet::getWeight() << endl;
	cout << "Breed: " << _breed << endl;
}


Cat::Cat() :Pet(), _breed("NoBreed") {}
Cat::Cat(string breed) :Pet(), _breed(breed) {}
Cat::Cat(string name, int age, float weight, string breed) :Pet(name, age, weight), _breed(breed) {}
void Cat::setBreed(string breed)
{
	_breed = breed;
}
string Cat::getBreed()
{
	return _breed;
}
void Cat::info()
{
	cout << "Cat" << endl;
	cout << "Name: " << Pet::getName() << endl;
	cout << "Age: " << Pet::getAge() << endl;
	cout << "Weight: " << Pet::getWeight() << endl;
	cout << "Breed: " << _breed << endl;
}

Parrot::Parrot() :Pet(), _breed("NoBreed") {}
Parrot::Parrot(string breed) :Pet(), _breed(breed) {}
Parrot::Parrot(string name, int age, float weight, string breed) :Pet(name, age, weight), _breed(breed) {}
void Parrot::setBreed(string breed)
{
	_breed = breed;
}
string Parrot::getBreed()
{
	return _breed;
}
void Parrot::info()
{
	cout << "Cat" << endl;
	cout << "Name: " << Pet::getName() << endl;
	cout << "Age: " << Pet::getAge() << endl;
	cout << "Weight: " << Pet::getWeight() << endl;
	cout << "Breed: " << _breed << endl;
}
