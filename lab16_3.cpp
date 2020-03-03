#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(int x)
{
	vector<int> a(x);
	for(int i=0; i<x; i++)
	{
		a[i] = rand()%10;
	}
	return a;
}

void showVector(vector<int> y)
{
	cout << "[";
	for(int i=0; i<y.size(); i++)
	{
		cout << y[i] << " ";
	}
	cout << "]";
}

int dotProduct(vector<int> z, vector<int> r)
{
	int sum;
	for(int i=0; i<z.size(); i++)
	{
		sum += z[i]*r[i];
	}
	return sum;
}