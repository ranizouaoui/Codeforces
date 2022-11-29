#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // Number of matchboxes
    int m; // Number of containers In the warehouse
    int x;
    int y;
    int sum = 0; // The return value :  the maximum amount of matches that a burglar can carry away
    cin >> n >> m;
    int tab[m][2];
    // input data
    for (int i = 0; i < m; i++)
    {
        cin >> tab[i][0];
        cin >> tab[i][1];
    }
    // Sorting according to the number of matches
    for (int i = 0; i < m - 1; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (tab[j][1] > tab[i][1])
            {
                x = tab[j][0];
                y = tab[j][1];
                tab[j][0] = tab[i][0];
                tab[j][1] = tab[i][1];
                tab[i][0] = x;
                tab[i][1] = y;
            }
        }
    }
    // calculation of the maximum number of matches a burglar can carry
    for (int i = 0; i < m; i++)
    {
        if (n > 0)
        {
            if (tab[i][0] <= n)
            {
                sum = sum + (tab[i][0] * tab[i][1]);
                n = n - tab[i][0];
            }
            else
            {
                sum = sum + (n * tab[i][1]);
                n = 0;
            }
        }
        else
        {
            break;
        }
    }
    cout << sum;    //output
    return 0;
}
