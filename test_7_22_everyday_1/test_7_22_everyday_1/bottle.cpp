#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int num = 0;
//////////////////////////////////
void fun(int n){
	if (n < 2){
		return;
	}
	else{
		if (n == 2){
			num++;
		}
		if (n >= 3){
			num++;
			fun(n - 2);
		}
	}
}


int main(){
	int n;
	while (cin >> n){
		fun(n);
		cout << num << endl;
		num = 0;
	}

	return 0;
}