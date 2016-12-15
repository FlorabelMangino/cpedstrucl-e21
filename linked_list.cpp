#include<iostream>
#include<conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
        
        
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int number){
        Node *n = new Node();   
        n->x = number;             
        n->next = head;         
                               
        head = n;    
	
		          
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
        
    }
    
    void display(){
    
    while(head!=0){
  	
    Node *n = head;
    int ret = n->x;
    head = head->next;
  	
    cout<<ret<<endl;
    }
    temp=head;
    head=head->next;
	}
	
	

    
private:
    Node *head; 
    Node *temp;
   
};

int main()
{
	LinkedList list;
	int choice,number,pos, value;
	while (1)
	{	
	system("cls");
	cout<<"MAIN MENU\n"
	<<"[1] Push\n"
	<<"[2] Pop\n"
	<<"[3] Display\n"
	<<"[4] Update\n"
	<<"[4] Exit\n"
	<<"Enter your choice:";
	cin>>choice;
	switch(choice)
	{
	
		case 1:
			cout<<"Enter a number:";
			cin>>number;
			list.addValue(number);
			break;
			
		
		case 2:
		list.popValue();
		break;
		
		case 3:
		list.display();
		break;
		
		case 4:
		cout<<"Enter position: ";
		cin>>pos;
		cout<<"Enter value: ";
		cin>>value;
	
		
		case 5:
			exit(1);
							
	}
	getch();
	}	
}
