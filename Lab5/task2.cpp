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
            else
                state = 3;
        }
        else if (state == 1)
        {
            if (ch == 'b')
                state = 2;
            else
                state = 3;
        }
        else if (state == 2)
        {
            if (ch == 'a' || ch == 'b')
                state = 2;
        }
        else if (state == 3)
        {
            state = 3;
        }
    }

    if (state == 2)
        cout << "String is ACCEPTED (starts with ab)" << endl;
    else
        cout << "String is REJECTED" << endl;

    return 0;
}
