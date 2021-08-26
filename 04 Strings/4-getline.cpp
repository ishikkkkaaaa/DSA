#include<iostream>
using namespace std;

int main()
{
    char sentence[1000];
    cin.getline(sentence, 1000);
    //we can also add stopping criteria =>cin.getline(sentence, 1000,'.');
    cout << sentence << endl;
    return 0;
}