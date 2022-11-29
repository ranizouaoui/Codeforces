#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, q = 0;
    int sum = 0;
    char chr;
    cin >> n >> m >> chr;
    char tab[n][m];
    char tab1[n * m];
    for (int i = 0; i < n; i++) // input
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tab[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (tab[i][j] == chr)
            {
                for (int h = i - 1; h <= i + 1; h++)
                {
                    if (h >= 0 && h < n)
                    {

                        if (tab[h][j] != chr && tab[h][j] != '.')
                        {

                            for (int k = 0; k < sum; k++)
                            {
                                if (tab1[k] == tab[h][j])
                                {
                                    q = 1;
                                }
                            }

                            if (q == 0)
                            {

                                tab1[sum] = tab[h][j];

                                sum++;
                            }
                        }
                        q = 0;
                    }
                }
                for (int w = j - 1; w <= j + 1; w++)
                {
                    if (w >= 0 && w < m)
                    {
                        if (tab[i][w] != chr && tab[i][w] != '.')
                        {
                            for (int k = 0; k < sum; k++)
                            {
                                if (tab1[k] == tab[i][w])
                                {
                                    q = 1;
                                }
                            }
                            if (q == 0)
                            {
                                tab1[sum] = tab[i][w];

                                sum++;
                            }
                        }
                        q = 0;
                    }
                }
            }
        }
    }
    cout << sum; // output

    return 0;
}
