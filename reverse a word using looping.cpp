#include<bits/stdc++.h>
using namespace std;
void reverse(string str)
{
	int len=str.length();
	int n=len;
	while(n--)
	cout<<str[n];
}
int main()
{
	string s;
	cin>>s;
	reverse(s);
	return(0);
}