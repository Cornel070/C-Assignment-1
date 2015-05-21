/* Question 5. 
*  Name:  Abang Ekupnse Cornelius.
*  Reg. No.: 45306494CC 
*  Dept.: Computer Science 
* Write a program that calculates the squares and cubes of the integers from 0 to 10.
*/ 

 #include <iostream>
 #include <cmath>
 using namespace std;
 
 //printTabs function to calculate and output table
 void printTabs(int startVal0, int row0, int increment0)
 {
 	int answer;
 	
 	for( int i = 1; i <= row0; i++)//start loop to control rows
 	{
 		for(int j = 1; j <= 3; j++)// loop to control columns
 		{
 			answer = pow(startVal0, j); //expression to calculate square and cube of the starting value/increment value with column j
 			cout << answer << '\t'; //output of the integer answer 
		 }
		 
		 startVal0 += increment0; //to increment the initial value
		 cout <<endl;
		 
 } //end of row loop
}

//selTabs to
void selTabs( int startValP, int rowP, int incrementP)
{
	//if statement to set increment to 1 if a value of 0 or less is input
	if(incrementP < 1)
	incrementP = 1;
	printTabs(startValP, rowP, incrementP);
}

//main function to call table from function printTabs
int main()
{
	int startVal, rows, increment;
	
	cout << "Please enter the starting value of the table: \n";
	cin >> startVal;
	cout << "Enter the number of values to be displayed: \n";
	cin >> rows;
	cout << "Enter the increment between the values: \n";
	cin >> increment;
	
	cout << "NUMBER" << '\t' << "SQUARE" << '\t' << "CUBE" <<endl;
	//call and produce table from void function printTabs
	selTabs(startVal, rows, increment);
	
	return 0;
}
 
