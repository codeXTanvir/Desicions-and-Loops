#include<iostream>
using namespace std;
int main()
{
    int n, reversed_number = 0, reminder;

    cout << "Enter an integer: ";
    cin >> n;

    while(n!=0)
    {
        reminder = n%10;
        reversed_number = reversed_number*10 + reminder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversed_number;

    return 0;
}
