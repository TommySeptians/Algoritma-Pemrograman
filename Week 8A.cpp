#include <iostream>
using namespace std;

int main (){
	int M [3] [3];
	
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> M [i] [j];
		}
	}
	for (int i = 0; i < 3; i++) 
	{
		for (int j = 0; j < 3; j++)
		{
			cout << M [i] [j] << endl;
		}
	}
	return 0;
}