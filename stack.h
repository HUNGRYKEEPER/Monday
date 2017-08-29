#ifndef _STACK_H_
#define _STACK_H_

namespace stacktest {

	template <typename T>
	class Stack {
	public:
		Stack()
			:top(0) 
		{
			array[0] = T();       //这条语句什么意思？？？？？？？
		}
		void push(const T&);
		T pop();

	private:
		enum {SIZE=100};
		T array[SIZE];
		int top;

	};                //end of template class

template<typename T>
void Stack<T>::push(const T& val)
{
	if (top < SIZE) {
		array[top++] = val;
	}
}
template <typename T>
T Stack<T>::pop() 
{
	if (top > 0) {
		return array[--top];
	}
	return array[0];
}

}                             //namespace end

#endif // !_STACK_H_

