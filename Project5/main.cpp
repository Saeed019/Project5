#include <iostream>
#include "StackType.cpp"
using namespace std;

int main()
{
    int n,p;
    StackType<int> s;
    StackType<int> s2;
     bool found;
    found=s.IsEmpty();
    if(found == true)
    {
        cout<<"stack is empty"<<endl;

    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    cout<<"Insert 4 item\n";
    for(int i =0;i<4;i++)
    {
        cin>>n;
        s.Push(n);
        s2.Push(n);
    }

    cout<<"print the list\n"<<endl;
    s.print();
    cout<<"sum of all odd numbers: "<<endl;

    cout<<s2.SumOdd()<<endl;


    found=s.IsFull();
    if(found == true)
    {
        cout<<"stack is full\n";

    }
    else{cout<<"stack is not full\n";}
     found=s.IsEmpty();
    if(found==true)
    {
        cout<<"stack is empty"<<endl;

    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    cout<<"push one item: ";
    cin>>p;
    s.Push(p);
    s.print();
     found=s.IsFull();
    if(found == true)
    {
        cout<<"stack is full\n";

    }
    else{cout<<"stack is not full\n";}
    cout<<"pop two items:"<<endl;
    s.Pop();
    s.Pop();
    cout<<"print the list: "<<endl;
    s.print();
    cout<<"clear the stack"<<endl;
    s.MakeEmpty();
    found=s.IsEmpty();
    if(found==true)
    {
        cout<<"stack is empty"<<endl;

    }
    else
    {
        cout<<"stack is not empty"<<endl;
    }
    cout<<"print the stack:"<<endl;

    s.print();
    cout<<"push two item: \n";
    cin>>p;
    s.Push(p);
    cin>>p;
    s.Push(p);


    cout<<"print the stack: "<<endl;
    s.print();






}
