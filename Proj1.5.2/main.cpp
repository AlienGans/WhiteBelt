#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;
    cin >> a >> b >> c;

   

    if (a != 0 && b != 0 && c != 0)
    {
        d = pow(b, 2) - 4 * a * c;
        if (d == 0)
        {
            x1 = -b / (2 * a);
            cout << x1;
        }
        else if (d > 0) // 2 корня
        {
            x1 = (-b + sqrt(d)) / (2 * a); 
            x2 = (-b - sqrt(d)) / (2 * a); 

            cout << x1 << " " << x2;
        }
    }
    else
    {
        if (a == 0)
        {
            if (b == 0) cout << "";
            else //b != 0
            {
                if (c == 0) cout << 0;
                else
                {
                    x1 = -c / b;
                    cout << x1;
                }
            }
        }
        else
        {
            if (b == 0)
            {
                if (c == 0) cout << 0;
                else
                {
                    if (-c / a < 0) cout << "";
                    else 
                    {
                        x1 = sqrt(-c / a);
                        x2 = - sqrt(-c / a);
                        cout << x1 << ' ' << x2;
                    }
                }
            } 
            else // b != 0 
            {
                x1 = 0;
                x2 = -b / a;
                cout << x1 << ' ' << x2;
            }
        }
    }

    
    
    return 0;
}