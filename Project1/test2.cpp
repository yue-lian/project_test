#include<iostream>
using namespace std;

//全局变量
int qa = 1;
int qb = 2;

//全局常量
const int ca = 1;
const int cb = 2;

int * func() {
	int a = 10;
	return &a;
}
int * func1() {
	int* a = new int(10);
	return a;
}

int main() {
	//11.内存分区模型
	/*
	* 四个主要区域
	代码区：存放函数体的二进制代码，由操作系统进行管理的
	全局区：存放全局变量和静态变量以及常量
	栈区：由编译器自动分配释放, 存放函数的参数值,局部变量等
	堆区：由程序员分配和释放,若程序员不释放,程序结束时由操作系统回收
	*/

	//11.1 程序运行前
	/*
	代码区：
		存放 CPU 执行的机器指令
		代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
		代码区是只读的，使其只读的原因是防止程序意外地修改了它的指令
	全局区(包括常量区)：
		全局变量和静态变量存放在此.
		全局区还包含了常量区, 字符串常量和其他常量也存放在此.
		该区域的数据在程序结束后由操作系统释放
	*/

	//局部变量
	int a = 3;
	int b = 4;

	//打印地址
	cout << "局部变量a地址为：" << (int)&a << endl;
	cout << "局部变量b地址为：" << (int)&b << endl;
	cout << "全局变量qa地址为：" << (int)&qa << endl;
	cout << "全局变量qb地址为：" << (int)&qb << endl;

	//静态变量
	static int ja = 5;
	static int jb = 6;
	//局部常量
	const int jba = 7;
	const int jbb = 8;

	cout << "静态变量ja地址为： " << (int)&ja << endl;
	cout << "静态变量jb地址为： " << (int)&jb << endl;

	cout << "字符串常量地址为： " << (int)&"hello world" << endl;
	cout << "字符串常量地址为： " << (int)&"hello world1" << endl;

	cout << "全局常量ca地址为： " << (int)&ca << endl;
	cout << "全局常量cb地址为： " << (int)&cb << endl;

	cout << "局部常量jba地址为： " << (int)&jba << endl;
	cout << "局部常量jbb地址为： " << (int)&jbb << endl;


	//11.2 程序运行后

	/*
	栈区：
		由编译器自动分配释放, 存放函数的参数值,局部变量等
		注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放
	*/

	int* p = func();
	cout << *p << endl;
	cout << *p << endl;


	/*
	堆区：
		由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
		在C++中主要利用new在堆区开辟内存
		堆区数据由程序员管理开辟和释放
		堆区数据利用new关键字进行开辟内存
	*/

	int* p2 = func1();
	cout << *p2 << endl;
	cout << *p2 << endl;


	//12.new操作符
	//12.1 基础语法
	cout << *p << endl;
	cout << *p2 << endl;

	//利用delete释放堆区数据
	delete p2;

	//释放的空间不可访问
	//cout << *p << endl;                

	//12.1.2 开辟数组
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100; 
		cout << arr[i] << endl;
	}

	//释放数组delete[]	
	delete[] arr;

	//13.引用
	/*
		作用： 给变量起别名
		语法： 数据类型 &别名 = 原名

	*/

	int a1 = 10;
	int& a2 = a1;
	cout << "a=" << a << endl;
	//cout<<"a="<<

	//test1 你好

	cout << "a=" << a << endl;

	//241229 13:15


	return 0;
}