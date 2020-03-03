#include<iostream>
using namespace std;

void myString(char *&x, int y)
{
	x = new char[y];
	x[0] = 'A';
	for(int i=0; i<y; i++) 
	{
		*(x+i) = *x+i;
	}
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}