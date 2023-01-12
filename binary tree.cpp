
//................................................................................................
//creat binary tree node class

#include<iostream>
using namespace std;
template<typename T>

class btnode{
public:
T data;
btnode<T>*left;
btnode<T>*right;
btnode(T data)
{
  this->data=data;
  left=NULL;
  right=NULL;
}
~btnode(){
   delete left;
   delete right;
}
};

int main()
{
  btnode<int>*root=new btnode<int>(1);
  btnode<int>*n1=new btnode<int>(2);
  btnode<int>*n2=new btnode<int>(3);
  
  root->left=n1;
  root->right=n2;

  cout<<root->left->data<<" ";
  cout<<root->right->data; 
  
  delete root;
}
//..............................................................................................................................

// take input print tree recursive

#include<iostream>
using namespace std;
template<typename T>

class btnode{
public:
T data;
btnode<T>*left;
btnode<T>*right;
btnode(T data)
{
  this->data=data;
  left=NULL;
  right=NULL;
}
~btnode(){
   delete left;
   delete right;
}
};
void print_tree(btnode<int>*root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<" : ";
  if(root->left)
  {
    cout<<"l "<<root->left->data<<" ";
  }
  if(root->right)
  {
    cout<<"R "<<root->right->data;
  }
  cout<<endl;
  print_tree(root->left);
  print_tree(root->right);
}
btnode<int>* take_input()
{
  cout<<"enter data";
  int data;
  cin>>data;
  if(data==-1)
  {
    return NULL;
  }
  btnode<int>*node=new btnode<int>(data);
  node->left=take_input();
  node->right=take_input();
  return node;
}

//  1 2 4 6 -1 -1 -1 5 -1 -1 3 -1 -1 

int main()
{
 btnode<int>*root=take_input();
 cout<<endl<<endl;
 print_tree(root);
}
//................................................................................................................................

// take input print tree levelwise

#include<iostream>
using namespace std;
#include<queue>
template<typename T>

class btnode{
public:
T data;
btnode<T>*left;
btnode<T>*right;
btnode(T data)
{
  this->data=data;
  left=NULL;
  right=NULL;
}
~btnode(){
   delete left;
   delete right;
}
};
void print_tree(btnode<int>*root)
{
  if(root==NULL)
  {
    return;
  }
  queue<btnode<int>*>q;
  q.push(root);
  while(!q.empty())
  {
     btnode<int>*front=q.front();
     q.pop();
     cout<<front->data<<" :";
     if(front->left)
     {
      cout<<front->left->data<<" ";
      q.push(front->left);
     }
     if(front->right)
     {
      cout<<front->right->data;
      q.push(front->right);
     }
     cout<<endl;
  }
}
btnode<int>* take_input()
{
  cout<<"enter root data";
  int data;
  cin>>data;
  if(data==-1)
  {
    return NULL;
  }
  btnode<int>*root=new btnode<int>(data);
  queue<btnode<int>*>q;
  q.push(root);
  while(!q.empty())
  {
    btnode<int>*front=q.front();
    q.pop();
    cout<<"enter left child of "<<front->data<<" : ";
    cin>>data;
    if(data!=-1)
    {
      btnode<int>*childnode=new btnode<int>(data);
      front->left=childnode;
      q.push(childnode);
    }
    cout<<"enter right child of"<<front->data<<" : ";
    cin>>data;
    if(data!=-1)
    {
      btnode<int>*childnode=new btnode<int>(data);
      front->right=childnode;
      q.push(childnode);
    }
  }
  return root;

}

// 1 2 3 4 5 -1 -1 6 -1 -1 -1 -1 -1 

int main()
{
 btnode<int>*root=take_input();
 cout<<endl<<endl;
 print_tree(root);
}

//...........................................................................................................
//preorder
//postorder
//inorder

#include<iostream>
using namespace std;
#include<queue>
template<typename T>

class btnode{
public:
T data;
btnode<T>*left;
btnode<T>*right;
btnode(T data)
{
  this->data=data;
  left=NULL;
  right=NULL;
}
~btnode(){
   delete left;
   delete right;
}
};

btnode<int>* take_input()
{
  cout<<"enter root data";
  int data;
  cin>>data;
  if(data==-1)
  {
    return NULL;
  }
  btnode<int>*root=new btnode<int>(data);
  queue<btnode<int>*>q;
  q.push(root);
  while(!q.empty())
  {
    btnode<int>*front=q.front();
    q.pop();
    cout<<"enter left child of "<<front->data<<" : ";
    cin>>data;
    if(data!=-1)
    {
      btnode<int>*childnode=new btnode<int>(data);
      front->left=childnode;
      q.push(childnode);
    }
    cout<<"enter right child of"<<front->data<<" : ";
    cin>>data;
    if(data!=-1)
    {
      btnode<int>*childnode=new btnode<int>(data);
      front->right=childnode;
      q.push(childnode);
    }
  }
  return root;
}
void preorder(btnode<int>*root)
{
   if(!root)
   {
    return;
   }
   cout<<root->data<<" ";
   preorder(root->left);
   preorder(root->right);
}
void postorder(btnode<int>*root)
{
   if(!root)
   {
    return;
   }
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<<" ";
}
void inorder(btnode<int>*root)
{
  if(!root)
  {
    return;
  }
  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}


// 1 2 3 4 5 -1 -1 6 -1 -1 -1 -1 -1 

int main()
{
 btnode<int>*root=take_input();
 cout<<endl<<endl;

 cout<<"preorder : ";
 preorder(root);
 cout<<endl;

 cout<<"postorder : ";
 postorder(root);
 cout<<endl;

 cout<<"inorder : ";
 inorder(root);
}
//.................................................................................................................
