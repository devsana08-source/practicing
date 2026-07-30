#include <iostream>

using namespace std;

int main(void) {
    
    int n;
    
    cout<<"Enter number greater than 1 : ";
    cin>>n;
    
    if(n < 2 )
    {
        cout<<" Sorry, the side size is too small "<<endl;
    }
    else if(n > 15 )
    {
        cout<<"Sorry, the side size is too big "<<endl;
    }
    else
    {
	    cout << '+';
	    
	    for(int i = 0; i < n; i++)
		    cout << '-';
		    
	    cout << '+' << endl;
	    
	    for(int i = 0; i < n; i++) {
		    cout << '|';
		    
		    for(int j = 0; j < n; j++)
			    cout << ' ';
			    
		    cout << '|' << endl;
	    }
	    cout << '+';
	    
	    for(int i = 0; i < n; i++)
		    cout << '-';
		    
	    cout << '+' << endl;
    }
	return 0;
}


