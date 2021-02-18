#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string s;
    
    getline(cin, s);
    
    int i = 0;
    while (true)
    {
        if (s[i] == NULL)
            break;
        ++i;
    }
    
    cout << i << endl;
    
    return 0;
}

