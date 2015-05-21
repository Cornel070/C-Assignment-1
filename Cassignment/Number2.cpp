#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int x, y;
	
	cout << "Enter the two integers. \n";
	cin >> x >> y;
	
	if (x % y == 0)
	cout << "First is a multiple of the second. \n";
	else
	cout << "First is not a multiple of the second. \n";
	
	return 0;
}
