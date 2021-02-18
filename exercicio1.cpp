#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    string s = "FooBaa";
    int x, y;
    
    for (int i = 1; i < 101; ++i)
    {
    
        if (i % 3 != 0 && i % 5 != 0)
        {
            cout << i << endl;
            continue;
        }
        
        x = (i % 3 == 0) ? 0 : 3;
        y = (i % 5 == 0) ? 6 : 3;
        
        cout << s.substr(x, y) << endl;
        
    }
    
    return 0;
}
