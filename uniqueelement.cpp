#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a[]={1,1,2,3,3,4,4,5,5,6,6,7,7};
    int size=13;
    int result=0;
    for(int i=0;i<13;i++)
    {
        result=result^a[i];
    }
    cout<<result;

}

