//generic tree

//........................................................................................................................
//learn treenode class creation..


#include <iostream>
#include <vector>
using namespace std;

template <typename T>

class Treenode
{
public:
  T data;
  vector<Treenode<T> *> children;

  Treenode(T data)
  {
    this->data = data;
  }
};

int main()
{
  Treenode<int>node1(1);

  Treenode<int>node2(2);
  Treenode<int>node3(3);
  Treenode<int>node4(4);

  node1.children.push_back(&node2);
  node1.children.push_back(&node3);
  node1.children.push_back(&node4);

  Treenode<int>*ans=node1.children[0];

  cout<<ans->data;
  cout<<endl;
  cout<<node1.children[0]->data;
}


//------------------------------------------------------------------

#include <iostream>
using namespace std;
#include <vector>

template <typename T>
class treenode
{
public:
  T data;
  vector<treenode<T> *> children;
  treenode(T data)
  {
    this->data = data;
  }
};
int main()
{
  treenode<int> *root = new treenode<int>(1);

  treenode<int> *node1 = new treenode<int>(2);

  treenode<int> *node2 = new treenode<int>(3);

  root->children.push_back(node1);
  root->children.push_back(node2);
  cout << root->children[0]->data;
}

//......................................................................................................................

// take input and print tree   recursive

#include <iostream>
using namespace std;
#include <vector>
template <typename T>
class treenode{
public:
  T data;
  vector<treenode<T> *> children;
  treenode(T data)
  {
    this->data = data;
  }
};

treenode<int>* take_input_recursive()
{
  cout<<"enter root data : ";
  int data;
  cin>>data;
treenode<int>*root=new treenode<int>(data);
  cout<<"enter no of children of "<<data<<" : ";
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    treenode<int>*child=take_input_recursive();
    root->children.push_back(child);
  }
  return root;
}

void print_tree_recursive(treenode<int>*root)
{
  cout<<root->data<<" : ";
  for(int i=0;i<root->children.size();i++)
  {
    cout<<root->children[i]->data<<" ";
  }
  cout<<endl;
  for(int i=0;i<root->children.size();i++)
  {
    print_tree_recursive(root->children[i]);
  }
}



int main()
{
treenode<int>*root=take_input_recursive();
print_tree_recursive(root);
}

//.................................................................................................................

// take input and print tree level wise

#include <iostream>
using namespace std;
#include <vector>
#include<queue>
template <typename T>
class treenode{
public:
  T data;
  vector<treenode<T> *> children;
  treenode(T data)
  {
    this->data = data;
  }
};

treenode<int>* take_input()
{
  int root_data;
  cout<<"enter root data : ";
  cin>>root_data;
  treenode<int>*root=new treenode<int>(root_data);
  queue<treenode<int>*>pendingnode;
  pendingnode.push(root);
  while(pendingnode.size()!=0)
  {
    treenode<int>*front=pendingnode.front();
    pendingnode.pop();
    int no_of_child;
    cout<<"enter no of child of "<<front->data<<" : ";
    cin>>no_of_child;
    for(int i=0;i<no_of_child;i++)
    {
         cout<<"enter "<<i<<"th child data of "<<front->data<<" : ";
         int child_data;
         cin>>child_data;
         treenode<int>*child=new treenode<int>(child_data);
         front->children.push_back(child);
         pendingnode.push(child);
    }
  }
  return root;
}

void print_tree(treenode<int>*root)
{
   queue<treenode<int>*>to_print;
   to_print.push(root);
   while(to_print.size()!=0)
   {
     treenode<int>*front=to_print.front();
     to_print.pop();
     cout<<front->data<<" : ";
     for(int i=0;i<front->children.size();i++)
     {
         cout<<front->children[i]->data<<" ";
         to_print.push(front->children[i]);
     }
     cout<<endl;
   }
}


int main()
{
treenode<int>*root=take_input();
print_tree(root);
}

//.................................................................................................................

//height of tree
//no of nodes in tree 
//print kth level nodes (at deapth d)
//leaf nodes


#include <iostream>
using namespace std;
#include <vector>
#include<queue>
template <typename T>
class treenode{
public:
  T data;
  vector<treenode<T> *> children;
  treenode(T data)
  {
    this->data = data;
  }
};

treenode<int>* take_input()
{
  int root_data;
  cout<<"enter root data : ";
  cin>>root_data;
  treenode<int>*root=new treenode<int>(root_data);
  queue<treenode<int>*>pendingnode;
  pendingnode.push(root);
  while(pendingnode.size()!=0)
  {
    treenode<int>*front=pendingnode.front();
    pendingnode.pop();
    int no_of_child;
    cout<<"enter no of child of "<<front->data<<" : ";
    cin>>no_of_child;
    for(int i=0;i<no_of_child;i++)
    {
         cout<<"enter "<<i<<"th child data of "<<front->data<<" : ";
         int child_data;
         cin>>child_data;
         treenode<int>*child=new treenode<int>(child_data);
         front->children.push_back(child);
         pendingnode.push(child);
    }
  }
  return root;
}

void print_tree(treenode<int>*root)
{
   queue<treenode<int>*>to_print;
   to_print.push(root);
   while(to_print.size()!=0)
   {
     treenode<int>*front=to_print.front();
     to_print.pop();
     cout<<front->data<<" : ";
     for(int i=0;i<front->children.size();i++)
     {
         cout<<front->children[i]->data<<" ";
         to_print.push(front->children[i]);
     }
     cout<<endl;
   }
}

int height_of_tree(treenode<int>*root)
{
  int height=1;
  int maxh=0;
  for(int i=0;i<root->children.size();i++)
  {
    maxh=max(maxh, height_of_tree(root->children[i]));
  }
  return height+maxh;
}

int numNodes(treenode<int>*root)
{
  int ans=1;
  for(int i=0;i<root->children.size();i++)
  {
    ans+=numNodes(root->children[i]);
  }
  return ans;
}

void print_at_level_k(treenode<int>*root ,int k)
{
  if(k==0)
  {
   cout<<root->data<<" ";
  }
  for(int i=0;i<root->children.size();i++)
  {
    print_at_level_k(root->children[i],k-1);
  }
}

int leaf_nodes(treenode<int>*root)
{
   int sum=0;
  if(root->children.size()==0)
  {
    cout<<root->data<<" ";
    sum=1;
  }
  else{
    for(int i=0;i<root->children.size();i++)
    {
      sum+=leaf_nodes(root->children[i]);
    }
  }
  return sum;
}
//  1 2 7 8  2 4 5  1 6  0 0 1 9 0 

int main()
{
treenode<int>*root=take_input();
cout<<endl;

print_tree(root);
cout<<endl;

int no_of_nodes=numNodes(root);
cout<<"no of nodes in our tree : "<<no_of_nodes<<endl;

int height=height_of_tree(root);
cout<<"height of tree : "<<height;
cout<<endl;

int k;
cout<<"give k value to print nodes data at that level : ";
cin>>k;
cout<<"values at "<<k <<"th level are : ";
print_at_level_k(root,k);
cout<<endl;

int count;
cout<<"leaf nodes : ";
count=leaf_nodes(root);
cout<<" , no of leaf nodes : "<<count;


}

//.........................................................................................................................

//preorder 
//postorder
//levelorder


#include <iostream>
using namespace std;
#include <vector>
#include<queue>
template <typename T>
class treenode{
public:
  T data;
  vector<treenode<T> *> children;
  treenode(T data)
  {
    this->data = data;
  }
};

treenode<int>* take_input()
{
  int root_data;
  cout<<"enter root data : ";
  cin>>root_data;
  treenode<int>*root=new treenode<int>(root_data);
  queue<treenode<int>*>pendingnode;
  pendingnode.push(root);
  while(pendingnode.size()!=0)
  {
    treenode<int>*front=pendingnode.front();
    pendingnode.pop();
    int no_of_child;
    cout<<"enter no of child of "<<front->data<<" : ";
    cin>>no_of_child;
    for(int i=0;i<no_of_child;i++)
    {
         cout<<"enter "<<i<<"th child data of "<<front->data<<" : ";
         int child_data;
         cin>>child_data;
         treenode<int>*child=new treenode<int>(child_data);
         front->children.push_back(child);
         pendingnode.push(child);
    }
  }
  return root;
}

void preorder(treenode<int>*root)
{
  cout<<root->data<<" ";
  for(int i=0;i<root->children.size();i++)
  {
    preorder(root->children[i]);
  }
}
void postorder(treenode<int>*root)
{
  for(int i=0;i<root->children.size();i++)
  {
    postorder(root->children[i]);
  }
  cout<<root->data<<" ";
}
//  1 2 7 8  2 4 5  1 6  0 0 1 9 0 

int main()
{
  treenode<int>*root=take_input();
  cout<<endl;
  cout<<"preoder : ";
  preorder(root);
  cout<<endl;
  cout<<"postorder : ";
  postorder(root);
  cout<<endl;
}

//..........................................................................................................................................


//delete tree
// see... we shold first delete child then root

#include <iostream>
using namespace std;
#include <vector>
#include<queue>
template <typename T>
class treenode{
public:
  T data;
  vector<treenode<T> *> children;
  treenode(T data)
  {
    this->data = data;
  }
};

treenode<int>* take_input()
{
  int root_data;
  cout<<"enter root data : ";
  cin>>root_data;
  treenode<int>*root=new treenode<int>(root_data);
  queue<treenode<int>*>pendingnode;
  pendingnode.push(root);
  while(pendingnode.size()!=0)
  {
    treenode<int>*front=pendingnode.front();
    pendingnode.pop();
    int no_of_child;
    cout<<"enter no of child of "<<front->data<<" : ";
    cin>>no_of_child;
    for(int i=0;i<no_of_child;i++)
    {
         cout<<"enter "<<i<<"th child data of "<<front->data<<" : ";
         int child_data;
         cin>>child_data;
         treenode<int>*child=new treenode<int>(child_data);
         front->children.push_back(child);
         pendingnode.push(child);
    }
  }
  return root;
}

void preorder(treenode<int>*root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<" ";
  for(int i=0;i<root->children.size();i++)
  {
    preorder(root->children[i]);
  }
}
void postorder(treenode<int>*root)
{
  
  if(root==NULL)
  {
    return;
  }
  for(int i=0;i<root->children.size();i++)
  {
    postorder(root->children[i]);
  }
  cout<<root->data<<" ";
}

void deletetree(treenode<int>*root)
{
  for(int i=0;i<root->children.size();i++)
  {
    deletetree(root->children[i]);
  }
  delete root;
}
//  1 2 7 8  2 4 5  1 6  0 0 1 9 0 

int main()
{
  treenode<int>*root=take_input();
  cout<<endl;
  cout<<"preoder : ";
  preorder(root);
  cout<<endl;

  deletetree(root);               // delete tree

  cout<<"postorder : ";
  postorder(root);               // what will happen and why
  cout<<endl;
}

//....................... 

// but what if we want to call delete on root only.. and whole tree should get deleted
//destructors 
//destroctors bascially gives us chance for any kind of safai that we wanted to do

#include <iostream>
using namespace std;
#include <vector>
#include<queue>
template <typename T>
class treenode{
public:
  T data;
  vector<treenode<T> *> children;
  treenode(T data)
  {
    this->data = data;
  }
  ~treenode()                         
  {
    for(int i=0;i<children.size();i++)
    {
      delete children[i];
    }
  }
};

treenode<int>* take_input()
{
  int root_data;
  cout<<"enter root data : ";
  cin>>root_data;
  treenode<int>*root=new treenode<int>(root_data);
  queue<treenode<int>*>pendingnode;
  pendingnode.push(root);
  while(pendingnode.size()!=0)
  {
    treenode<int>*front=pendingnode.front();
    pendingnode.pop();
    int no_of_child;
    cout<<"enter no of child of "<<front->data<<" : ";
    cin>>no_of_child;
    for(int i=0;i<no_of_child;i++)
    {
         cout<<"enter "<<i<<"th child data of "<<front->data<<" : ";
         int child_data;
         cin>>child_data;
         treenode<int>*child=new treenode<int>(child_data);
         front->children.push_back(child);
         pendingnode.push(child);
    }
  }
  return root;
}

void print (treenode<int>*root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<" ";
  for(int i=0;i<root->children.size();i++)
  {
    print(root->children[i]);
  }
}

//  1 2 7 8  2 4 5  1 6  0 0 1 9 0 

int main()
{
  treenode<int>*root=take_input();
  cout<<endl;
  cout<<"tree node values : ";
  print(root);
  cout<<endl;

  delete root;              // and this will delete whole tree
}
//........................................................................................................................................
