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
