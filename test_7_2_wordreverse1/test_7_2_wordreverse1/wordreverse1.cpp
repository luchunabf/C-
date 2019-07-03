#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//���ַ�����ch��n���ַ�����
void invert(char *ch, int n)
{
	int i;
	char temp;
	for (i = 0; i < n / 2; i++)
	{
		temp = ch[i];
		ch[i] = ch[n - 1 - i];
		ch[n - 1 - i] = temp;
	}
}

//�ֽ��ַ���ȫ�����ã������ú���ַ��������ַ��������á������ַ����Ļ�������Ϊ�Ƿ��пո�
void wordInvertInSentence(char* ch)
{
	int i = 0;
	int len;
	len = strlen(ch);
	invert(ch, len);//���ַ���ȫ������
	while (ch[i] != '\0')//���ַ�����ʼλ�ÿ�ʼ������ֱ�����ʵ�������
	{
		i = 0;
		while (ch[i] != ' '&& ch[i] != '\0'){ i++; }//�����ǰ���ַ���Ϊ�ո���û�з��ʵ�������־����ָ����ƣ�ֱ����ǰ�ַ�Ϊ�ո�
		invert(ch, i);//�ַ���ch��i���ַ���������
		if (ch[i] != '\0')//���û�з��ʵ�������־��Ҫ�����ո��ַ������������¸�����
			ch = ch + i + 1;
		else           //�����ǰ�ַ��Ѿ��ǽ�����־�ˣ�����Ҫ�������ո��ַ�����ѭ��������
			ch = ch + i;
	}
}

int main()
{
	//char str[] = "i am Sundy, i come from tianjin.,";//
	string s1;
	while (getline(cin, s1))
	{
		cout << s1 << "\n";
		//string::iterator it = s1.begin();
		wordInvertInSentence(s1.begin());
		cout << s1;
		cout << "\n";
	}
	return 0;
}