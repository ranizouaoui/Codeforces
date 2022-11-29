#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int energy = 0, sum = 0, n;
    cin >> n;
    int h[n]; // input
    for (int i = 0; i < n; i++)
        cin >> h[i];

    sum = h[0];

    for (int i = 0; i < n - 1; i++)
    {
        if (h[i] >= h[i + 1])
            energy += h[i] - h[i + 1];

        else
        {
            if (energy >= (h[i + 1] - h[i]))
                energy -= h[i + 1] - h[i];

            else
            {
                sum += (h[i + 1] - h[i]) - energy;
                energy = 0;
            }
        }
    }
    cout << sum; // output

    return 0;
}
