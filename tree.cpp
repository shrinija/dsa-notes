//........................................................................................................................
//learn treenode class creation..

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
