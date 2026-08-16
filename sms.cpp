#include <iostream>
#include <conio.h>

using namespace std;

class Node{
    public:
        int roll_no;
        string name;
        float marks,per;
        Node* next;
};
class Linked_List{
        public: 
            Node* head=nullptr; 

        void insert(){
            int r;
            string n;
            float m;
            cout<<"\n\nENTER ROLL NO. : ";
            cin>>r;
            cout<<"\n\n ENTER NAME : ";
            cin>>n;
            cout<<"\n\n ENTER MARKS : ";
            cin>>m;
            Node* newNode=new Node;
            newNode->roll_no=r;
            newNode->name=n;
            newNode->marks=m;
            newNode->per=m/(100*100);
            newNode->next=nullptr;

            if(head==nullptr){
                head==newNode;
            }
            else{
                Node* temp=head;
                while(temp->next!=nullptr){
                    temp=temp->next;

                }
                temp->next=newNode;

            }
            cout<<"\n\nNEW NODE INSERTED SUCCESSFULLY!!!";

        }    
};

int main(){ 
    int choice;

    p:
    system("cls");
    //menu
    cout<<"\n\n==================================================="<<endl;
    cout<<"\t\tSTUDENT MANAGEMENT SYSTEM"<<endl;
    cout<<"==================================================="<<endl;
    cout<<"\n\n1.ADD NEW STUDENT";
    cout<<"\n\n2.SEARCH";
    cout<<"\n\n3.COUNT TOTAL STUDENT ID";
    cout<<"\n\n4.UPDATE RECORD";
    cout<<"\n\n5.DELETE STUDENT RECORD";
    cout<<"\n\n6.SHOW ALL RECORD";
    cout<<"\n\n7.EXIT";
    cout<<"\n\n---------------------------------------------------";
    cin>>choice;
    switch(choice){
        case 1:
        system("cls");
        break;
        case 2:
        system("cls");
        break;
        case 3:
        system("cls");
        break;
        case 4:
        system("cls");
        break;
        case 5:
        system("cls");
        break;
        case 6:
        system("cls");
        break;
        case 7:
        system("cls");
        break;
        default:
        cout<<"\n\n\nPLEASE ENTER A VALID VALUE!!!"<<endl;
        break;
    }
    getch();
    goto p;
}

