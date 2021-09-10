#include<iostream>
 
using namespace std;
 
int main(void)
{
	short initialLimakweight;
	short initialBobWeight;
	short counter = 0;
	
	cin >> initialLimakweight >> initialBobWeight;
	while(initialLimakweight <= initialBobWeight)
	{
		initialLimakweight*=3;
		initialBobWeight*=2;
		counter++;
	}
	cout << counter << endl;
}