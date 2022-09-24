#include<iostream>
using namespace std;
int main()
{
	int age;
	// Input age
	cout<<"Enter the age of the person:";
	cin>>age;
	// Check voting eligibility
	if(age>=18)
	{
		cout<<"Your are eligible for voting.";
	}
	else
	{
		cout<<"Your are not eligible for voting.";
	}
	cout<<"still u have"<<age-18<<"year";
	return 0;
	
}