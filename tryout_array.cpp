#include<iostream>

using namespace std;

int main()
{
    int i,j;
    int a[2][3]={3,3,3,3,3,3};
    int b[2][3]={1,1,1,1,1,1};
    int c[2][3];

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"The sum of the two matrices is: "<<endl;

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }

    }
            
        
        cout<<endl;

    return 0;
}

