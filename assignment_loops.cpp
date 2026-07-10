#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    cout<< "Mx";

    for(int j=0;j<=n;j++)
    cout<<" "<<j;
    cout<<endl;

    for(int i=0;i<=40;i++)
    cout<<"-";
    cout<<endl;


    for(int i=0;i<=n;i++){
        cout<<i;

    for(int r=0;r<=i;r++)
    {
       long long  factN=1,factR=1,factNR=1;
        
        for(int k=1;k<=i;k++)
        factN=factN*k;

        for(int k=1;k<=r;k++)
        factR=factR*k;

        for(int k=1;k<=i-r;k++)
        factNR=factNR*k;



        cout<<" "<<factN/(factR*factNR);


    }
    cout<<endl;
    }
return 0;

}