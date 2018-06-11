#include <iostream>
#include <StackClass.h>

Stack::Stack (const int sz )
{
  this->msize = sz;
  if (sz < 1)
    {
      std::cout << "Stack must contain some elements!";
      return;
    }
  this->mstack = new int[sz];
  this->mtop = -1;
}
Stack::~Stack() 
{
	delete [] this->mstack;
	this->mstack = NULL;
}

void Stack::push( int element)
{
  if( this->mtop == (this->msize -1)) 
    {
      int* tmp = new int[2*this->msize];
      for ( int ix = 0; ix < this->msize; ++ix) {
          tmp[ix] = this->mstack[ix];
      }
      delete [] this->mstack;
      this->mstack = tmp;
      this->msize *= 2;
    }
  this->mstack[++ this->mtop] = element;
}
int Stack::pop()
{
  if( this->top == -1) {
    std::cout << "Stack Underflow!";
    return -1;
  }
  return this->mstack[this->mtop --];
}
void Stack::showStack() const
{
	for(int ix = 0; ix < this->mtop; ++ix)
		std::cout << this->mstack[ix] << std::endl;
}
