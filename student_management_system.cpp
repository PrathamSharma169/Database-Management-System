#include<iostream>
using namespace std;
#include<fstream>
#include<cstdlib>
class node {
      public:
            node* next;
            string name;
            string rollno;
            string branch;
            string dob;
            string gmail;
            
      node ( string n, string roll , string b ,string d , string g){
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
  head->next=last;
  last->next=NULL;
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
    node*node1=new node("a","b","c","d","e");
    //cout<<"no. of students present in database------>";
    //cout<<n1.count(first)<<endl;
    //cout<<"name of the students present in this data base----->"<<endl<<n1.name(first)<<endl;
    int c=0;
    string con;
    con="c";
    while(con == "c"){
        cout<<"for displaying roll no. enter 1"<<endl<<"for displaying date of birth enter 2"<<endl<<"for displaying branch enter 3"<<endl<<"for displaying  gmail id enter 4"<<endl<<"for adding any student enter 5"<<endl;
        cout<<"===================="<<endl;
        int s;
        cin>>s;
        if(s==1){
            cout<<"===================="<<endl;
            cout<<"what is the name?"<<endl;
            string n;
            cin>>n;
            cout<<"roll no. of the student is ------>"<<roll(n,node1)<<endl;
        }
        if (s==2){
            cout<<"===================="<<endl;
            cout<<"what is the name?"<<endl;
            string n;
            cin>>n;
            cout<<"date of birth of the student is ------>"<<dobe(n,node1)<<endl;
        }
        if (s==3){
            cout<<"===================="<<endl;
            cout<<"what is the name?"<<endl;
            string n;
            cin>>n;
            cout<<"branch of the student is ------>"<<branc(n,node1)<<endl;
        }
        if (s==4){
            cout<<"===================="<<endl;
            cout<<"what is the name?"<<endl;
            string n;
            cin>>n;
            cout<<"gmail id of the student is ------>"<<gmai(n,node1)<<endl;
        }
        if (s==5){
          cout<<"---------------------->"<<endl;
          fstream database;
          database.open("database.txt");
          cout<<"please enter the following details ->"<<endl;
          cout<<"enter name of student "<<endl;
          string na;
          cin>>na;
          cout<<"---------------------->"<<endl;
          cout<<"enter roll no. of student "<<endl;
          string ro;
          cin>>ro;
          cout<<"---------------------->"<<endl;
          cout<<"enter branch of student"<<endl;
          string br;
          cin>>br;
          cout<<"---------------------->"<<endl;
          cout<<"entre gmail id of student "<<endl;
          string gm;
          cin>>gm;
          cout<<"---------------------->"<<endl;
          cout<<"enter date of birth of student"<<endl;
          string d;
          cin>>d;
          node*temp=new node(na,ro,br,d,gm);
          add(node1,temp);
          free(temp);
          database.close();
        }
      cout<<"===================="<<endl;
      cout<<"for continuing enter c else enter s"<<endl;
      cin>>con;
      cout<<"===================="<<endl;
    }
    if(con=="s"){
      cout<<"thanks for visiting :)"<<endl;
      cout<<"===================="<<endl;
    }
    return 0;
}