//��һ�����򣬴ӱ�׼�����ȡ��� string ���󣬰���������������ŵ�һ������� string �����С���������Ӻ�� string ���󡣽��ţ���д���򣬽����Ӻ����� string �����Կո������
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1,s2;
	int nCount;
	cout << "how many strings : \n";
	cin >> nCount;
	for(int i = 0; i < nCount; i++)
	{
		cin >> s1;
		s2 += s1;			//string ����
	}
	cout << "you strings: " << s2 <<  endl;
	return 0;
}

//��д���򣬽����Ӻ����� string �����Կո������

int main()
{
	string s1,s2;
	int nCount;
	cout << "how many strings : \n";
	cin >> nCount;
	for(int i = 0; i < nCount; i++)
	{
		cin >> s1;
		s2 = s2  + s1 + " "; 		//�����Ӻ����� string �����Կո������
	}
	cout << "you strings: " << s2 <<  endl;
	return 0;
}