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
                        cin>> nameItem;
                        cin.ignore(); 
                        list [numItems] = nameItem; 

                        if (numItems >=5)

                        {
                                cout<<"You'll need a bigger list!\n";
                        }
                        //    for (int numItems=1; numItems < 5; numItems++)
                        //   {
                        //         cout<< nameItem[1];
                        // }

                        numItems++; //number of items incremented
                }

                //                string list[5] = { nameItem } ;
        }

        while (input != 'q' && input != 'Q' );

        cout<< "==ITEMS TO BUY==\n";
        for (numItems=0; numItems < 5 ; numItems++)
        {
                cout<<  numItems + 1<< ' ';
                cout<< list [numItems] <<endl;
        }  
        // for ( numItems=1; numItems < list[5]; numItems++ )

        return 0;
}
