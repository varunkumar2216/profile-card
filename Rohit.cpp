//#include<iostream>
//using namespace std;

//int main(){
//	int year;
//	cout<<"Enter your year: ";
//	cin>>year;
//	if(year%4==0 and year%100!=0 or (year%400==0)){
//		cout<<true;
//	}else{
//		cout<<false;
//	}
//	
//	return 0;
//}

//int main(){
//	int pin;
//	int correctPin=1234;
//	int count=0;
//	
//	do{
//		cout<<"Enter your pin number: ";
//		cin>>pin;
//		if(pin==correctPin){
//			cout<<"Congratulation your pin is correct, you can access your program"<<endl;
//			break;
//		}else{
//			cout<<"Sorry, your pin is incorrect. Re-Enter your pin"<<endl;	
//		}
//		count++;
//	}while(count<3) ;
//	if(count>=3){
//		cout<<"Your account is blocked because you accessed 3 times but pin is incorrect.";
//	}
//	return 0;
//}

//int main(){
//	int age;
//	cout<<"Enter your age: ";\
//	cin>>age;
//	if(age<18){
//		cout<<"You belongs to children category.";
//	}if(age<60){
//		cout<<"You belongs to atult category.";
//	}else{
//		cout<<"you belongs to old category. ";
//	}
//	return 0;
//}

//int main(){
//	int name;
//	cout<<"Enter your name: ";
//	cin>>name;
//	switch(name){
//		case 1:
//			cout<<"My name is Rohit."<<endl;
//			break;
//		case 2:
//			cout<<"My name is Sachin."<<endl;
//			break;
//		case 3:
//			cout<<"My name is Pawan."<<endl;
//			break;
//		defautl:
//			cout<<"Sorry are not in case";
//	}
//			
//	return 0;
//			
//}

//#include<iostream>
//using namespace std;
//
//int sum(int num){
//	if(num==1){
//		return num;
//	}else{
//		return num+sum(num-1);
//	}
//}
//
//int main(){
//	int n,result;
//	cout<<"Enter your natural number: ";
//	cin>>n;
//	result=sum(n);
//	cout<<"The sum of "<<n<<" natural number is: "<<result;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main(){
//	int num;
//	cout<<"Enter your number: ";
//	cin>>num;
//	int sum=0;
//	for(int i=1; i<=num; i++){
//		sum+=i;
//	}
//	cout<<"The sum of "<<num<<" natural number is: "<<sum;
//	return 0;
//}

#include<iostream>
using namespace std;
// fibonacci with recursion.
int fibonacci(int num){
	if(num==0){
		return 0;
	}if(num==1){
		return 1;
	}else{
		return fibonacci(num-1)+fibonacci(num-2);
	}
}

int main(){
	int num;
	cout<<"Enter your number: ";
	cin>>num;
	cout<<"Fibonacci series of "<<num<<" is: "<<endl;
	for(int i=0; i<num; i++){
		cout<<fibonacci(i)<<endl;
	}
	return 0;
}
