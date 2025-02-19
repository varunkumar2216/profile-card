#include <iostream>
using namespace std;
int main(){
	int sum=0,first,last;
	cout<<"enter the first integer: ";
	cin>>first;
	cout<<"enter the first integer: ";
	cin>>last;
	for(first;first<=last;first++){
		sum=sum+first;
	}
	cout<<"the sum of integer between the intervals is:"<<sum;
	return 0;
}
