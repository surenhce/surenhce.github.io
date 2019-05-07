#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

#define max 5
class stack1
{
	protected:
		int s[max], top;
	public:
		stack1()
		{
			top = -1;
		}
	virtual void push(int);
	virtual void pop();
	virtual void display();
};
class stack2: public stack1
{
	public: void push(int);
	void pop();
	void display();
};
void stack1::push(int item)
{
	s[++top] = item;
}
void stack1::pop()
{
	cout << "poped element is" << s[top--] << endl;
}
void stack1::display()
{
	for (int i = top; i >= 0; i--)
		cout << s[i] << endl;
}
void stack2::push(int item)
{
	if (top == max - 1)
		cout << "stack overflow" << endl;
	else
		stack1::push(item);
}
void stack2::pop()
{
	if (top == -1)
		cout << "stack underflow";
	else
		stack1::pop();
}
void stack2::display()
{
	if (top == -1)
		cout << "stack empty" << endl;
	else
		stack1::display();
}
void main()
{
	stack2 st;
	int ch, e;
	clrscr();
	while (1)
	{
		cout << " \t ** STACK OPERATION**" << endl;
		cout << "\n 1.push \n 2.pop \n 3.display \n 4.Exit";
		cout << "\n Enter the choice " << endl;
		cin >> ch;
		clrscr();
		switch (ch)
		{
			case 1:
				cout << "Enter the element" << endl;
				cin >> e;
				st.push(e);
				break;
			case 2:
				st.pop();
				break;
			case 3:
				st.display();
				break;
			case 4:
				exit(0);
			default:
				cout << "Invalid input";
		}
	}
}