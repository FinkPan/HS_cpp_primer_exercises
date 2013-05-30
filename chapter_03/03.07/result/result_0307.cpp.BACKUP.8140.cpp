//编一个程序读入两个 string 对象，测试它们是否相等。若不相等，则指出两个中哪个较大。接着，改写程序测试它们的长度是否相等，若不相等指出哪个较长。
<<<<<<< HEAD


//比较大小  == , >
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


//比较长度  length();
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
