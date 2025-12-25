#include <iostream>
using namespace std;

int main()
{
    char str[100];
    int state = 0;  

    cout << "Enter a string of a and b: ";
    cin >> str;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (state == 0)
        {
            if (ch == 'a')
                state = 1;
            else if (ch == 'b')
                state = 0;
        }
        else if (state == 1)
        {
            if (ch == 'a')
                state = 1;
            else if (ch == 'b')
                state = 2;
        }
        else if (state == 2)
        {
            if (ch == 'a')
                state = 1;
            else if (ch == 'b')
                state = 3;
        }
        else if (state == 3)
        {
            if (ch == 'a')
                state = 1;
            else if (ch == 'b')
                state = 0;
        }
    }

    if (state == 3)
        cout << "String is ACCEPTED" << endl;
    else
        cout << "String is REJECTED" << endl;

    return 0;
}

