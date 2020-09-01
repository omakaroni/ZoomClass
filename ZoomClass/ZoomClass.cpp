/*
This is a class in programming
this green text wont run as a code you can also use //
"\n" or std::endl; = ending a line
\t = tabs out the line when running
*/
#include <iostream>
#include <string>
#include <conio.h>

int age = 29;
bool sw = false;
char initial = 'J';
std::string Fullname = "";
double pi = 3.14;
int A = 10;
int B = 5;
int C = 20;
int Z = 10;

int main() {
	system("cls");

	if (A > B) {
		std::cout << "A is greater than B\n";
	}
	else {
		std::cout << "B is greater than A\n";
	}
	if (A == Z) {
		std::cout << "A and Z are equal\n";
	}
	if (A >= Z) { // if ( a > z || a == z )
		std::cout << "Nothing happens here \n";
	}
	if (A != B) {
		std::cout << "A and B are not equal\n";
	}

	// I add a comment here
	std::cout << "Enter your Name :";
	std::getline(std::cin, Fullname);
	std::cout << "Your full name is :" << Fullname;
	// std::cout << "Your age is : " << age << "\n";
	// std::cout << "You are young ";
	_getch();
	system("pause");
}
