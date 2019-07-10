#define _CRT_SECURE_NO_WARNINGS 1



//编写一个函数，将2个数字相加，不使用+运算符
class UnusualAdd {
public:
	int addAB(int A, int B) {
		// write code here
		if (B == 0)
			return A;
		int sum = A ^ B;
		int carry = (A & B) << 1;
		return addAB(sum, carry);
	}
};