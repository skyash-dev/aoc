#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int N = 1000;

int main()
{
    vector<int> v1, v2;
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }

    for (int i = 0; i < v1.size(); i++)
    {
        int similarity = 0;
        for (int j = 0; j < v2.size(); j++)
        {
            if (v1[i] == v2[j])
            {
                similarity += 1;
            }
        }
        sum += (v1[i] * similarity);
    }

    cout << sum << endl;
}