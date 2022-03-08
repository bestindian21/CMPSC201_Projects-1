/*
* Problem description : Create a program to calculate to distance light can travel in a certain material in a set amount of time. 
* Input: 2 inputs are needed; the material and time you want light to travel in said material.
* Output: The output should be the the distance that light traveled in the chosen material. The chosen material and time should also be displayed. 
* Processing: Get the material type from user and use a switch statment to set the index of refraction and material to the corresponding iteam.
			  Then use the formula distance = (speed of light / index of refraction) * (time in seconds). Output the distance. 
*/

using namespace std;
#include <iostream>  
#include<cmath>
#include <iomanip> 

const double speedOfLight = 300000000;

int main()
{
	double indexOfRefraction, minutes, distance;
	char mineral;
	string mineralName;

	cout << "Select any Mineral: Enter D for diamond, E for Emerald, R for Ruby, G for Garnet, and Q for Quartz. \n";
	cin >> mineral;
	if (!(mineral == 'D' || mineral == 'E' || mineral == 'R' || mineral == 'G' || mineral == 'Q'))
	{
		cout << "You have entered an invalid Mineral, please enter a valid letter. Keep in mind that the program is case sensitive. \n";
		cin >> mineral;
	}

	switch (mineral)
	{
		case 'D': indexOfRefraction = 2.419;
				  mineralName = "Diamond";
				  break;
		case 'E': indexOfRefraction = 1.568;
				  mineralName = "Emerald";
				  break;
		case 'R': indexOfRefraction = 1.7684;
				  mineralName = "Ruby";
				  break;
		case 'G': indexOfRefraction = 1.734;
				  mineralName = "Garnet";
				  break;
		case 'Q': indexOfRefraction = 1.458;
				  mineralName = "Quartz";
				  break;
	}

	cout << "Please enter how long in minutes you want light to travel in the chosen material. \n";
	cin >> minutes; 
	if (minutes <= 0)
	{
		cout << "You have entered an invalid time, please enter a time above 0. \n";
		cin >> minutes;
	}

	distance = (speedOfLight / indexOfRefraction) * (minutes * 60.0);
	distance = distance / 1000.00; //distance in kilometers 

	cout << "Light will travel " << setprecision(5) << distance << " kilometers during " << setprecision(4) << minutes << " minutes in " << mineralName << ". \n";
}