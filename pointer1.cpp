#include <iostream>

using namespace std;

int main(){
	int num;
	int *ptr;
	
	ptr= &num;
	
	cout<< "Enter number: ";
	cin>>num;
	cout<< "The pointer value is "<<*ptr<< " the memory address is: "<<ptr;
}
