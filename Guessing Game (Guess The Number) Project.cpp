// Guessing Game (Guess The Number)
#include <iostream>
#include <ctime>      // rand() ===> random function 

using namespace std;

int main()
{
    int Guesses = 5 ;         // the number of trying ( عدد المحاولات )
    int Guess ;              // the number that you guess from your mind
    int Answer ;             

    srand(time(0)) ;               // random function
    Answer = rand() % 20 ;         // the randomnumber between 0 to 20 

    /*

    //  random function 

    for(int i =0 ; i<10 ; i++)
    {

        cout<< rand()<<endl;    //  random function 
    }

    //////// output /////////

    41
    18467
    6334
    26500
    19169
    15724
    11478
    29358
    26962
    24464

    ==================================================

    // print the numbers between  20:30 

    srand(time(0));
    for(int i =0 ; i<=10 ; i++)
    {
        cout<<20+rand() % (30-20+1)<<endl;
    }

    //! start +rand()% (end -start +1)  =======>     to get all number between two number 


    */

    cout <<"*****************************" << endl;
    cout<< "WELCOME TO GUESSING GAME" << endl;
    cout << "I am thinking of a number between 0 and 20 , in 5 guesses..." << endl;

    for(int i = 1 ; i <= Guesses ; i++)
    {
    
        cout<<"Guess # "<<i <<" : " ;
        cin >> Guess ;

        // compare betweeen guess and answer by 5 guesses
        if (Guess != Answer )
        {
            // two case 
            // first case > .... second case < 
            if (Guess > Answer )
            {
                cout << "TOO HIGH !" << endl;
            }
            else   // (Guess < Answer )
            {
                cout << "TOO LOW !" << endl;

            }
        }
        else // (Guess == Answer )
        {
            cout << "YOU WON! " << endl;
            cout << "THANK YOU FOR YOUR TIME BROOO" << endl;
            cout <<"*****************************" << endl;
            break; 
        }

    }



    return 0;
}

