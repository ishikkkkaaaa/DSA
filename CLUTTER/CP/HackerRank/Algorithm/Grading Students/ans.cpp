#include <iostream>
using namespace std;

int main()
{
    int n, grade;
    int newGrade = 0;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> grade;
        if (grade >= 38)
        {
            newGrade = grade % 5;
            if (newGrade >= 3)
            {
                grade += 5 - newGrade;
            }
        }
        cout << grade << endl;
    }

    return 0;
}
