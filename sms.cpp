#include <iostream>
#include <cstdlib>
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
        //Insertion
        void insert(){
            int r;
            string n;
            float m;
            cout<<"\n\nENTER ROLL NO. : ";
            cin>>r;
            Node* checkDuplicate=head;
            while(checkDuplicate!=nullptr){
                if(checkDuplicate->roll_no==r){
                    cout<<"\n\nSTUDENT WITH THIS ROLL NO. ALREADY EXISTS!!";
                    return;
                }
                checkDuplicate=checkDuplicate->next;
            }
            cout<<"\n\nENTER NAME : ";
            cin>>n;
            cout<<"\n\nENTER MARKS : ";
            cin>>m;
            Node* newNode=new Node;
            newNode->roll_no=r;
            newNode->name=n;
            newNode->marks=m;
            newNode->per=m;
            newNode->next=nullptr;

            if(head==nullptr){
                head=newNode;
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
        void search(){
              if(head==nullptr){
                cout<<"\n\nLINKED LIST IS EMPTY!!!";
              }  
              else{
                int r,found=0;
                cout<<"\n\n ENTER ROLL NO. : ";
                cin>>r;
                Node* temp=head;
                while(temp!=nullptr){
                    if(r==temp->roll_no){
                        cout<<"\n\n ROLL NO. : "<<temp->roll_no;
                        cout<<"\n\n NAME : "<<temp->name;
                        cout<<"\n\n MARKS : "<<temp->marks;
                        cout<<"\n\n PERCENTAGE : "<<temp->per;
                        found++;
                    }
                    temp=temp->next;
                }
                if(found==0){
                    cout<<"\n\nNO RESULTS FOUND!!!";
                }
              }
        }

        void count(){
            if(head==nullptr){
                cout<<"\n\nLINKED LIST IS EMPTY!";
            }
            else{
                int cnt=0;
                Node* temp=head;
                while(temp!=nullptr){
                    cnt++;
                    temp=temp->next;
                }
                cout<<"\n\n TOTAL NUMBER OF NODES : "<<cnt<<endl;
            }
        }

        void update(){
              if(head==nullptr){
                cout<<"\n\nLINKED LIST IS EMPTY!!!";
              }  
              else{
                int r,found=0;
                cout<<"\n\n ENTER ROLL NO. : ";
                cin>>r;
                Node* temp=head;
                while(temp!=nullptr){
                    if(r==temp->roll_no){
                        cout<<"\n\nENTER NEW ROLL NO. : ";
                        cin>>temp->roll_no;
                        cout<<"\n\n ENTER NAME : ";
                        cin>>temp->name;
                        cout<<"\n\n ENTER MARKS : ";
                        cin>>temp->marks;
                        temp->per=temp->marks;
                        cout<<"\n\nRECORD UPDATED SUCCESSFULLY!";
                        found++;
                        break;
                    }
                    temp=temp->next;
                }
                if(found==0){
                    cout<<"\n\nNO RESULTS FOUND!!!";
                }
              }
        }

        //deletion
        void deletion(){
              if(head==nullptr){
                cout<<"\n\nLINKED LIST IS EMPTY!!!";
              }  
              else{
                int r,found=0;
                cout<<"\n\n ENTER ROLL NO. : ";
                cin>>r;
                if(r==head->roll_no){
                    Node* temp=head;
                    head=head->next;
                    found++;
                    delete temp;
                    cout<<"\n\nRECORD DELETED SUCCESSFULLY!!";
                }
                else{
                    Node* prev=head;
                    Node* temp=head->next;
                    while(temp!=nullptr){
                        if(r==temp->roll_no){
                            prev->next=temp->next;
                            found++;
                            delete temp;
                            break;
                        }
                        prev=temp;
                        temp=temp->next;
                    }
                }
                if(found==0){
                    cout<<"\n\nNO RESULTS FOUND!!!";
                }

        }
    }

    void show() {
    if (head == nullptr) {
        cout << "\n\nLINKED LIST IS EMPTY!!!";
    } else {
        Node* temp = head;
        cout << "\n\n================ ALL RECORDS ================";
        while (temp != nullptr) {
            cout << "\n\n ROLL NO.   : " << temp->roll_no;
            cout << "\n NAME       : " << temp->name;
            cout << "\n MARKS      : " << temp->marks;
            cout << "\n PERCENTAGE : " << temp->per << "%";
            cout << "\n--------------------------------------------";
            temp = temp->next;
        }
    }
}

};

int main(){ 
    int choice;
    Linked_List obj;

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
    cout<<"\n\nPLEASE CHOOSE YOUR OPTION : ";
    cin>>choice;
    switch(choice){
        case 1:
        system("cls");
        obj.insert();
        break;
        case 2:
        system("cls");
        obj.search();
        break;
        case 3:
        system("cls");
        obj.count();
        break;
        case 4:
        system("cls");
        obj.update();
        break;
        case 5:
        system("cls");
        obj.deletion();
        break;
        case 6:
        system("cls");
        obj.show();
        break;
        case 7:
        system("cls");
        cout<<"THANK YOU FOR USING THE SYSTEM!!"<<endl;
        exit(0);
        default:
        cout<<"\n\n\nPLEASE ENTER A VALID VALUE!!!"<<endl;
        break;
    }
    getch();
    goto p;
}

