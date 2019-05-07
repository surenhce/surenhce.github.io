#include<iostream.h>
#include<conio.h>
#include<stdlib.h>

class employee
{
	char ename[20], eid[10];
	public:
		float b_sal;
	virtual void read();
	virtual void write();
	virtual void cal_sal() = 0;
};
void employee::read()
{
	cout << "Enter the employee name:" << endl;
	cin >> ename;
	cout << "Enter the employee id:" << endl;
	cin >> eid;
	cout << "Enter the basic salary:" << endl;
	cin >> b_sal;
}
void employee::write()
{
	cout << ename << "\t" << eid << "\t" << b_sal << "\t";
}
class manager: public employee
{
	float da, hra, gsal;
	public:
		void read();
	void write();
	void cal_sal();
};
void manager::read()
{
	cout << "Enter Manager Details:\n";
	employee::read();
	cout << "Enter employee DA in percentage:" << endl;
	cin >> da;
	cout << "Enter employee HRA in percantage;" << endl;
	cin >> hra;
}
void manager::write()
{
	cout << "The Manager Details:\n";
	cout << "NAME\tEID\tBASIC\tDA\tHRA\tGSAL\n";
	employee::write();
	cout << da << "\t" << hra << "\t" << gsal << endl;
}
void manager::cal_sal()
{
	da = (b_sal *da) / 100;
	hra = (b_sal *hra) / 100;
	gsal = b_sal + da + hra;
}
class salesman: public employee
{
	float da, hra, ta, gsal;
	public:
		void read();
	void write();
	void cal_sal();
};

void salesman::read()
{
	cout << "Enter salesman details:\n";
	employee::read();
	cout << "enter the employee DA percentage:\n" << endl;
	cin >> da;
	cout << "enter the employee HRA in percentage:" << endl;
	cin >> hra;
	cout << "enter the employee TA in percentage:" << endl;
	cin >> ta;
}
void salesman::write()
{
	cout << "The Salesman Details:\n";
	cout << "NAME\tEID\tBASIC\tDA\tHRA\tTA\tGSAL\n";
	employee::write();
	cout << da << "\t" << hra << "\t" << ta << "\t" << gsal << endl;
}
void salesman::cal_sal()
{
	da = (b_sal *da) / 100;
	hra = (b_sal *hra) / 100;
	ta = (b_sal *ta) / 100;
	gsal = b_sal + da + hra + ta;
}
void main()
{
	employee *p[] = {
		new manager(), new salesman
	};
	clrscr();
	if (p == NULL)
	{
		cout << "allocation failed" << endl;
		exit(0);
	}
	for (int i = 0; i < 2; i++)
	{
		p[i]->read();
		p[i]->cal_sal();
		p[i]->write();
	}
	getch();
}