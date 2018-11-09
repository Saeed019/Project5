#ifndef STACKTYPE_H_INCLUDED
#define STACKTYPE_H_INCLUDED
#include <string>
const int MAX_ITEMS = 5;
class FullStack
{
public:
 std::string ErrorMessage() { return "The stack is full"; }
};
class EmptyStack
{
public:
 std::string ErrorMessage() { return "The stack is empty"; }
};
template<class ItemType>
class StackType
{
public:
 StackType();
 ~StackType();
bool IsFull();
bool IsEmpty();
void MakeEmpty();
void Push(ItemType item);
void Pop();
ItemType Top();
void print();
int SumOdd();
private:
int top;
ItemType items[MAX_ITEMS];
};

#endif // STACKTYPE_H_INCLUDED
