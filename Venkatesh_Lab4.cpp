/*
Purpose: Calculate the Fibonacci Series based on user input.
Input: Three inputs are needed; each being stored in their own variable. The first input will
       consist of how many numbers are in the series. The other two variables will consist of
       the two integers you want to calculate (integer1 and integer2).
Output: Three input variable along with a list of ten numbers, the first two being the integers
        given, and the other eight being
        the sum of the previous two integers.
Algorithm: The first step is printing integer1 and initializing a variable(counter) to 2 in 
           a for loop that will run while the counter remains less than or equal to the
           number of numbers in the series. In the body of the loop, print out integer 2,
           calculate the sum of integer1 and integer2 and put this value into integer 2. Finally,
           add 1 to the counter in the last peice of the for loop.
Test Data: seriesCount = 10, integer1 = 4, integer2 = 6    output: 4 6 10 16 26 42 68 110 178 288
*/

#include <iostream>  //preprocessor directive
#include<cmath>
using namespace std;


int main()
{
    int integer1, integer2, seriesCount, sum, counter;

    cout << "Enter the amount of numbers in series. \n";
    cin >> seriesCount;
    cout << "Enter interger 1. \n";
    cin >> integer1;
    cout << "Enter interger 2. \n";
    cin >> integer2;
    cout << integer1 << " ";

    for (counter = 2; counter <= seriesCount; counter++)
    {
        cout << integer2;
        cout << " ";
        sum = integer1 + integer2;
        integer1 = integer2;
        integer2 = sum;
    }
    return 0;
}
