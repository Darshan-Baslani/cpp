#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
// input = -10, -5, 2, 4, 7 output = 4,16,25,49,100

vector<int> sortedSquares(vector<int> &a)
{

    int n = a.size(), i = 0, j = n - 1;

    vector<int> ans;

    while (i <= j)
    {

        if (abs(a[i]) <= abs(a[j]))
        {
            a[j] *= a[j];
            ans.push_back(a[j--]);
        }
        else
        {
            a[i] *= a[i];
            ans.push_back(a[i++]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    vector<int> v;
    int n;
    cout << "Enter no of elements you want to enter: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int ele;
        cout << "Enter " << i << " element: ";
        cin >> ele;
        v.push_back(ele);
    }

    sortedSquares(v);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}