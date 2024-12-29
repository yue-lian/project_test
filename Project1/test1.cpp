//#include<iostream>
//#include "test.h"
//using namespace std;
////结构体
//struct project {
//	//成员列表
//	string pname = "testName";
//	string ptime = "testTime";
//	bool pstate = false;
//};
//struct totalProject {
//	//成员列表
//	int id = 1; //项目编号
//	string name = "总项目名称1"; //项目名称
//	int age; //项目年龄
//	project proj;//子结构体
//
//};
//
////值传递
//void printTotalProject(totalProject tproj) {
//	tproj.age = 24;
//	cout << "子函数总项目1名称：" << tproj.name << "\t总项目1年龄：" << tproj.age << "\t\t项目1状态：" << tproj.proj
//		.pstate<< endl;
//}
//
////地址传递
//void printTotalProject2(totalProject *tproj) {
//	tproj->age = 22;
//	cout << "子函数总项目2名称：" << tproj->name << "\t总项目2年龄：" << tproj->age << "\t\t项目2状态：" << tproj->proj
//		.pstate << endl;
//}
//
//
//
//int main() {
//	int a = 0;
//	cout <<"Hello World"<< endl;
//	
//	/*
//	short - 2
//	int - 4
//	long - 4
//	long long - 8
//	*/
//	cout <<"short类型所占内存空间：" << sizeof(short) << endl;
//
//	float f1 = 3.14f;
//	double d1 = 3.14;
//	/*
//	* float - 4
//	* double - 8
//	*/
//	cout << "float sizeof =" << sizeof(f1) << endl;
//
//	//字符串型
//	char ch = 'a';
//	cout << ch << endl;
//	cout << (int)ch <<endl;
//	cout << "helloworld\b\b\b\b\b\b\b\b\b\b" << endl;
//
//	//数据的输入(int、double、char、string、bool)
//	//cout << "请输入a的值：";
//	//cin >> a;
//	//cout << a << endl;
//
//	//程序流程结构
//	//1.顺序
//
//	//2.选择
//	// 
//	//2.1 if
//	if (a > 10) {
//		cout << "a不小于10" << endl;
//	}
//	else if (a > 5)
//	{
//		cout << "a不小于5" << endl;
//	}
//	else
//	{
//		cout << "a小于等于5" << endl;
//	}
//
//	//2.2  三目运算符
//	int c = 0;
//	c = a <= 5 ? a : 0;
//	cout << "c = " << c << endl;
//
//	//2.3 switch语句
//	//switch语句中表达式类型只能是整型或者字符型
//	//switch的结构清晰，执行效率高，缺点是switch不可以判断区间
//
//
//	switch (a) {
//	case 1:
//		cout << "TURE" << endl;
//		break;
//	case 0:
//		cout << "FALSE" << endl;
//		break;
//	default:
//		cout << "Nothing" << endl;
//		break;
//	}
//	//3.循环
//	//cout << "请输入a的值：";
//	//cin >> a;
//	//3.1 while循环
//
//	//while (a != 0) {
//	//	cout << a << endl;
//	//	a++;
//	//}
//	
//	//3.2 do...while
//	//do
//	//{
//	//	cout << a << endl;
//	//	a++;
//	//} while (a < 10);
//	//3.3 for
//	//for (int i = 0; i < a; i++)
//	//{
//	//	cout << "now=" << i << endl;
//	//}
//
//	//4.数组
//	//4.1 一维数组
//
//	//int arr0[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//for (int i = 0; i < size(arr0); i++)
//	//{
//	//	cout << arr0[i] <<"\t";
//	//}
//	//cout << arr0 << endl;
//
//	//4.2 数组名用途
//	//1. 可以统计整个数组在内存中的长度
//	//2. 可以获取数组在内存中的首地址
//
//	
//	/*cout << "\n整个数组所占内存空间为： " << sizeof(arr0) << endl;
//	cout << "每个元素所占内存空间为： " << sizeof(arr0[0]) << endl;
//	cout << "数组的元素个数为： " << sizeof(arr0) / sizeof(arr0[0]) << endl;
//	cout << "数组首地址为： " << (int)arr0 << endl;
//	cout << "数组中第一个元素地址为： " << (int)&arr0[0] << endl;
//	cout << "数组中第二个元素地址为： " << (int)&arr0[1] << endl;
//	*/
//
//	//int arr2[] = { 2,54,9,6,8,13,4,3 };
//	//int n = size(arr2);
//	//cout << "-------------" << endl;
//	//BubbleSort(n, arr2);
//	//cout << "-------------" << endl;
//	//PrintArray(n, arr2);
//	//cout << "-------------" << endl;
//
//	//4.3二维数组
//	//二维数组数组名
//	int arr[2][3] =
//	{
//	{1,2,3},
//	{4,5,6}
//	};
//
//	//cout << "二维数组大小： " << sizeof(arr) << endl;
//	//cout << "二维数组一行大小： " << sizeof(arr[0]) << endl;
//	//cout << "二维数组元素大小： " << sizeof(arr[0][0]) << endl;
//	//cout << "二维数组行数： " << sizeof(arr) / sizeof(arr[0]) << endl;
//	//cout << "二维数组列数： " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//	////地址
//	//cout << "二维数组首地址：" << arr << endl;
//	//cout << "二维数组第一行地址：" << arr[0] << endl;
//	//cout << "二维数组第二行地址：" << arr[1] << endl;
//	//cout << "二维数组第一个元素地址：" << &arr[0][0] << endl;
//	//cout << "二维数组第二个元素地址：" << &arr[0][1] << endl;
//
//	//5.函数
//	//函数可以声明多次，定义只能有一次
//
//	//6.指针
//	/*
//	* 内存编号是从0开始记录的，一般用十六进制数字表示
//	* 可以利用指针变量保存地址
//	* 
//	*/
//	int t = 0;
//	int t1 = 1;
//	int t2 = 2;
//	int t3 = 3;
//	//int* p;
//	//p = &t;
//	cout << &t << endl;
//	//cout << p << endl;
//	//cout << *p << endl;
//
//	//const修饰指针
//	/*
//	* const修饰的是指针，指针指向可以改，指针指向的值不可以更改
//	* const修饰的是常量，指针指向不可以改，指针指向的值可以更改
//	* const既修饰指针又修饰常量
//	*/
//	const int* p1 = &t1;
//	//const限定的是指针
//	p1 = &t;
//
//	int* const p2 = &t2;
//	//const限定的是常量
//	*p2 = 20;
//
//	//既限定指针也限定常量
//	const int* const p3 = &t3;
//
//
//	cout << "*p1=" << *p1;
//	cout << "\tt1=" << t1 << endl;
//
//	cout << "*p2=" << *p2;
//	cout << "\tt2=" << t2 << endl;
//
//	cout << "*p3=" << *p3 << endl;
//
//	//7.指针+数组
//	int arr0[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//指向数组的指针
//	int *p = arr0;
//	cout << "arr0的第一个元素：" << arr0[0] << endl;
//	cout << "指针p访问的第一个元素：" << p << endl;
//	cout << "通过数组地址访问的第一个元素：" << *arr0 << endl;
//
//	//8.指针+函数
//	//利用指针作函数参数，可以修改实参的值
//
//	a = 1;
//	int b = 2;
//	swap1(a, b);
//	cout << "a = " << a << "\tb= " << b << endl;
//	swap2(&a, &b);
//	cout << "a = " << a << "\tb= " << b << endl;
//
//	//9.指针、数组、函数
//	/*
//	* eg.封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//	* 例如数组：int arr[10] = { 4,3,6,9,1,2,10,8,7,5 }
//	*/
//	int arr3[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int n = sizeof(arr3) / sizeof(int);
//	BubbleSort(n, arr3);
//	PrintArray(n, arr3);
//	cout << "\n";
//
//	//10.结构体
//	/*
//	结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
//	struct 结构体名 { 结构体成员列表 }；
//	*/
//	struct project proj1;
//	proj1.pname = "test";
//	proj1.ptime = "2024/12/27";
//	proj1.pstate = true;
//
//	project proj2;
//	proj2.pname = "test2";
//	proj2.ptime = "2024/12/27";
//	proj2.pstate = false;
//
//	cout << "项目1的名称= " << proj1.pname << endl;
//	cout << "项目1的日期= " << proj1.ptime << endl;
//	cout << "项目1的状态= " << proj1.pstate << endl;
//
//	//10.1 结构体数组
//	project arrp[3] = {
//		{"项目1","2024/12/27",false},
//		{"项目2","2024/12/20",false},
//		{"项目3","2024/12/15",true }
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		cout <<"项目名称=" << arrp[i].pname << "\t\t项目日期=" << arrp[i].ptime << "\t\t项目状态=" << arrp[i].pstate << endl;
//
//	}
//
//	//10.2 结构体指针
//	/*
//	通过指针访问结构体成员
//	利用操作符'->'可以通过结构体访问结构体属性
//	*/
//	struct project  * pp = &proj1;
//	cout << "pp->pname=" << pp->pname << endl;
//
//	//10.3 结构体内嵌套一个子结构体（见20行）
//
//	//10.4 结构体做函数参数
//	/*
//	* 将结构体作为参数向函数中传递
//	* 传递方式有两种值传递和地址传递
//	*/
//	totalProject tproj = { 2,"zxmmc",10,proj1 };
//	//值传递;
//	printTotalProject(tproj);
//	cout << "子函数总项目1名称：" << tproj.name << "\t总项目1年龄：" << tproj.age << "\t\t项目1状态：" << tproj.proj
//		.pstate << endl;
//
//	//地址传递
//	printTotalProject2(&tproj);
//	cout << "子函数总项目2名称：" << tproj.name << "\t总项目2年龄：" << tproj.age << "\t\t项目2状态：" << tproj.proj
//		.pstate << endl;
//
//
//
//	return 0;
//}
//
