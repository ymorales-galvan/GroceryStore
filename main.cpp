//Author: Yuliana Morales
#include<iostream>
#include<string>
using namespace std;

int main()
{
        string list[5]; //array of 5 strings
        string nameItem;
        int numItems = 0;
        char input = ' ';

        do
        {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;
                cin.ignore();
                if  (input == 'a' || input == 'A')

                {
                        cout<<"What is the item?\n";
                        cin>>nameItem;
                        cin.ignore();
                if (numItems >=5)
                {
                        cout<<"You'll need a bigger list!\n";
                }

                numItems++;
                }
                
//                string list[5] = { nameItem } ;
        }

        while (input != 'q' && input != 'Q' );

        return 0;
}
