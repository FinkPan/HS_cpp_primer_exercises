//��һ������������� string ���󣬲��������Ƿ���ȡ�������ȣ���ָ���������ĸ��ϴ󡣽��ţ���д����������ǵĳ����Ƿ���ȣ��������ָ���ĸ��ϳ���
<<<<<<< HEAD


//�Ƚϴ�С  == , >
int main()
{
	string s1,s2;
	cout << "please input two strings: \n";
	cin >> s1 >> s2;
	if (s1 == s2)
	{
		cout << "you put the same string:" << s1 << endl;
	}
	else
	{
		cout << "the bigger  string is: "  \ 
			 << (s1>s2?s1:s2) \
			 << endl;
	}
	return 0;
}


//�Ƚϳ���  length();
int main()
{
	string s1,s2;
	cout << "please input two strings: \n";
	cin >> s1 >> s2;
	if (s1.length() == s2.length())
	{
		cout << "you put the same length of the string,and there are " << s1.length() << " letters" <<  endl;
	}
	else
	{
		
		cout << "the longer  string is: "  \ 
		        <<  (s1.length()>s2.length()?s1:s2)  \
				<< endl;
	}
	return 0;
}
=======
//test windos git
>>>>>>> origin/master
