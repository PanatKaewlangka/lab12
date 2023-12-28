#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    if(x==1 || x==0){
        return x;
    }else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}
Noprada
Noprada Krit
#include<iostream>
using namespace std;

int gcd(int,int);

int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

int gcd(int x,int y){
    if(x%y==0){
        return y;
    }else{
        return gcd(y, x%y);
    }
}
Noprada
Noprada Krit
#include<iostream>

using namespace std;

void mySwap(int &,int &); 

int main(){
	int x,y;
	cin >> x >> y;
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap (x,y);
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	
	return 0;
}

void mySwap(int &x,int &y){
	int a;
	a=x;
	x=y;
	y=a;
}