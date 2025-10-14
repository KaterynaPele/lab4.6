#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double P, S;
    int k, n;

    // 1) while ... while
    P = 1;
    k = 1;
    while (k <= 25)
    {
        S = 0;
        n = k;
        while (n <= k * k)
        {
            S += 1.0 / n;
            n++;
        }
        P *= (1 + S);
        k++;
    }
    cout << "1) " << P << endl;

    // 2) do ... do ... while
    P = 1;
    k = 1;
    do {
        S = 0;
        n = k;
        do {
            S += 1.0 / n;
            n++;
        } while (n <= k * k);
        P *= (1 + S);
        k++;
    } while (k <= 25);
    cout << "2) " << P << endl;

    // 3) for зростаючий
    P = 1;
    for (k = 1; k <= 25; k++)
    {
        S = 0;
        for (n = k; n <= k * k; n++)
        {
            S += 1.0 / n;
        }
        P *= (1 + S);
    }
    cout << "3) " << P << endl;

    // 4) for спадний
    P = 1;
    for (k = 25; k >= 1; k--)
    {
        S = 0;
        for (n = k * k; n >= k; n--)
        {
            S += 1.0 / n;
        }
        P *= (1 + S);
    }
    cout << "4) " << P << endl;

    return 0;
}