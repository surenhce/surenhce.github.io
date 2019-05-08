#include<iostream.h>
#include<conio.h>
class student
{
  public:
    int reg,age;
    char name[20];
    void read_data();
};
class ugstudent:public student
{
  public:
    int stipend,sem;
    float fees;
    void read_data();
};
class pgstudent:public student
{
  public:
    int stipend,sem;
    float fees;
    void read_data();
};

void student::read_data()
{
  cout<<"\nEnter name:";
  cin>>name;
  cout<<"\nEnter Reg.no.";
  cin>>reg;
  cout<<"Enter the age";
  cin>>age;
}
void ugstudent::read_data()
{
  student::read_data();
  cout<<"\nEnter the sem:";
  cin>>sem;
  cout<<"\nEnter the fees";
  cin>>fees;
  cout<<"\nEnter the stipend";
  cin>>stipend;
}
void pgstudent::read_data()
{
  student::read_data();
  cout<<"\nEnter the sem:";
  cin>>sem;
  cout<<"\nEnter the fees";
  cin>>fees;
  cout<<"\nEnter the stipend";
  cin>>stipend;
}
void main()
{
  ugstudent ug[20];
  pgstudent pg[20];
  int i,n,m,sem;
  float average;
  clrscr();
  cout<<"\nEnter the no. of entries in the ugstudent class:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    ug[i].read_data();
  }
  for(sem=1;sem<=8;sem++)
  {
    float sum=0;
    int found=0,count=0;
    for(i=1;i<=n;i++)
    {
      if(ug[i].sem==sem)
      {
	sum=sum+ug[i].age;
	found=1;
	count++;
      }
    }
    if(found==1)
    {
      average=sum/count;
      cout<<"\nAverage of age of sem"<<sem<<"is"<<average;
    }
  }
  cout<<"\nEnter the no. of entries in the pgstudent class:";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    pg[i].read_data();
  }
  for(sem=1;sem<=8;sem++)
  {
    float sum=0;
    int found=0,count=0;
    for(i=1;i<=n;i++)
    {
      if(pg[i].sem==sem)
      {
	sum=sum+pg[i].age;
	found=1;
	count++;
      }
    }
    if(found==1)
    {
      average=sum/count;
      cout<<"\nAverage of age of sem"<<sem<<"is"<<average;
    }
  }
  getch();
}
