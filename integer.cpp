#include <iostream>
using namespace std;
bool check_prime(int);
int main(){
	int n;
	cout<<"enter a positive integer:";
	cin>>n;
	if(check_prime(n))
	cout<<n<<"is a prime number.";
	else
	cout<<n<<"is not prime number.";
	return 0;
}
bool check_prime(int n){
	bool is_prime=true;
	//0and1 are not prime numders
	if(n==0 ||n==1){
		is_prime=false;
	}
	for(int i=2;i<2/2;++i){
	    if(n%1==0){
	    	is_prime=false;
	    	break;
     	}
    }
}
