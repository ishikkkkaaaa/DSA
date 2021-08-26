#include<iostream>
#include<string> 
#include<vector>

using namespace std;

int main()
{
    string s; //dynamicArray

    //string s = "Hello, world";
    //cout << s;

    //to input string
    //getline(cin, s);
    //cout << s;

    //for accepting a para terminated by something 
    //getline(cin, s, '.');
    //cout << s;

    //for iterating over a string
    /* string s = "Hello, world";
    for (char str : s) {
        cout << str << ", ";
    } */

    //creating an array of string, inputing multiple strings
    int n = 5;
    string temp;

    vector<string> sarr;
    while (n--)
    {
        getline(cin, temp);
        sarr.push_back(temp);
    }
    for (string x : sarr)
    {
        cout << x << "," << endl;
    }

    return 0;
}