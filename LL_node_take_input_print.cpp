#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node*next;
   Node(int data)
   {
      this->data=data;
      next=NULL;
   }
};
Node* take_input1()
{
   int data;
   Node*head=NULL;
   cin>>data;
   while(data!=-1)
   {
      Node*newnode=new Node(data);
      if(head==NULL)
      {
         head=newnode;
      }
      else{
         Node*temp=head;
         while(temp->next!=NULL)
         {
            temp=temp->next;
         }
         temp->next=newnode;
      }
      cin>>data;    
   }
   return head;
}
Node* take_input2()
{
   int data;
   Node*head=NULL;
   Node*tail=NULL;
   cin>>data;
   while(data!=-1)
   {
      Node*newnode=new Node(data);
      if(head==NULL)
      {
         head=newnode;
         tail=newnode;
      }
      else{
          tail->next=newnode;
          tail=newnode;
      }
       cin>>data;
   }
   return head;
}
void printLL(Node*head)
{
   Node*temp=head;
   while(temp!=NULL)
   {
      cout<<temp->data<<" ";
      temp=temp->next;
   }
}
int main()
{
    //  Node*head=take_input1();
   //   Node*head=take_input2();
   //   printLL(head);


// creating node ....staticallly....dynamically...connecting them

Node n1(1);
Node n2(2);
Node n3(3);
Node* n4=new Node(4);
Node* n5=new Node(5);
Node n6(6);

n1.next=&n2;
n2.next=&n3;
n3.next=n4;
n4->next=n5;
n5->next=&n6;

printLL(&n1);
  
}
