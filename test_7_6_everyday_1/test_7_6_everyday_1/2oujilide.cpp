#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//ŷ����þ��벻����2�ĵ�����
//�ܽ��㷨
int main(){

	int W, H, counts = 0;

	cin >> W >> H;

	if (W % 4 == 0 || H % 4 == 0){

		counts = W*H / 2;

	}
	else if (W % 2 == 0 && H % 2 == 0){

		counts = (W*H / 4 + 1) * 2;

	}
	else{

		counts = W*H / 2 + 1;

	}

	cout << counts << endl;

	return 0;

}