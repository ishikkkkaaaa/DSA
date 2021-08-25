#include <iostream>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();

    //counting
    int space = 0;
    int alpha = 0;
    int digit = 0;

    while (ch != '\n')
    {
        if(ch>='0' and ch<='9')
        {
			digit++;
		}
        else if ((ch >= 'a' and ch <= 'z') or (ch >= 'A' and ch <= 'Z'))
        {
            alpha++;
        }
        else if(ch==' ' or ch=='\t'){
			space++;
		}
        ch = cin.get();
    }
    cout << "Number of characters=>" << alpha << endl;
    cout << "Number of space=>" << space << endl;
    cout << "Number of digits=>" << digit << endl;

    return 0;

}