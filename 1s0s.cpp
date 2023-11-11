#include<iostream>
using namespace std;

int main()
{
    int a[]={0,1,1,0,1,0,0,0,1,0,1};
    int high=11;
    int low=0;
    while(low<=high)
    {
        if(a[low]==0)
        {
            low++;
        }
        else if(a[high]==1)
        {
            high--;
        }
        else{
        swap(a[low],a[high]);
        low++;
        high--;
      

        }
    }

        
    for(int i=0;i<11;i++)
    {
        cout<<a[i];
    }


}