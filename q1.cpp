
#include<bits/stdc++.h>
using namespace std;

typedef int ll;

int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}


int main()
{
	ll a,b;
	cin>>a>>b;
	cout<<"LCM :: "<<a*b/gcd(a,b);
}