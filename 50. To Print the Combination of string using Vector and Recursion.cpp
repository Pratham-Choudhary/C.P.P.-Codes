#include <bits/stdc++.h>
using namespace std;

vector<bool> A;
void print_it()
{
	for(bool str: A)  cout<<str<<" ";
	cout<<endl;
}
void repeat(string X,string Y)
{
	if(X.size()==Y.size())
	{
		cout<<X<<endl;
		return;
	}
	for(int i=0 ; i<Y.size() ; i++)
	{
		if(A[i]==false)
		{
			A[i]=1;
			cout<<X+Y[i]<<" ";
			print_it();
			repeat(X+Y[i],Y);
			A[i]=0;
			cout<<X+Y[i]<<" ";
			print_it();
		}
	}
}

int main() 
{
	string str="abc";
	A.resize(str.size());
	repeat("",str);
}
