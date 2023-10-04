#include<iostream>
using namespace std;
#include<cstdlib>
class node {
      public:
            node* next;
            node* previous;
            string name ;
            string rollno;
            string branch;
            string dob;
            string gmail;
            
      node ( string n, string roll , string b ,string d , string g){
            this  -> previous= NULL;
            this -> next = NULL;
            this-> name=n;
            this->  rollno = roll ;
            this-> branch= b;
            this->dob=d;
            this->gmail=g;
      }
};

void add(node*head,node*last){
  while(head->next!=NULL){
    head=head->next;
      }
  head->next=last->previous;
  last->next=NULL; 
  free(last);
    }

int count(node*head){
  int c=1;
  while(head->next != NULL){
    head=head->next;
    c++;
    }
  return c;
  }

void named(node*head){
  while(head->next!=NULL){
    cout<<head->name<<endl;
    head=head->next;
    }
  }

string roll(string n, node*head){
  int c=1;
  int x =count(head);
  while(c!=x && head->name!=n){
    head=head->next;
    c++;
    }
  return head->rollno;

  }

string branc(string n, node*head){
  int c=1;
  int x =count(head);
  while(c!=x && head->name!=n){
    head=head->next;
    c++;
    }
  return head->branch;      
  }

string dobe(string n, node*head){
  int c=1;
  int x =count(head);
  while(c!=x && head->name!=n){
    head=head->next;
    c++;
    }
  return head->dob;
  }
string gmai(string n, node*head){
  int c=1;
  int x =count(head);
  while(c!=x && head->name!=n){
    head=head->next;
    c++;
      }
  return head->gmail;
}

int main(){
    node*node1=new node("pratham","0901cs221101", "cse","12345678","bubhbkhvh");
    cout<<"no. of students present in database------>";
    //cout<<n1.count(first)<<endl;
    //cout<<"name of the students present in this data base----->"<<endl<<n1.name(first)<<endl;
    int c=0;
    string con;
    con="c";
    while(con == "c"){
        cout<<"for displaying roll no. enter 1"<<endl<<"for displaying date of birth enter 2"<<endl<<"for displaying branch enter 3"<<endl<<"for displaying  gmail id enter 4"<<endl<<"for adding any student enter 5"<<endl;
        int s;
        cin>>s;
        if(s==1){
            cout<<"what is the name?"<<endl;
            string n;
            cin>>n;
            cout<<roll(n,node1)<<endl;
        }
        if (s==2){
            cout<<"what is the name?"<<endl;
            string n;
            cin>>n;
            cout<<dobe(n,node1)<<endl;
        }
        if (s==3){
            cout<<"what is the name?"<<endl;
            string n;
            cin>>n;
            cout<<branc(n,node1)<<endl;
        }
        if (s==4){
            cout<<"what is the name?"<<endl;
            string n;
            cin>>n;
            cout<<gmai(n,node1)<<endl;
        }
        if (s==5){
          cout<<"enter name of student "<<endl;
          string na;
          cin>>na;
          cout<<"enter roll no. of student "<<endl;
          string ro;
          cin>>ro;
          cout<<"enter branch of student"<<endl;
          string br;
          cin>>br;
          cout<<"entre gmail id of student "<<endl;
          string gm;
          cin>>gm;
          cout<<"enter date of birth of student"<<endl;
          string d;
          cin>>d;
          node*temp=new node(na,ro,br,d,gm);
          add(node1,temp);
        }
      cout<<"for continuing enter c else enter s"<<endl;
      cin>>con;
    }
    if(con=="s"){
      cout<<"thanks for visiting :)";
    }
    return 0;
}