#include<iostream>

using namespace std;

int fiboracci(int n){
	if (n==1 || n==0) return 1;
	else return fiboracci(n-1)+fiboracci(n-2);
}

int luythua(int x, int n){
	if (n==1) return x;
	else return x*luythua(x,n-1);
}

int giaithua(int n){
	if (n==1) return 1;
	else return n*giaithua(n-1);
}
int main(){
	int a,n;
	cout<<"ban muon lam gi?"<<endl;
	cout<<"1. bai toan fiboracci"<<endl;
	cout<<"2. bai toan luy thua"<<endl;
	cout<<"3. tinh giai thua"<<endl;
	cin>>a;
	
	switch (a){
		case 1:
			cout<<"nhap n:";
			cin>>n;
			cout<<"so fiboracci:"<<fiboracci(n);
			break;
		case 2:
			int x;
			cout<<"nhap x:"; cin>>x;
			cout<<"nhap so mu n:"; cin>>n;
			cout<<x<<"^"<<n<<"="<<luythua(x,n);
		case 3:
			cout<<"nhap n:"; cin>>n;
			cout<<n<<"! ="<<giaithua(n);
			break;
	}
	return 0;
}
