#include<iostream>
#include<vector>
using namespace std;

int binarysearch(int a[],int target,int size)
{
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(a[mid]==target)
        {
            return mid;
        }
        else if(a[mid]<target)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5,6,7};
    int size=7;
    int target=5;
    int result=binarysearch(a,target,size);
    if(result==-1)
    {
        cout<<"the no. is not able to find";
    }
    else
    {
        cout<<"we can able to find the no.";
    }

}