/*Darsh Venkatesh Spring 2022
Problem description: Find the total surface area of the illuminated portion of the moon.

Input: The percentage of the moon that is illuminated. 
Output: The percent of the moon illuminated along with its surface area.
Processing: Get the percent of the illuminated moon as a decimal from the user, 
calculate the angle of the segment using pi * (percentage/100) knowing that the moons radius is 1738.3 km, 
calculate the surface area using the formula Surface Area = 2 * (1738.3)^2 * angle, 
output the percentage of moon illumination and the calculated surface area. 
*/
# include<iostream>
# include<string>
using namespace std;
const double PI = 3.14159;
const double radius = 1738.3;

int main()
{
	double percentage, angle;
	string surfaceArea;

	cout << "Enter the percentage of the moon that is illuminated." << endl;
	cin >> percentage;

	angle = PI * (percentage / 100);
	surfaceArea = to_string(2.0 * pow(radius, 2.0) * angle);

	cout << "The percentage of the moon that is illuminated at " << percentage << "% has a surface area of "
		<< surfaceArea << " km^2." << endl;

}


