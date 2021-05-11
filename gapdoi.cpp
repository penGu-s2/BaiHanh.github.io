#include <bits/stdc++.h>
using namespace std;


//câu a
int UCLN(int a,int b){
	while(a!=b){
		if(a>b) a=a-b;
		else b=b-a;
		}
		return a;
}
//câu c
int GT(int a,int b){
	b=1;
	for(int i=1;i<=a;i++){
		b*=i;
		}
		return b;
	}
int main(){
	int a,b,c,d;
	cout<<"Nhap 4 so tu nhien: ";
	cin>>a>>b>>c>>d;
	int ucln1=UCLN(a,b);
	int ucln2=UCLN(c,d);
	cout<<"Uoc chung lon nhat cua 4 so la: "<<UCLN(ucln1,ucln2)<<endl;
	cout<<"----------------------"<<endl;
	int gt,kq;
	cout<<"Nhap so: ";
	cin>>gt;
	if(gt>=8){
		cout<<"Moi nhap lai nho hon 8: ";
		cin>>gt;
		cout<<GT(gt,kq);
		}
		else{
			cout<<GT(gt,kq);
		}

	return 0;
}
