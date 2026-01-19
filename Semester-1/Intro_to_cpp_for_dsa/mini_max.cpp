#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int *n = new int;
    // cin >> *n;

    int *a = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    // int n = sizeof(a) / sizeof(a[0]);

    int max = INT_MIN ;
    int min = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    cout << min << " " << max << endl;

    return 0;
}