//编写必要的代码将一个数组赋给另一个数组，然后把这段
//代码改用 vector 实现。考虑如何将一个 vector 赋给另
//一个 vector。 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	const unsigned buf_size =10;
	int ia[buf_size];

	int ib[buf_size] = {2,5,65,3,7,5,48,2,};

	for (int i =0; i < buf_size; ++i)
	{
		ia[i] = ib[i];
	}

	for (int i =0; i < buf_size; ++i)
	{
		cout << "ia[" << i << "]: " << ia[i] << endl;
	}

	system("pause");
	return 0;
}

ia[0]: 2
ia[1]: 5
ia[2]: 65
ia[3]: 3
ia[4]: 7
ia[5]: 5
ia[6]: 48
ia[7]: 2
ia[8]: 0
ia[9]: 0
请按任意键继续. . .

//vector 赋值 vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> va;
	vector<int> vb;
	for (int i = 0; i < 10; ++i)
	{
		vb.push_back(i);
	}
	va = vb;		//用vector 赋值vector
	for (int i = 0; i < 10; ++i)
	{
		cout << "va[" << i << "]: " << va[i] << endl;
	}

	system("pause");
	return 0;
}

va[0]: 0
va[1]: 1
va[2]: 2
va[3]: 3
va[4]: 4
va[5]: 5
va[6]: 6
va[7]: 7
va[8]: 8
va[9]: 9
请按任意键继续. . .
