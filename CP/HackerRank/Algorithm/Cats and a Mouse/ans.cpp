#include <bits/stdc++.h>

using namespace std;

int main()
{
    int Q;
    scanf("%d", &Q);
    while (Q--)
    {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);
        x = abs(x - z);
        y = abs(y - z);
        if (x == y)
            printf("Mouse C\n");
        else if (x < y)
            printf("Cat A\n");
        else
            printf("Cat B\n");
    }
    return 0;
}