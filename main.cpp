#include<iostream>
#include"stack.h"

using namespace::std;
using namespace::stacktest;

int main()
{
	Stack<int> stack;
#if 0
	stack.push(1);
	stack.push(2);
	stack.push(3);
#endif
	cout << stack.pop() << endl;
}
