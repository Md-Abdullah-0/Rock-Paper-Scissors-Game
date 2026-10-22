
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
   
    int A=1;
    char n,Rin;
    cout<<".....................\n";
    cout <<"|  ROCK PAPER SCISSORS |\n";
     cout   <<".....................\n";
    
        cout << "Enter R = Rock, P = Paper, S = Scissors\n"
             <<"Enter Q to Quit\n";

    while(true)
    {
        cout<<"\nAttempts- "<<A<<": Enter Your Move: ";
        cin>>n;
       
        if(n>='a' && n<='z')
        {
             n = n-32;
        }
        if (n == 'Q')
         {
             break;
         }  
        if(n!='R'&&n!='P'&&n!='S')
        {
            cout<<"INVALID, TRY AGAIN \n";
            continue;
        }
        int x=rand() % 3+1;
        if(x==1)
        {
            Rin='R';
        }
         else if(x==2)
        {
            Rin='P';
        }
         else
        {
            Rin='S';
        }
        cout<<"Rin chose: "<<Rin<<endl;

        if (n ==Rin)
        {
            cout<<"DRAW!\n";
        }
        else if ((n =='R' && Rin== 'S') || (n =='P' && Rin == 'R') ||(n =='S' && Rin == 'P'))
         {
            cout << "YOU WIN!\n";
            cout<<"Attempts Used: " << A << '\n';
           
        }
      
       else
        {
            cout << "YOU LOSE!\n";
        }
         A++;
    }
    cout << "\n=== Game Over ===\n";
    


}

