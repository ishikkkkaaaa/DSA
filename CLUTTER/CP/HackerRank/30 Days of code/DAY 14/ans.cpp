#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference
{
private:
    vector<int> elements;

public:
    int maximumDifference;

    // Add your code here
    Difference(vector<int> a)
    {
        elements = a;
        maximumDifference = 0;
    }

    void computeDifference()
    {
        for (int i = 0; i < (elements.size() - 1); i++)
        {
            for (int j = i + 1; j < elements.size(); j++)
            {

                if (elements[i] > elements[j])
                {
                    if ((elements[i] - elements[j]) > maximumDifference)
                    {
                        maximumDifference = elements[i] - elements[j];
                    }
                }
                else
                {
                    if ((elements[j] - elements[i]) > maximumDifference)
                    {
                        maximumDifference = elements[j] - elements[i];
                    }
                }
            }
        }
    }

}; // End of Difference class

int main()
{
    int N;
    cin >> N;

    vector<int> a;

    for (int i = 0; i < N; i++)
    {
        int e;
        cin >> e;

        a.push_back(e);
    }

    Difference d(a);

    d.computeDifference();

    cout << d.maximumDifference;

    return 0;
}