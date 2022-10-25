// Set or unset bit

#include <bits/stdc++.h>
using namespace std;

void printBinary(int num)
{
	for(int i=10;i>=0;i--)
	{
		cout<< (num>>i&1);
	}
	cout<<"\n";
}

int main(void)
{
	int x=9;
	int a=2;
	
	printBinary(x|(1<<a));			// set bit
	
	a=3;
	printBinary(x&~(1<<a)); 		// unset bit
	
}
