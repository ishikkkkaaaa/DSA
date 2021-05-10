#include <bits/stdc++.h>

using namespace std;

int main()
{
    string temp;

    //meal, taking value in form of string and then converting to double (stod)
    getline(cin, temp);
    double mealCost = stod(temp);

    //meal, taking value in form of string and then converting to integer (stoi)
    getline(cin, temp);
    int tipPercent = stoi(temp);

    //meal, taking value in form of string and then converting to integer (stoi)
    getline(cin, temp);
    int taxPercent = stoi(temp);

    //all calculations!!
    double tip = tipPercent * mealCost / 100;
    double tax = taxPercent * mealCost / 100;

    //final cost to pay
    int totalCost = (int)round(mealCost + tip + tax);
    cout << totalCost;

    return 0;
}