#include <iostream>
#include <StackClass.h>
int main() {
	Stack * p = new Stack;
	p ->push(1);
	p ->push(2);
	p ->push(3);
	p ->push(4);
	p->pop();
	p->pop();
	p->push(5);
	p->push(6);
	p->pop();
	p->push(7);
	p->push(8);
	p->showStack();
}
