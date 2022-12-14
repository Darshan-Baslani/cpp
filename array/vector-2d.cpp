#include<iostream>
#include<vector>
using namespace std;

int maxNoOfOnes(vector<vector<int>> v)
{
    int pos;
    for(int i=0; i<v[0].size(); i++)
    {
        if(v[0][i]==1)
        {
            pos = i;
            break;
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        for(int j=pos; j<v[0].size()-1; j++)
        {
            if(v[i+1][j+1] == 1)
                v[i+1][j+1] == pos;
        }
    }
    return pos;
}

int main()
{

    int r,c;
    cin>>r>>c;

    vector<vector<int>> v(r,vector<int>(c));

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cin>>v[i][j];
        }
    }
    int x =maxNoOfOnes(v); 
    cout<<x;

    return 0;
}   