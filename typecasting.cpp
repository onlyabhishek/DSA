#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

// void sum1(vector<int>&result)
// {

//     cout<<"Hello";
// }

int main()
{
    vector<int>result(2);
    char a='A';
    int b=int(a);
    cout<<b;
    for(int i=0;i<2;i++)
    {
        cin>>result[i];
    }
    //  for(int i=0;i<5;i++)
    // {
    //     int sum=sum+result[i];
    //     cout<<result[i];
    //     cout<<sum;
    // }
    // sum1(result);

}