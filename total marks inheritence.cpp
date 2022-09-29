#include<iostream>
using namespace std;
class mark
{
	public:
		void getdata()
		{
			int no;
			char name;
			cout<<"enter roll no:";
			cin>>no;
			cout<<"enter name:";
			cin>>name;
		}
};
class maths:public mark
{
	public:
		void getdata1()
		{
			int m;
			cout<<"\nenter maths marks:";
			cin>>m;
		}
};
class physics:public mark
{
	public:
		void getdata2()
		{
			int p;
			cout<<"\nenter physics marks:";
			cin>>p;
		}
};
class chemistry:public mark
{
	public:
		void getdata3()
		{
			int c;
			cout<<"\nenter chemistry marks:";
			cin>>c;
		}
};
int main()
{
	int i,j,students[j];
	cout<<"enter no of students:";
	cin>>j;
	for(int i=1;i<=j;i++)
	{
	maths z;
    z.getdata();
    z.getdata1();
    physics y;
	y.getdata2();
	chemistry x;
	x.getdata3();
}
	return 0;
}

