#include<iostream.h>
#include<conio.h>
#define size 5
class stack
{
	int a[size];
	int top;
 	public:
		stack(){top=-1;}
		stack operator+(int num)
		{
			if(top==size-1)
			{
				cout<<"\nstack overflow";
				getch();
			}
			else
			{
				a[++top]=num;
			}
			return(*this);
		}
		stack operator-(int)
		{
			if(top==-1)
			{
				cout<<"\n stack underflow!";
			}
			else
			{
				cout<<"\nDeleted item is:"<<a[top--];
			}
			getch();
			return(*this);
		}
		friend ostream &operator<<(ostream &x,stack &s);
};
ostream &operator<<(ostream &x,stack&s)
{
	if(s.top==-1)
	{
		cout<<"\n stack is empty!";
	}
	else
	{
		x<<"\n stack is ...\n";
		for(int i=s.top;i>=0;--i)
		{
			x<<s.a[i]<<"\n";
		}
	}
	getch();
	return(x);
}
int main()
{
	stack s1;
	int ch;
	do
	{
		clrscr();
		cout<<"1.push\n2.pop\n3.display\n4.exit\nenter ur choice";
		cin>>ch;
		switch(ch)
		{
			case 1:int ele;
			  cout<<"\n enter the number:";
			  cin>>ele;
			  s1=s1+ele;
			  break;
			case 2:s1=s1-1;
			  break;
			case 3:cout<<s1;
			  break;
		}
	}while(ch!=4);
	getch();
	return 0;
}
