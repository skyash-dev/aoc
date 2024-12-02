#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int N = 1000;

int main()
{
    vector<int> v1, v2;
    int distance = 0;

    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        v1.push_back(x);
        v2.push_back(y);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < v1.size(); i++)
    {
        distance += abs(v2[i] - v1[i]);
    }
    cout << distance << endl;
}

// took 1.5 day because of schools and all but yeah i did it!!
// it was funn!