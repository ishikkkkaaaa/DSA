#include <iostream>
using namespace std;

int main() {
    // your code goes here
    int t;

    //test cases
    cin >> t;
    //test cases finish
    while (t--)
    {
        int team1 = 0;
        int team2 = 0;
        int score = 0;
        //inputing the scores
        for (int i = 1;i <= 10;i++)
        {
            //even=>team2
            if (i % 2 == 0)
            {
                team2 += score;
            }
            //odd=>team1
            else
            {
                team1 += score;
            }
        }
        if (team1 > team2)
        {
            cout << "1";
        }
        else if (team2 > team1)
        {
            cout << "2";
        }
        else
        {
            cout << "0";

        }
        return 0;
    }
}

