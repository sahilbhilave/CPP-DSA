#include<bits/stdc++.h>
using namespace std;


class sll
{
    struct node{
        int data;
        node *next;
    }* start;

    node *temp,*curr;
    public:
    
        sll()
        {
            start = NULL;
        }

        void create()
        {
            int choice=1;
            
            do{
                
                temp = new node;
                cout<<"Enter Roll No : ";
                cin>>temp->data;
                temp->next = NULL;
    
                if(start==NULL)
                {
                    start = temp;
                    curr = temp;
                }
                else
                {
                    curr->next = temp;
                    curr = temp;
                }
                cout<<"Do you want to continue? (0/1) : ";
                cin>>choice;
            }while(choice!=0);
        }

        void display()
        {
            cout<<"\nDisplay The List\n";
            node * ptr;
            ptr = start;
            do{
                cout<<ptr->data<<" ";
                ptr = ptr->next;
            }while(ptr != NULL);

            cout<<"\n\n";
        }

        void insert_begin()
        {
            node * ptr;
            int choice=1;
            do
            {
                ptr = new node;
                cout<<"Enter Roll No : ";
                cin>>ptr->data;
                ptr->next = start;
                start = ptr;

                cout<<"Do you want to continue? (0/1) : ";
                cin>>choice;
            }while(choice!=0);
        }


    
};
int main()
{
    sll a;
    int choice;
    while(choice!=0)
    {
        cout<<"1.Create & Insert At End\n";
        cout<<"2.Insert At Beginning\n";
        cout<<"3.Enter at position\n";
        cout<<"4.Display\n";
        cout<<"0.Exit\n\n";
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                a.create();
            break;
            case 2:
                a.insert_begin();
            break;
            case 3:
            break;
            case 4:
                a.display();
            break;
        }

    }

}
