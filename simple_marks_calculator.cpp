#include<iostream>
using namespace std;

int main()
{

    int n=3;
    int sub1,sub2,sub3,Total,Avg;
    

    cout<<"Enter marks:"<<endl;

    cin>>sub1>>sub2>>sub3;

    Total=sub1+sub2+sub3;
    Avg=Total/n;

    cout<<"Total marks: "<<Total<<endl;
    cout<<"Average marks: "<<Avg<<endl;

    if(Total>=120)
    {
        cout<<"Grade: A"<<endl;
    }
    else if(Total>=90)
    {
        cout<<"Grade: B"<<endl;
    }
    else
    {
        cout<<"Grade: C"<<endl;
    }

    return 0;

}