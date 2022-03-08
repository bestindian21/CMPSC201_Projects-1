/*
* 
* Purpose: Find the largest and lowest hardness for a formulation.
* Input: Fomulation name, amount of treatments, and hardness values for each treatment.
* Output: The largest and lowest hardness for the formulation along with their treatment number.
* Process: Use a for loop that runs till all treatments are accounted for, each time a value is entered that is larger/smaller
*		   than the previous largest and smallest, it will replace it. 
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	int numberOfTreatments, largestTreatmentNumber, smallestTreatmentNumber, i;
	double treatmentHardness, largestHardness=0, smallestHardness=12;
	char moreStatments;
	string treatmentName;

	do
	{
		cout << "Enter the formulation name. ";
		getline(cin, treatmentName);

		cout << "Enter how many heat treatments will be used (at least three). ";
		cin >> numberOfTreatments;
		while (numberOfTreatments <= 3)
		{
			cout << "The number of treatments can not be less than three, please enter the number of heat treatments. ";
			cin >> numberOfTreatments;
		}

		for (i = 1; i <= numberOfTreatments; i++)
		{
			cout << "Enter hardness for treatment " << (i) << " of formulation " << treatmentName << ".  ";
			cin >> treatmentHardness;
			while (treatmentHardness < 0 && treatmentHardness >= 11)
			{
				cout << "Hardness must be between 1 and 11, please enter a correct value for hardness.";
				cin >> treatmentHardness;
			}

			if (treatmentHardness > largestHardness)
			{
				largestHardness = treatmentHardness;
				largestTreatmentNumber = i;
			}

			if (treatmentHardness < smallestHardness)
			{
				smallestHardness = treatmentHardness;
				smallestTreatmentNumber = i;
			}
		}

		cout << "    \n";
		cout << "Treatment " << largestTreatmentNumber << " produced the highest hardness for " << treatmentName << " of " << largestHardness << " mohs and treatment " << smallestTreatmentNumber << " produced the lowest hardness of " << smallestHardness << " mohs. \n";
		cout << "Are there more formulations? (y/n) \n";
		cin >> moreStatments;
	}

	while (moreStatments == 'y');
	return 0;
}