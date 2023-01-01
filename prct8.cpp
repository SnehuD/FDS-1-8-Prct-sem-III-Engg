 /*Second year Computer Engineering class, set A of students like Vanilla Ice-cream and set B of students like butterscotch ice-cream.
 Write C/C++ program to store two sets using linked list.
 compute and display-
 i. Set of students who like either vanilla or butterscotch or both
 ii. Set of students who like both vanilla and butterscotch
 iii. Set of students who like only vanilla not butterscotch
 iv. Set of students who like only butterscotch not vanilla
 v. Number of students who like neither vanilla nor butterscotch
*/
#include<iostream.h>
struct node
{    
	int roll;
    struct node *next;
};
class info
{ 
	node *head1,*temp1,*head2,*temp2,*head,*temp,*h1,*head3,*temp3;
	int c,i,f,j,k;

	public:
	    info()
	    {	    
			head1=NULL;	    temp1=NULL;	    head2=NULL;
		    temp2=NULL;	    head=NULL;	    temp=NULL;
		    h1=NULL;	    head3=NULL;	    temp3=NULL;
	    }
	    node  *create();
	    void insert();
	    void allstud();
	    void vanila();
	    void butters();
	    void likevorb();
	    void nvnb();
	    void bothvb();
	    void ovanila();
	    void obutters();
	    void display();
} ;
node *info::create()
{   
	node *p=new(struct node);
	cout<<"enter student rollno";
	cin>>c;
	p->roll=c;
	p->next=NULL;
	return  p;
}
void info::insert()
{
    node *p=create();

    if(head==NULL)
    { 
	   head=p;
    }
    else
    {      temp=head;
	  while(temp->next!=NULL)
	  {    temp=temp->next;   }
	      temp->next=p;
     }

   }
   void info::display()
   {  temp=head;
      while(temp->next!=NULL)
      { cout<<"\n"<<temp->roll;
	temp=temp->next;
      } cout<<"\n"<<temp->roll;
   }
   void info::allstud()
   {cout<<"enter no. of students \n";
       cin>>k;
	head=NULL;
       for(i=0;i<k;i++)
       {    insert();
	     h1=head;
       }  display();
       head=NULL;
    }
    void info::vanila()
    {
       cout<<"enter no. of  students who like vanila \n";
       cin>>k;
	head=NULL;
       for(i=0;i<k;i++)
       { insert();
	 head1=head;

       }  display();
	head=NULL;
     }
     void info::butters()
     {
      cout<<"enter no. of students who like butterscotch \n";
       cin>>j;
       for(i=0;i<j;i++)
       { insert();
	 head2=head;

       } display();
       head=NULL;
     }
      void info::likevorb()
{    cout<<"students who like vanila or butterscotch \n";
     temp1=head1;
     while(temp1!=NULL)
     {
       node *p=new(struct node);
       p->roll=temp1->roll;
       p->next=NULL;
     if(head3==NULL)
     {    head3=p;
     }
    else
    {      temp3=head3;
	  while(temp3->next!=NULL)
	  {    temp3=temp3->next;   }
	      temp3->next=p;
     }

       temp1=temp1->next;
     }
     temp2=head2;
     while(temp2!=NULL)
     {    f=0;
	 temp1=head1;
	 while(temp1!=NULL)
	 {
	 if(temp2->roll==temp1->roll)
	 { f=1;                   }
	  temp1=temp1->next;
	 }



     if(f==0)
     {
	 node *p=new(struct node);
       p->roll=temp2->roll;
       p->next=NULL;
       if(head3==NULL)
	{    head3=p;
	}
       else
       {      temp3=head3;
	  while(temp3->next!=NULL)
	  {    temp3=temp3->next;   }
	      temp3->next=p;
       }
  }
      temp2=temp2->next;
     }
     temp3=head3;
      while(temp3->next!=NULL)
      { cout<<"\n"<<temp3->roll;
	temp3=temp3->next;
      } cout<<"\n"<<temp3->roll;
}


void info::ovanila()
{
       cout<<"\nstudents  like only vanila \n";
       temp1=head1;
       while(temp1!=NULL)
       {  temp2=head2;
	  f=0;
	  while(temp2!=NULL)
	  {   if(temp1->roll==temp2->roll)
	      {  f=1;              }
	       temp2=temp2->next;
	  }

	  if(f==0)
	  { cout<<"\n"<<temp1->roll;    }
	     temp1=temp1->next;
	}

}
void info::obutters()
{
    cout<<"\nstudents like only butterscotch\n";
	temp2=head2;
       while(temp2!=NULL)
       {  temp1=head1;
	  f=0;
	  while(temp1!=NULL)
	  {   if(temp2->roll==temp1->roll)
	      {  f=1;              }
	       temp1=temp1->next;
	  }

	  if(f==0)
	  { cout<<"\n"<<temp2->roll;    }
	     temp2=temp2->next;
	}


}
void info::bothvb()
{
       cout<<"\nstudents who like both vanila and butterscotch\n";
       temp1=head1;
       while(temp1!=NULL)
       { temp2=head2;
	 while(temp2!=NULL)
	 {  if(temp1->roll==temp2->roll)
	     { cout<<"\n"<<temp1->roll;   }
	      temp2=temp2->next;
	  }

	    temp1=temp1->next;
	}

}
 void info::nvnb()
 {

    cout<<"\nstudents who like neither vanila nor butterscotch\n";
    temp=h1;
       while(temp!=NULL)
       {  temp3=head3;
	  f=0;
	  while(temp3!=NULL)
	  {   if(temp->roll==temp3->roll)
	      {  f=1;              }
	       temp3=temp3->next;
	  }

	  if(f==0)
	  { cout<<"\n"<<temp->roll;    }
	     temp=temp->next;
	}

}

int main()
  { info s;
  int i;
     char ch;
      do{
	  cout<<"\n choice the options";
	  cout<<"\n  1. To enter all students rollno  ";
	  cout<<"\n  2. To enter the rollno of student who like vanila";
	  cout<<"\n  3.  To enter the rollno of student who like butterscotch";
	  cout<<"\n  4.  To display the rollno of student who like vanila or butterscotch";
	  cout<<"\n  5.  To display the rollno of student who like only vanila";
	  cout<<"\n  6.  To display the rollno of student who like only butterscotch";
	  cout<<"\n  7.  To display the rollno of student who neither like vanila nor butterscotch";
	  cout<<"\n  8.  To display the rollno of student who like both vanila and butterscotch";

	  cout<<"\n Enter your Choice between (01-08) ==>";
	  cin>>i;
	 switch(i)
	 {        case 1:   s.allstud();
				  break;

		 case 2:   s.vanila();
				  break;
		  case 3: s.butters();
				  break;
		  case 4:   s.likevorb();
				  break;
		  case 5:   s.ovanila();
				  break;
		  case 6:   s. obutters();
				  break;
		  case 7:   s.nvnb();
				  break;
		  case 8:   s.bothvb();
				  break;



		  default:  cout<<"\n You enter choice Wrong Choich \n";
	  }
	    cout<<"\n do you want to continue enter y/Y \n";
	    cin>>ch;

       }while(ch=='y'||ch=='Y');

return 0;
}
