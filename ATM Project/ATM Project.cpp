// ATM Project
#include <iostream>
using namespace std;

// ********** Variable ********** //
double balance = 1000 ;
int withdDraw = 0;
int depost = 0 ;
int password = 2006 ;
int choice = 0 ;
// ********** End OF Variable ********** //

// show is the function to display the menu of ATM 
void show ()
{
    cout<< "********** MENU **********" <<endl;
    cout<< endl;
    cout<< "1:Balance" <<endl;
    cout<< "2:WithdDraw" <<endl;
    cout<< "3:Depost" <<endl;
    cout<< "4:Exit" <<endl;
    cout<< endl;
    cout<<"*************************" <<endl;

}
// end of the show function 

// process function to display all ueses of all variable 
int process ()
{
    cout<< "Enter your password:"<<endl;
    cin >> password;
      
        // do while ===> make the condition execute at least one time (once).
        do
        {
            if ( password == 2006)
            { 
                cout<< "Enter your choice:";
                cin >> choice ;

                switch(choice)
                {
                    case 1:
                        cout<< "Your balance is "<< balance <<endl;
                        break;
                    
                    case 2:
                        cout<< " NOTE !! Your balance is "<< balance <<endl;

                        cout<< "Enter your amount "<<endl;
                        cin >> withdDraw ;

                        if(withdDraw > balance )
                        {
                            cout<< "Sorry!! you can't withdraw this ammount "<<endl;
                        }
                        else
                        {
                            balance -= withdDraw;  // balance = balance - withdDraw ;
                            // balance = 1000 ; withdDraw = 500 ; balance = 1000 - 500 = 500 ;
                            // your balance is 500 
                            cout<< "NOW!! Your balance is "<<balance <<endl; ;
                        }

                        break;

                    case 3:
                        cout<< "Your balance is "<< balance <<endl;
                        cout<< "Enter your amount: "<<endl;
                        cin >> depost;
                        balance+=depost ;        // balance = balance+ depost ;
                        cout<< "NOW!! Your balance is :"<<balance <<endl;
                        break;
                    
                    case 4:
                        cout<< "Thank You "<<endl;
                        break;

                }
                // end of switch 
            }
            else
            {
                char letter ;
                cout<<"password is not correct , Do you want to try again ? Enter [Y] for yes or [N] for no"<<endl;
                cin >> letter ;

                if(letter == 'Y' || letter == 'y')
                {
                    cout<<"Enter your password: "<<endl;
                    cin >>password ;
                }
                else         // (letter == 'N' || letter == 'n')
                {
                    choice = 4 ;
                }
            }
            // end of if 

        }while(choice < 4);    // Exit 
        // end of do while 
}
// end of process function 

int main ()
{

    show();
    process();

    return 0 ;
}