//编写程序实现从标准输入每次读入一行文本。然后改写程序，每次读入一个单词。
#include <iostream>
#include <string>
using namespace std;
void readline()
{
	string str1;
	cout << "1.input a sentence." << endl;
	getline(cin,str1);
	cout << "your sentence: " << str1 << endl;
}

void readwordbyword()
{
	string str2;
	cout << "2.input a sentence." << endl;
	while (cin >> str2)
		cout << str2 << endl;
}

