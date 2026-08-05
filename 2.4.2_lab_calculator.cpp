#include<iostream>

using namespace std;

int main()
{
    int choice;
    double n1, n2;
    
    do{
        cout << "\nMENU:\n";
        cout << "0 - Exit\n";
        cout << "1 - Addition\n";
        cout << "2 - Subtraction\n";
        cout << "3 - Multiplication\n";
        cout << "4 - Division\n";
        cout << "Your choice: ";
        
        switch(choice)
        {
            case 0:
            break;
            
            case 1 : cout<<"Enter the n1 and n2 value:";
            cin>>n1>>n2;
            cout <<"result :"<< n1 + n2;
            break;
            
            case 2 : cout<<"Enter the n1 and n2 value:";
            cin>>n1>>n2;
            cout <<"result :"<< n1 - n2;
            break;
            
            case 3 : cout<<"Enter the n1 and n2 value:";
            cin>>n1>>n2;
            cout <<"result :"<< n1 * n2;
            break;
            
            case 4 : cout<<"Enter the n1 and n2 value:";
            cin>>n1>>n2;
            
            if(n2==0)
            {
                cout << "Error: Division by zero is not allowed." << endl;
                break;
            }
            else
            {
                  cout <<"result :"<< n1 / n2<<endl;
                  break;
            }
            default:
            {
                cout<<"Invalid choice";
            }
        }
        
    }while(choice != 0);
    
    return 0;
}