#include <iostream>

using namespace std;

int main()
{

    int hour, min, sec;
    char type;

    scanf("%d:%d:%d%c", &hour, &min, &sec, &type);

    if (type == 'P')
    {
        if (hour != 12)
        {
            hour += 12;
        }
    }
    else if (hour == 12)
    {
        hour = 0;
    }
    printf("%02d:%02d:%02d", hour, min, sec);
    return 0;
}
