#include<iostream>
using namespace std;

void transposein2darray(int a[][3],int b[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            b[i][j]=a[j][i];
        }
    }


}

void transposein2darray1(int a[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }


}



int main()
{
    int a[3][3]={0};
    int b[3][3]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    transposein2darray(a,b);
    transposein2darray1(a);
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}