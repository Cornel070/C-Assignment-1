/* Question 6. 
*  Name:      [Abang Ekupnse Cornelius.]
*  Reg. No.:  [45306494CC] 
*  Dept.:    [Computer Science] 
* Create a Body Mass Index (BMI) calculator application that reads the user's weight in kilograms
* and height in meters, calculate and display the user's body mass index. Also, the application should 
* display the following information from the Department of Health and Human Services/National Institutes of Health
* so the user can evaluate his/her BMI:
* BMI VALUES
* Underwweight: less than 18.5
* Normal:       between 18.5 and 24.9
* Overweight:   between 25 and 29.9
* Obese:        30 or greater
*/ 

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int weight;
	int height;
	int BMI;
	cout << "This program calculates your Body Index Mass (BMI) using your weight in kilogram and your height in metres: \n";

	cout << " Please enter your weight(kg): " <<endl;
	cin >> weight;
	
	cout << "Enter your height(m): " <<endl;
	cin >> height;
	
	BMI = weight / (height * height);
	
	cout << setprecision(2) << fixed << "Your BMI is: " <<BMI <<endl;
	
	if (BMI < 18.5)
	cout << "You are under-weight." <<endl;
	else
	if ((BMI > 18.5) && (BMI < 24.9))
	cout << "Your weight is in the normal range. =)" <<endl;
	else
	if ((BMI > 25) && (BMI < 29.9))
	cout << "You are over-weight." <<endl;
	else
	cout << "You are Obese." <<endl;

	return 0;	
}
