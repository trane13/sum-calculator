#include <iostream>

using namespace std;

// Simple summary calculator
int main()
{
    cout << "Please enter your first number:" << endl;
    int FirstNumber;
    cin >> FirstNumber;

    cout << "Please enter your second number:" << endl;
    int SecondNumber;
    cin >> SecondNumber;

    int Sum = FirstNumber + SecondNumber;

    cout << "The summary of the two numbers are: " << Sum << endl;
    return 0;
}
