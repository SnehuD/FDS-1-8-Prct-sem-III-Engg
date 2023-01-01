#include<iostream.h>
#include<conio.h>
#include<string.h>
class Node
{       public:
	int PRN;
	char name[50];
	Node *next;
};
class Pinnacle_Club
{
	Node *head,*NewNode,*temp,*prev;
	public:
	Node *create();
	void display();
	void total();
	void insert_President();
	void insert_Secretary();
	void insert_Member();
	void delete_President();
	void delete_Secretary();
	void delete_Member();
	Node *concat(Node *head1, Node *head2);
};

Node *Pinnacle_Club::create()
{
	int val,flag=1;
	char ch,n[30];
	do
	{
		cout << "\nEnter the PRN of Student: ";
		cin >> val;
		// allocate memory to new node
		cout << "\n Enter Name of Student: ";
		cin >>n;
		NewNode=new Node;
		NewNode->PRN=val;
		strcpy(NewNode->name, n);
		NewNode->next=NULL;
		if(flag==1)
		{
			head=NewNode;
			temp=head;
			flag=0;
		}
		else
		{
			temp->next=NewNode;
			temp=NewNode;
		}
		cout<<"\n do you want to add a new node";
		cin>>ch;
	}
	while(ch=='Y'||ch=='y');
	return head;
}
void Pinnacle_Club::display()
{
	temp=head;
	if(temp==NULL)
	{
		cout<<"\n Linked list is empty";
	}
	else
	{
		while(temp!=NULL)
		{
			cout <<"[ "<< temp->PRN << ","<<temp->name<<" ]  -->";
			temp=temp->next;
		}
	}

}
void Pinnacle_Club::total()
{

	int count = 0;
	temp = head;
	if (temp == NULL)
	{
		cout << "\nThe list is empty\n";
		return;
	}
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	cout << "\n Total number of members in a club are " << count;
}

void Pinnacle_Club::insert_President()
{       int val;
	NewNode=new Node;
	cout << "\nEnter President PRN of the Student: ";
	cin >> NewNode->PRN;
	cout << "\nEnter President Name of the Student: ";
	cin >> NewNode->name;
	if(head==NULL)
	{
	head=NewNode;
	}
	else
	{
	temp=head;
	NewNode->next=temp;
	head=NewNode;
	}

}
void Pinnacle_Club::insert_Secretary()
{
	NewNode=new Node;
	cout << "\nEnter Secretary PRN of the Student: ";
	cin >> NewNode->PRN;
	cout << "\nEnter Secretary name of the Student: ";
	cin >> NewNode->name;
	if(head==NULL)
	{
		head=NewNode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=NewNode;
		NewNode->next = NULL;
	}

}
void Pinnacle_Club::insert_Member()
{
	int key;
	NewNode=new Node;
	cout << "\nEnter New Member PRN of the Student: ";
	cin >> NewNode->PRN;
	cout << "\nEnter New Member name of the Student: ";
	cin >> NewNode->name;
	if(head==NULL)
	{
		head=NewNode;
	}
	else
	{
		cout<<"\n enter a Member PRN of student  after which you want to insert";
		cin>>key;

		temp=head;

		do
		{	if(temp->PRN==key)
			{
				NewNode->next=temp->next;
				temp->next=NewNode;
				break;
			}
			else
			{
				temp=temp->next;
			}
		}
		while(temp!=NULL);

	}
}
void Pinnacle_Club::delete_President()
{    
	if(head==NULL)
	{
		cout<<"\nLinked list is empty";
	}
	else
	{
		temp=head;
		head = head->next;
		delete temp;
	}

}
void Pinnacle_Club::delete_Secretary()
{

	if(head==NULL)
	{
       cout<<"\n Linked list is empty";
	}

	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			prev=temp;
		    temp=temp->next;
		}
		delete temp;
		prev->next= NULL;
	}

}

void Pinnacle_Club::delete_Member()
{
	int key;
	temp=head;
	cout<<"\n enter Member Student PRN to be deleted";
	cin>>key;
	while(temp!=NULL)
	{
		if(temp->PRN==key)
			break;
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
		cout<<"\n Member is not found";
	else
	{
		if(temp==head)
		      head=temp->next;
		else
			prev->next=temp->next;
		delete temp;
	}
}
Node *Pinnacle_Club::concat(Node *head1, Node *head2)
 {  	temp = head1;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = head2;
	cout << "\n The lists are concatenated";
	head=head1;
		return head;
}
int main()
{
	Pinnacle_Club p;
	Node *start1,*start2;
	clrscr();
	start1=p.create();
	cout<<"\n The Created linked list ==>\n";
	p.display();
	p.total();
	p.insert_President();
	cout<<"\n The Presidentnode is inserted linked list ==>\n";
	p.display();
	p.insert_Secretary();
	cout<<"\n The Secretary node is inserted linked list ==>\n";
	p.display();
	p.insert_Member();
	cout<<"\n The Member node is inserted at position in the linked list ==>\n";
	p.display();
	p.delete_President();
	cout<<"\n The President node is deleted in linked list ==>\n";
	p.display();
	p.delete_Secretary();
	cout<<"\n The Secretary node is deleted in linked list ==>\n";
	p.display();
	p.delete_Member();
	cout<<"\n The Member node is deleted in linked list ==>\n";
	p.display();
	cout<<"\n Enter data in First Division linked list ==>\n";
	start1=p.create();
	cout<<"\n The First Division created linked list ==>\n";
	p.display();
	cout<<"\n Enter data in Second Division linked list ==>\n";
	start2=p.create();
	cout<<"\n The second Division created linked list ==>\n";
	p.display();
	p.concat(start1, start2);
	p.display();
	 getch();
	return 0;
}



