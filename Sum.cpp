#include<iostream>
using namespace std;

//int sum_natural(int num){
//	if(num==1){
//		return 1;
//	}else{
//		return(num+sum_natural(num-1));
//	}
//}
//int main(){
//	int num;
//	cout<<"Enter your positive number: ";
//	cin>>num;
//	int result=sum_natural(num);
//	cout<<"The sum of "<<num<<" natural number is: "<<result<<endl;
//	return 0;
//}

//int fibonacci_series(int n){
//	if(n==0){
//		return 0;
//	}if(n==1){
//		return 1;
//	}else{
//		return (fibonacci_series(n-1)+fibonacci_series(n-2));
//	}
//}
//int main(){
//	int n;
//	cout<<"Enter your number: ";
//	cin>>n;
//	cout<<"The fibonacci series of "<<n<<" is: "<<endl;
//	for(int i=0; i<n; i++){
//		cout<<fibonacci_series(i)<<endl;
//	}
//	
//}


// Function to check if a number is prime
//bool isPrime(int num) {
//    if (num <= 1) {
//        return false; // Numbers less than or equal to 1 are not prime
//    }
//
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return false; // num is divisible by i, so it's not prime
//        }
//    }
//
//    return true; // num is prime if no divisors were found
//}
//
//int main() {
//    int number;
//
//    cout << "Enter a number: ";
//    cin >> number;
//
//    if (isPrime(number)) {
//        cout << number << " is a prime number." << endl;
//    } else {
//        cout << number << " is not a prime number." << endl;
//    }
//
//    return 0;
//}

int main(){
	int a;
	cout<<"Enter your value: ";
	cin>>a;
	switch(a){
		case 1:
			cout<<"Rohit"<<endl;
			break;
		case 2:
			cout<<"Sachin"<<endl;
			break;
		case 3:
			cout<<"Pawan"<<endl;
			break;
		default:
			cout<<"He is not your friend.";
	}
}
