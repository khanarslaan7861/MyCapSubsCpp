#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	lbl:
	cout<<"\nEnter your age: ";
	cin>>num;
	while(1)
	{
		if(num>17)
		{
			cout<<"\nYou are eligible to vote\n";
		}
		else
		{
			cout<<"\nYou are not eligible to vote\n";
		}
		goto lbl;
	}
	getch();
	return 0;
}
