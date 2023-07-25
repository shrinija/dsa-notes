#include <iostream>

using namespace std;

int main() 
{
    // allocating a new int stars variable using new
    int* stars = new int;
    *stars = 5000;
    cout<<stars<<endl;
    cout<<"Visible stars in the sky: "<<*stars;
    cout<<endl;
    // stars memory deallocated using the delete operator
    delete stars;
    cout<<stars<<endl;
    cout<<"\nGarbage value: "<<*stars;

    stars = NULL;

    return 0;
}
