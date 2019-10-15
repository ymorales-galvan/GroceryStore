//Author: Yuliana Morales
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
        // string list[5]; //array of 5 strings
        vector <string>list;
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


                        // if (numItems > 0)

                        list.push_back(nameItem);

                        // cout<<"You'll need a bigger list!\n";

                        // else
                        // {
                        //    for (int numItems=0; numItems >= 0 ; numItems++)
                        // {
                        //        cout<< "No items to buy\n";
                        //  } 

                        //  list.push_back(numItems);
                        // list [numItems] = nameItem; 
                        numItems++;
                        // }
                }

                //                string list[5] = { nameItem } ;
        }

        while (input != 'q' && input != 'Q' );
        if (numItems> 0)
        {
                cout<< "==ITEMS TO BUY==\n";

                for (numItems= 0; numItems < list.size(); numItems++)
                {
                        cout<<  numItems + 1<< ' ';
                        cout<< list [numItems] <<endl;
                }
        }
        if( numItems == 0)
        {
                cout<< "No items to buy!\n";
        }
        //for ( numItems=1; numItems < list[5]; numItems++ )

        return 0;
}

