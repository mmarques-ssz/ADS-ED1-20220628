#include <iostream>
using namespace std;

int fatorial(int n)
{
	int r = 1;
	for(int i=2; i<=n; ++i)
	{
		r *= i;
	}
	return r;
}

int fatorial_recursiv(int n)
{
	return (n==0?1:n*fatorial_recursiv(n-1));
}

int main(int argc, char** argv)
{
	int num;
	cout << "Informe o numero para fatorial: ";
	cin >> num;
	
	cout << "Fatorial de " << num << ": " 
	     << fatorial_recursiv(num) << endl;
	
	return 0;
}