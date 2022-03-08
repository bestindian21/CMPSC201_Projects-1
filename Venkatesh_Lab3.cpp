/*Darsh Venkatesh Spring 2022
Problem description: Find hurricane category and its projected storm surge given the wind speed of the 
                     storm. 
Input: One input is needed to get the windspeed of the hurricane. 
Output: The current wind speed of the hurricane along with its category and projected storm 
        surge. 
Processing:Get the input of the windspeed and store it in a variable. If the wind speed is less 
           than 74, output that it is not classified as a hurricane. If the wind speed is between 
           74 and 95, output that it is a category 1 hurricane, and the projected storm surge is 
           between 4 and 5. If the wind speed is between 96 and 110, output that it is a 
           category 2 hurricane, and the projected storm surge is between 6 and 8. If the wind 
           speed is between 111 and 130, output that it is a category 3 hurricane, and the 
           projected storm surge is between 9 and 12. If the wind speed is between 131 and 
           150, output that it is a category 4 hurricane, and the projected storm surge is 
           between 13 and 18. If the wind speed is greater than 155, output that it is a  
           category 5 hurricane, and the projected storm surge is greater than 18. 
*/

# include<iostream> 
using namespace std;
  
int main()
{
    int windSpeed; //windspeed without decimal

    cout << "Please enter the current windspeed as a whole number. \n";
    cin >> windSpeed;  //gets the wind speed for user and enters it into windSpeed variable

    if (windSpeed < 0)  //ensures that the user enters a positive windspeed
    {
        cout << "You entered an invalid wind speed. " << endl;
        cout << "Please enter a postive whole number. " << endl;
        cin >> windSpeed;
    }

    //testing windpeed to see what category it is in and outputing accordingly 
    if (windSpeed < 74)
    {
        cout << "This is not classified as a hurricane. \n";
    }
    else if (windSpeed <= 95)
    {
        cout << "This is a category 1 hurricane with a projected storm surge between 4 and 5. \n";
    }
    else if (windSpeed <= 110)
    {
        cout << "This is a category 2 hurricane with a projected storm surge between 6 and 8. \n";
    }
    else if (windSpeed <= 130)
    {
        cout << "This is a category 3 hurricane with a projected storm surge between 9 and 12. \n";
    }
    else if (windSpeed <= 155)
    {
        cout << "This is a category 4 hurricane with a projected storm surge between 13 and 18. \n";
    }
    else
    {
        cout <<"This is a category 5 hurricane with a projected storm surge greater than 18. \n";
    }
    return 0;
}