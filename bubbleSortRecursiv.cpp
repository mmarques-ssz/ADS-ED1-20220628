#include <iostream>
using namespace std;

void sort_bubble_recursiv(int t, int *a)
{
	int aux;
		for(int j=0; j<(t-1); ++j)
		{
			cout << "a[" << j << "]: " << a[j] << ", "
   			     << "a[" << j+1 << "]: " << a[j+1] << endl;
			if (a[j] > a[j+1])
			{
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
				cout << " -- Trocou --";
			}
			cout << endl;
		}
		cout << "-------" << endl;
		if (t>1)
		{
			sort_bubble_recursiv(t-1, a);
		}
}

void print(int t, int *a)
{
	for(int i=0; i<t; ++i)
	{
		cout << "a[" << i << "]: " << a[i] << endl;
	}
	cout << "-------" << endl;
}

int main(int argc, char** argv)
{
	int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
	print(8, v);
	sort_bubble_recursiv(8, v);
	print(8, v);
	
	return 0;
}