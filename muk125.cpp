#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{	
	int num[4], Total = 0, Max = 0, Min = 0; 
	string name[4];
	for(int i = 0; i < 4; i++) //i<=3 input array
	{	cout<<"Name ["<< i <<"]: ";
		cin>>name[i];
		cout<<"Score ["<< i <<"]: ";
		cin>>num[i];

	}
	cout<< "--------------------"<<endl;
	cout<< "Name\t\tScore"<<endl;
	cout<< "--------------------"<<endl;
	
	for(int i = 0; i < 4; i++)
	{	cout << name[i] <<"\t\t"<<num[i] <<endl;
		Total = Total+num[i];
		if(num[i] > Max)
			Max = num[i];
		if(num[i] <= Min)
			Max = num[i];
	}
		cout<<"--------------------"<<endl;
		cout<<"Max Score ="<<Max<<endl;
		cout<<"Min Score ="<<Min<<endl;
		cout<<"Total ="<<Total<<endl;
		cout<<"Average ="<<(float)Total/4<<endl;
system("pause");
return 0;
}