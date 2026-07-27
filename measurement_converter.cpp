#include <iostream>

using namespace std;

int main(void) {
	int   sys;
	float m, ft, in,decimal_part;
	
	cout<<"Enter '0 = metric' or '1 = imperial : ";
	cin>>sys;
	if(sys==0 )
	{
	    
	    cout<<"Enter  meters : ";
	    cin>>m;                
        
        /*1 meter = 3.281 feet (rounded)   // 1 foot = 12 inches1  // meter = 39.37 inches (total inches in a meter)*/
	    
	    ft=m*3.28084;
	    
	    int feet = ft;
	    
	    decimal_part = ft - feet;
	    
	    in = decimal_part*12;
	    
	    cout<<feet<<"'"<<in<<"\""<<endl;
	  
	}
	else if(sys == 1)
	{
	    cout<<"Enter inches : ";
	    cin>>in;
	    
	    cout<<"Enter feet : ";
	    cin>>ft;
	    
	    
	    float totalfeet = (ft)+(in/12.0);
	    
	    m = totalfeet / 3.28084;
	    
	    cout <<m<<"m"<<endl;
	}
	 
	else
	cout<<"Please enter valid input ";
	

	
	return 0;
}