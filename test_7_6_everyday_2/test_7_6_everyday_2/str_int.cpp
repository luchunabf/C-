#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int StrToInt(string str) {
		int res = 0;
		int i = 0;
		int flag = 1;
		if (str[0] == '-'){
			i++;
			flag = -1;
		}
		if (str[0] == '+')
			i++;
		for (; i < str.length(); i++){
			if (str[i]<'0' || str[i]>'9')
				return 0;
			else{
				res = res * 10 + str[i] - '0';
			}
		}
		//or
		//for (; i < str.length(); i++){
		//	if (str[i]>='0' && str[i]<='9')
		//		res = res * 10 + str[i] - '0';
		//	else{
		//		return 0;
		//	}
		//}
		return res*flag;
	}
};