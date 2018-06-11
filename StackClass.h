#ifndef CLASS_STACK
#define CLASS_STACK

#include <iostream>
class Stack
{
private:
  int* mstack;
  int mtop;
  int msize;
public:
    Stack (const int sz=100);
   ~Stack ();
  void push (int element);
  int push ();
  void showStack () const;
};
#endif
