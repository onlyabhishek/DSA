#include<iostream>
#include<vector>
using namespace std;

int first_occurence(int a[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int index=-1;
    while(start<=end)
    {
        if(a[mid]==target)
        {
            index=mid;
            end=mid-1;
        }
        else if(target<a[mid])
        {
            end=mid-1;

        }
        else
        {
            start=mid+1;
        }
        mid=(start+end)/2;


    }
    return index;
}

int last_occurence(int a[],int size,int target)
{
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int index=0;
    while(start<=end)
    {
        if(a[mid]==target)
        {
            index=mid;
            start=mid+1;
        }
        else if(target<a[mid])
        {
            end=mid-1;

        }
        else
        {
            start=mid+1;
        }
        mid=(start+end)/2;


    }
    return index;
}





int main()
{
    int a[]={1,2,3,3,3,3,3,3,5,6,7};
    int size=11;
    int target=3;
    int ans=first_occurence(a,size,target);
    int ans1=last_occurence(a,size,target);
    cout<<ans;
    cout<<ans1;
    
    
}