/*  Program Purpose: Use a nested loop to output a pyramid where each symbol is the 
*					 coressponding row number.
*   Input: A number between 1 and 10
*   Output A number pyramid. 
*   Processing: Create a for loop that runs until the desired amount of rows is reached starting
*				at 1. Nested in the loop, we will create a lopp that out puts the row number and blanks
*				till the amount of numbers reaches the row number. Outside the nested for loop,
*				but inside the original loop increase the number by one (to move to the new row)
*				and subtract the blanks by 1. Finally create a new line. 
*/

# include <iostream>
using namespace std;

int main()
{
	int numberOfRows, rowNumber, blanks, number, i1, i2, i3;
	
	cout << "Enter an number between 1 and 10 for the number of rows. ";
	cin >> numberOfRows;
	while (numberOfRows < 1 && numberOfRows > 10)
	{
		cout << "Enter an number between 1 and 10 for the number of rows. \n ";
		cin >> numberOfRows;
	}

	blanks = numberOfRows;
	number = 1; 

	for (i1 = 1; i1 <= numberOfRows; i1++)
	{
		for (i2 = 1; i2 <= blanks; i2++)
		{
			cout << " ";
		}

		for (i3 = 1; i3 <= i1; i3++)
		{
			cout << number << " ";
		}

		number = number + 1;
		blanks = blanks - 1;
		cout << endl;
	}
	
	return  0;
}