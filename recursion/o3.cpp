#include <bits/stdc++.h>
using namespace std;

string numberInKInarySystem(int number, int inarity)
{
    string answer;
    if (number == 0) return answer;
    char temp;
    if (number % inarity >= 10) temp = number % inarity + 55;
    else temp = number % inarity + 48;
    answer = numberInKInarySystem(number / inarity, inarity) + temp;
}

int main()
{

    int number, inarityOfSystem;
    cin >> number >> inarityOfSystem;
    cout << numberInKInarySystem(number, inarityOfSystem);

    return 0;
}