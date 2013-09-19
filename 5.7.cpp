#include<iostream>
using namespace std;
int fff(int i,int k)
{
	int s;
	if(k==1)
	    s=i;
	else
		s=fff(i,k-1)*i;
	return s;
}
int main()
{
	int m;
	cout<<"please input x"<<endl;
	cin>>m;
	cout<<"please input y"<<endl;
	int n;
	cin>>n;
	cout<<fff(m,n)<<endl;
	return 0;
}