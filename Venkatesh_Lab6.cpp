/*
* Problem description : Create a program to calculate to calculate the weight of a person on another planet.
* Input: 2 inputs are needed; the weight of the person and the planet that you want his weight on.
* Output: The output should be the person's weight on Earth along with there weight on the other planet chosen.
* Processing: Set each planet to a corresponding number. Create a function that use a switch statment to calculate the weight on the
*             other planet. Weight formula is newWeight= weight * planets conversion factor. Also creat another function with a 
*             swithich statement that set the planet equal to the planets name. 
*/

using namespace std;
#include <iostream>  
#include<cmath>


//function declarations
double calculateWeight(double weight, int planetNumber);
string getPlanetName(int planetNumber);

int main()
{
	int planetNumber;
	double weight, calculatedWeight;
	char repeatProgram;
	string gotPlanetName;

	do
	{
		cout << "Enter the corresponding number of the planet that you want your weight calculated one. \n";
		cout << "Mercury-1, Venus-2, Earth-3, Mars-4, Moon-5, Jupiter-6, Saturn-7, Uranus-8, Neptune-9, Pluto-10 \n";
		cin >> planetNumber;
		while (planetNumber > 10 || planetNumber < 1)
		{
			cout << "You entered an invalid corresponding number, please enter a number for a planet from the list. \n";
			cin >> planetNumber;
		}

		cout << "Please enter the weight of the person you want to convert in kgs. (Do not include kg). \n";
		cin >> weight;
		while (weight <= 0)
		{
			cout << "You have entered an invalid weight, please enter a weight above 0. \n";
			cin >> weight;
		}

		calculatedWeight = calculateWeight(weight, planetNumber);
		gotPlanetName = getPlanetName(planetNumber);
		cout << "A weight on Earth of " << weight << " kg corresponds to " << calculatedWeight << " kg on " << gotPlanetName << ". \n";

		cout << "Do you want to calculate another weght (y/n)?  ";
		cin >> repeatProgram;
	}
	while (repeatProgram == 'y');
	return 0;
}

/*
*  Function comments:
*  This is a function that calculates the entered weight on another planet.
*  input: weight you want calculated and corresponding planet number is passed by the function call
*  output: the weight on the selected planet is returned to the call function
*  processing: use a switch statement where each case is the corresponding planet number and the weight is
*			   caluculated for each case with newWeight= weight * planets conversion factor. Return newWeight
*/
double calculateWeight(double weight, int planetNumber)
{
	double newWeight = 0.0;
	switch (planetNumber)
	{
		case 1: newWeight = weight * 0.4155;
		break;
		case 2: newWeight = weight * 0.8975;
		break;
		case 3: newWeight = weight * 1.0;
		break;
		case 4: newWeight = weight * 0.3507;
		break;
		case 5: newWeight = weight * 0.166;
		break;
		case 6: newWeight = weight * 2.5374;
		break;
		case 7: newWeight = weight * 1.0677;
		break;
		case 8: newWeight = weight * 0.8947;
		break;
		case 9: newWeight = weight * 1.1794;
		break;
		case 10: newWeight = weight * 0.8975;
		break;
		default: cout << "You enetered an invalid planet. \n";
		break;
	}
	return newWeight;
}

/* Function comments: (just for fun and practice.)
*  This function's purpose is to get the planet name from the number entered.
*  input: the corresponding planet number is passed through the function call 
*  output: the planet name is returned to the call function
*  processing: use the corressponding number as the case number in a switch statement. 
*			   Then set a string variable to the correct planet name. Return the name 
*/
string getPlanetName(int planetNumber)
{
	string planetName;
	switch (planetNumber)
	{
		case 1: (planetName) = "Mercury";
		break;
		case 2: (planetName) = "Venus";
		break;
		case 3: (planetName) = "Earth";
		break;
		case 4: (planetName) = "Mars";
		break;
		case 5: (planetName) = "Moon";
		break;
		case 6: (planetName) = "Jupiter";
		break;
		case 7: (planetName) = "Saturn";
		break;
		case 8: (planetName) = "Uranus";
		break;
		case 9: (planetName) = "Neptune";
		break;
		case 10: (planetName) = "Pluto";
		break;
		default: cout << "You enetered an invalid planet. \n";
		break;
	}
	return planetName;
}


