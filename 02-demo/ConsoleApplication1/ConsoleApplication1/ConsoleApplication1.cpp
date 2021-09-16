// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
	/*int a[] = { 1, 2, 3, 4 };
	int len = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;*/

	/*vector<int> vec = { 1, 2, 3, 4 };
	
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	
	vec.push_back(6);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	
	vec.insert(--vec.end(), 7);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}
	
	vec.pop_back();
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}

	vec.erase(vec.end() - 2)
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << endl;
	}*/

	//char str[] = { "helloworld" };
	////const char* p = "helloworld";
	//char* p = str;

	//for (int i = 0; i < 10; i++)
	//{
	//	str[i] ++;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << str[i] << endl;
	//}
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	p[i] ++;
	//}
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << p[i] << endl;
	//}

	//cout << strlen(str) << endl;
	//cout << sizeof(str) << endl;

	char str[20] = { "helloworld" };
	char str2[] = { "saybay" };

	strcat_s(str, strlen(str) + strlen(str2) + 1, str2);
	cout << str << endl;
}
