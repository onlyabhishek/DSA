#include<iostream>
using namespace std;

int maximumin2darray(int a[][3])
{
    int result=INT_MIN;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]>result)
            {
                result=a[i][j];

            }
        }
    }
    return result;


}


int main()
{
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    int result=maximumin2darray(a);
    cout<<result;
}