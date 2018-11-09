#include "StackType.h"
#include<iostream>
using namespace std;

template<class ItemType>
StackType<ItemType>::StackType(){
 top = -1;
}
template<class ItemType>
StackType<ItemType>::~StackType(){
 MakeEmpty();
}
template<class ItemType>
bool StackType<ItemType>::IsFull(){
return (top==(MAX_ITEMS-1));
}
template<class ItemType>
bool StackType<ItemType>::IsEmpty(){
return (top == - 1);
}
template<class ItemType>
void StackType<ItemType>::MakeEmpty(){
 top = -1;
}
template<class ItemType>
void StackType<ItemType>::Push(ItemType item){
if (IsFull())
 throw FullStack();
 top++;
 items[top] = item;
}
template<class ItemType>
void StackType<ItemType>::Pop(){
if (IsEmpty())
 throw EmptyStack();
 top--;
}
template<class ItemType>
ItemType StackType<ItemType>::Top(){
return items[top];
}
template<class ItemType>
int StackType<ItemType>::SumOdd()
{
     int value,sum = 0;
    while(!IsEmpty())
    {
       value = Top();
       if(value%2!=0)
       {
       sum = sum + value;

       }
        Pop();

    }
    return sum;
}
template<class ItemType>
void StackType<ItemType>::print()
{
    for(int i=top;i>=0;i--)
    {
        cout<<items[i]<<endl;
    }

}

