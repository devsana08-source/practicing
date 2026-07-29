#include<iostream>

using namespace std;

int main()
{
    int c0;
    int steps = 0;
    
    /*take any non-negative and non-zero integer number and name it c0;
    if it's even, evaluate a new c0 as c0 / 2
    otherwise, if it's odd, evaluate a new c0 as 3 ⋅ c0 + 1
    if c0 ≠ 1, skip to point 2 */

    cout<<"Enter the number : ";
    cin>>c0;
    
    while(c0 != 1 )
    {
        if(c0 % 2 == 0)
        {
            c0 = c0/2;
        }
        else{
            c0 =  (3 * c0) + 1;
        }
        
        cout<<"c0 is : "<<c0<<endl;
        
        steps++;
    }
    
    cout<<"Number of steps are : "<<steps<<endl;
    
    
    return 0;
}