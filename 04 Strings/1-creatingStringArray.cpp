#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[] = { 'a', 'b', 'c', 'd', 'e','\0' };
    char b[] = "abcdefghi";
    //prints number of visibile characters
    cout << "number of visibile characters=> " << strlen(b) << endl;
    cout << "number of visibile characters+bull character=> " << sizeof(b) << endl;

    char c[100];
    cout << "Input a character ";
    cin >> c;
    cout << c << endl;

    cout << "Character a is" << a << endl;
    return 0;
}