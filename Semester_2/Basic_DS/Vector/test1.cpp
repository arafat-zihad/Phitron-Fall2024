#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 5, 20};
    sort(v.begin(), v.end());
    v.insert(v.begin() + 1, 15);
    v.erase(v.begin() + 2);
    cout << " Front : " << v.front();
    cout << " Back : " << v.back();
    
}

