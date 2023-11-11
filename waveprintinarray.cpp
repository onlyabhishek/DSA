#include<iostream>
#include<vector>
using namespace std;

void waveprint(vector<vector<int>>v)
{
    int rows=v.size();
    int column=v[0].size();
    for(int i=0;i<column;i++)
    {
        if((i&1)==0)
        {
            for(int j=0;j<rows;j++)
            {
                cout<<v[j][i]<<" ";
            }
        }
        else 
        {
            for(int j=rows-1;j>=0;j--)
            {
                cout<<v[j][i]<<" ";
            }
        }
    }

}

int main()
{
    vector<vector<int>>v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    waveprint(v);
}