//��д�����ж����������Ƿ���ȣ�Ȼ���дһ�����Ƶĳ�
//��Ƚ����� vector�� 


int main()
{
	int a[] = {5,8,6,7};
	int b[] = {5,8,6,7};
	size_t ca = sizeof(a)/sizeof(int);
	size_t cb = sizeof(b)/sizeof(int);
	if (ca == cb)
	{
		for (int i =0; i != ca; ++i)
		{
			if ((a[i] == b[i]) && (i == ca -1))
				cout << "the arrays are the some!\n";
			else if(a[i] != b[i])
			{
				cout << "the arrays are difference!\n";
				break;	//�������һ����ͬ�ͷ���.
			}
		}
	}
	else
		cout << "the arrays are difference!\n";	
	system("pause");
	return 0;
}

int main()
{
	vector<int> va;
	vector<int> vb;
	for (int i = 0; i < 10; ++i)
	{
		va.push_back(i);
		vb.push_back(i);
	}
	size_t ca = va.size();
	size_t cb = vb.size();
	if (ca == cb)
	{
		for (int i =0; i != ca; ++i)
		{
			if ((va[i] == vb[i]) && (i == ca -1))
				cout << "the vector are the some!\n";
			else if(va[i] != vb[i])
			{
				cout << "the vector are difference!\n";
				break;	//�������һ����ͬ�ͷ���.
			}
		}
	}
	else
		cout << "the vector are difference!\n";	

	system("pause");
	return 0;
}