//bit manipulations
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int mod= 1000000007;
const int N=400010;
#define endl "\n"
#define F first
#define S second
#define MP make_pair
#define v vector<int>
#define pb push_back
#define ii pair<int,int>
#define all(a) a.begin(),a.end()
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void printBinary(int num)
{
	for(int i=10;i>=0;i--)
	{
		cout<<((num>>i)&1);//num ki binary Right shift by i
	}
	cout<<endl;
}
int main()
{
printBinary(11); //finding num 11 ki binary
//to check if 3rd bit is set or not
int a=11;
if(a&(1<<3)!=0)
	cout<<"set\n";
else
	cout<<"un set\n";
//to unset an already set 3rd number
printBinary(a&(~(1<<3)));
}