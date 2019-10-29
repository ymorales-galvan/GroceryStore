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
                if (!list.empty())
                {
                        cout<<"\n (D)elete last item";
                }
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

                        //        cout<< "No items to buy\n";
                        //  } 

                        //  list.push_back(numItems);
                        // list [numItems] = nameItem; 
                        numItems++;
               
                }
              if (input == 'd' || input == 'D')
              {
                      string variable = list[numItems];
                     
                      if (!list.empty())
                      {
                       variable= list.size()-1; 
                      list.pop_back();
                      }
              }
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
       /* if (input == 'd' && input == 'D')
        {
                cout<<list.pop_back();
        }*/
        
        if( numItems == 0)
        {
                cout<< "No items to buy!\n";
        }
        

        return 0;
}

