/* Question 1. 
*  Name:     [Abang Ekupnse Cornelius]
*  Reg. No.: [45306494CC]
*  Dept.:    [Computer Science]
* Write a program that accepts two integers and determines if its odd or even.
*/ 

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int x;
	
	cout << " This program reads two integers and determines if it's odd or even. \n";
	cout << "Enter integer: \n";
	cin >> x;
	
	if (x % 2 == 0)
	cout << "The integer is even. \n";
	if (x % 2 == 1)
	cout << "The integer is odd. \n";
	
	return 0;
}
