// Simple Calculator Project
#include <iostream>
 # include <string >
#include <algorithm>
using namespace std;
int main ()
{
    cout<<"********** Calculator **********"<<endl;

    //! ************** variables **********************
    float num1 , num2 ;
    char oper ;
    //! ************** End Of variables ***************

    cout<<"Enter The First Number: " ;
    cin >> num1 ;

    cout<< "Enter The Operator (+ , - , * , / ): " ;
    cin >> oper ;       // operator 

    cout<<"Enter The Second Number: " ;
    cin >> num2 ;

    //! switch statement
    switch(oper)
    {
        case '+' :
            cout<< num1 << "+" << num2 << "=" << num1+num2 <<endl;
            break;

        case '-' :
            cout<< num1 << "-" << num2 << "=" << num1-num2 <<endl;
            break;

        case '*' :
            cout<< num1 << "*" << num2 << "=" << num1*num2 <<endl;
            break;

        case '/' :
            if( num2 == 0)
            {
                cout<< "ERROR!!!"<<endl;
            }
            else
            {
                cout<< num1 << "/" << num2 << "=" << num1/num2 <<endl;
            }
            break;

        default:
            cout<<"The Operator Not Correct , Please Try Again....."<<endl;

    }
    //! end of switch 
    cout<<"*******************************"<<endl;


    return 0;
}