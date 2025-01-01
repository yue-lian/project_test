#include<iostream>
//#include "test4.h"
using namespace std;

//全局常量
const double PI = 3.14;

//全局变量
int i = 0;

class Circle
{
public:
	//属性
	int m_r;//半径
	double calculateZC() {
		return 2 * PI * m_r;
	}//计算周长


private:

};

class Student
{
public:
	string m_name;
	int m_id;


	void setName(string name) {
		m_name = name;
	}
	void setId(int id) {
		m_id = id;
	}
	void showInfo() {
		cout << "名称=" << m_name << endl << "学号=" << m_id << endl;
	}
private:

};

class Person
{
public:
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;

public:
	void func() {
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

class ExampleClass
{
	int a =1;
	void printA() {
		cout <<"a=" << a << endl;
	}
};

struct ExampleStruct
{
	int b =2;
	void printB() {
		cout << "b=" << b << endl;
	}
};

class MyClass
{
public:
	MyClass();
	MyClass(int n);
	MyClass(const MyClass& p);
	~MyClass();

private:
public:
	int age;

};

MyClass::MyClass()
{
	cout << "这是无参构造函数" << endl;
}

MyClass::MyClass(int n)
{

	cout << "这是有参构造函数\tn=" << n << endl;
}

MyClass::MyClass(const MyClass& p)
{
	age = p.age;
	cout << "这是拷贝构造函数\tage=" << age << endl;
}

MyClass::~MyClass()
{
	cout << "这是析构函数" << endl;

}

class Test
{
public:
	Test() {
		cout << "这是无参构造函数" << endl;
	}

	Test(int n) {
		age = n;
		cout << "这是有参构造函数\tn=" << age << endl;

	}

	Test(const Test& t) {
		age = t.age;
		cout << "这是拷贝构造函数\tage=" << age << endl;

	}

	//~Test() {
	//	cout << "这是析构函数" << endl;
	//}

private:
public:
	int age;
};

class Test1
{
public:
	Test1();

	Test1(int testData1);

	Test1(const Test1& p);

	~Test1();

private:

public:
	int testData1 = 1;
	int* testData2 = nullptr ;

};

//调用无参构造函数
void test01() {
	Test t;
}
//调用有参构造函数
void test02() {
	//1.括号法
	Test t1(24);

	//2.显示法
	Test t2 = Test(25);
	Test t3 = Test(t2);

	//3.隐式转换法
	Test t4 = 26;
	Test t5 = t4;

}
//查看析构函数的调用时机
void test03() {
	Test t1(24);
	Test t2(t1);
	Test t3 = t2;
	Test t4 = 26;
	Test t5(t4);
	Test t6;
	t6 = t5;
}

Test1::Test1()
{
	cout << "-----" << i << "------" << endl;
	i++;
	cout << "这是无参构造" << endl;
	testData2 = nullptr; // 初始化指针
}

Test1::Test1(int testData1)
{
	cout << "这是有参构造" << endl;
}

Test1::Test1(const Test1& p)
{
	cout << "这是拷贝函数" << endl;
	testData1 = p.testData1;
	if (p.testData2!=nullptr)
	{
		testData2 = new int(*p.testData2);
	}
	else
	{
		testData2 = nullptr;
	}

	
}

Test1::~Test1()
{
	cout << "这是析构函数" << endl;
	delete testData2;//释放动态分配的内存
}


class Test2
{
public:

	int m_A;
	int m_B;
	int m_C;
	//Test3 t3;

	Test2() { cout << "Test2的无参构造！" << endl; };
	//传统方式初始化
	/*
	Test2(int a, int b, int c) {
	 m_A = a;
	 m_B = b;
	 m_C = c;
	}
	*/

	//初始化列表方式初始化
	Test2(int a, int b, int c):m_A(a),m_B(b),m_C(c){}

	//Test2(int a, int b, int c,int ta) :m_A(a), m_B(b), m_C(c),t3(ta) {}

	void PrintTest2() {
		cout << "mA:" << m_A << endl;
		cout << "mB:" << m_B << endl;
		cout << "mC:" << m_C << endl;
		//cout << "tA:" << t3.t_A << endl;
	}



};

class Test3
{
public:
	Test3() { cout << "Test3的无参构造！" << endl; };
	Test3(int a) :t_A(a) {}
	int t_A;
};

class Test4
{
public:
	static void printTest4() {
		cout << "t4A=" << t4A << endl;
		//cout << "t4B=" << t4B;//静态成员函数只能访问静态成员变量
		
	}

	void setT4C(int a) {t4C = a;}

	static int getT4C() {return t4C;}


private:
	static int t4C;

public:
	static int t4A;
	int t4B = 1;
};

int Test4::t4A = 41;
int Test4::t4C = 43;

void test04() {
	//静态成员变量的两种访问方式

	Test4 t4;




	//1.对象访问
	t4.t4A = 410;
	t4.t4B = 420;
	cout << "t4A=" << t4.t4A << endl;
	cout << "t4B=" << t4.t4B << endl;

	t4.setT4C(430);
	cout << "t4C=" << t4.getT4C() << endl;

	//2.类名访问

	cout <<"类名访问t4C：" << Test4::getT4C() << endl;
}

class Test5
{
public:
	Test5(int age) {
		this->age = age;
	}

	Test5& Test5AddAge(Test5 t5) {
		this->age += t5.age;
		//返回对象本身
		return *this;
	}
	int age;
};

static void test05() {
	Test5 t5(10);
	Test5 t51(11);
	t51.Test5AddAge(t5).Test5AddAge(t5).Test5AddAge(t5).Test5AddAge(t5);
	cout << "t51的年龄为：" << t51.age << endl;
}

class Test6
{
public:
	
	Test6() {};

	Test6(int n) {
		mAge = n;
	}

	void showClassName() {
		cout << "我的类名是测试6" << endl;
	}
	void showClass5() {
		if (this == NULL) {
			return;
		}
		cout << "mAge=" << mAge << endl;
	}
	int mAge=1;
};

static void test06() {
	Test6* p = NULL;
	p->showClassName();
	p->showClass5();

	Test6 p1(11);
	Test6* p2 = &p1;
	p2->showClassName();
	p2->showClass5();
	
	p1.mAge = 0;

	p1.showClass5();
	p2->showClass5();

}

class Test7
{
public:
	Test7() {
		m_a = 0;
		m_b = 0;
	}

	void showTest7() const {
		this->m_b = 100;
	}

	void MyFunc() const {
		cout << "这是MyFunc函数" << endl;
	}

	int m_a;
	mutable int m_b;//可修改的
};

static void test07() {
	const Test7 t7;//常对象
	t7.showTest7();
	cout <<"m_b=" << t7.m_b << endl;
	t7.m_b = 101;
	cout << "m_b=" << t7.m_b << endl;
	t7.MyFunc();
}

class Test8
{
	//告诉编译器 goodGay全局函数 是Test8的友元，可以访问私有内容
	friend void goodGay(Test8* t8);
public:
	Test8() {
		this->m_BedRoom="卧室";
		this->m_SittingRoom="客厅";
	};

public:
	string m_SittingRoom;//客厅
private:
	string m_BedRoom;//卧室
};

void goodGay(Test8* t8) {
	cout << "好基友正在访问： " << t8->m_SittingRoom << endl;
	cout << "好基友正在访问： " << t8->m_BedRoom << endl;
}

static void test08() {
	Test8 t;
	goodGay(&t);
}

//测试 类做友元
/*
1.定义被访问的类
2.声明友元类
3.定义友元类
4.实现友元类的构造函数和成员函数
5.测试
*/
class Test9
{
public:
	string PublicInformation;

private:
	string PrivateInformation;

};




int main() {
	//15.1 封装的意义一：在设计类的时候，属性和行为写在一起，表现事物
	//1 设计一个圆类，求圆的周长
	// c1就是一个具体的圆
	Circle c1;
	c1.m_r = 10; //给圆对象的半径 进行赋值操作
	//2 * pi * 10 = = 62.8
	cout << "圆的周长为： " << c1.calculateZC() << endl;


	//2 设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号
	Student stu1;
	stu1.m_id = 3;
	stu1.m_name = "张三";
	stu1.showInfo();

	stu1.setId(4);
	stu1.setName("李四");
	stu1.showInfo();

	//15.2 封装的意义二：类在设计时，可以把属性和行为放在不同的权限下，加以控制
	//(1)public、protected、private
	//3 用Person解释不同访问权限
	Person person;
	//cout << "姓名=" << person.m_Name << endl;
	person.func();
	cout << "姓名=" << person.m_Name << endl;

	//15.3 struct与class的区别
	/*
	* 在C++中 struct和class唯一的区别就在于 默认的访问权限不同
	* struct 默认权限为公共
	* class 默认权限为私有
	*/

	//4 通过ExampleClass和ExampleStruct解释
	ExampleClass ec;
	//cout << ec.a << endl;
	ExampleStruct es;
	cout << "es.b=" << es.b << endl;

	//15.4 成员属性设置私有
	/*
	* 成员属性的定义都放在私有pravate里面定义，在public通过get、set方法实现数据的读取和录入。 
	*/


	//16 对象的初始化和清理
	//C++中的面向对象来源于生活，每个对象也都会有初始设置以及 对象销毁前的清理数据的设置

	//16.1 构造函数和析构函数
	/*
	* 构造函数和析构函数会被编译器自动调用，完成对象初始化和清理工作。
	* 编译器提供的构造函数和析构函数是空实现。
	* 
	* ！构造函数：主要作用在于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无须手动调用。
	* 语法：类名(){}
	1. 构造函数，没有返回值也不写void
	2. 函数名称与类名相同
	3. 构造函数可以有参数，因此可以发生重载
	4. 程序在调用对象时候会自动调用构造，无须手动调用,而且只会调用一次

	* ！析构函数：主要作用在于对象销毁前系统自动调用，执行一些清理工作。
	* 语法：~类名(){}
	1. 析构函数，没有返回值也不写void
	2. 函数名称与类名相同,在名称前加上符号 ~
	3. 析构函数不可以有参数，因此不可以发生重载
	4. 程序在对象销毁前会自动调用析构，无须手动调用,而且只会调用一次
	*/

	//16.1.1 构造函数分类
	//（1）按照参数：有参构造和无参构造；
	//（2）按照类型：普通构造和拷贝构造

	//cout << "-----无参构造-----" <<endl;
	//MyClass myClass;

	//cout << "-----有参构造-----" << endl;
	//MyClass::MyClass(1);

	//cout << "-----拷贝构造-----" << endl;
	//const int& p = 18;
	//MyClass::MyClass(p);

	//cout << "-----析构函数-----" << endl;
	//myClass.~MyClass();


	//16.1.2 构造函数的调用

	//无参调用
	//test01();

	//有参调用
	//test02();

	//16.2 拷贝构造函数调用时机
	/*
	* 使用一个已经创建完毕的对象来初始化一个新对象
	* 值传递的方式给函数参数传值
	* 以值方式返回局部对象
	*/

	//test03();

	//16.3 析构函数调用规则
	/*
	* 系统默认提供三个函数（默认构造函数、默认析构函数、默认拷贝构造函数）
	* 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
	* 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
	*/

	//16.4 深拷贝和浅拷贝
	/*
	* 浅拷贝：简单的赋值拷贝操作
	* 深拷贝：在堆区重新申请空间，进行拷贝操作
	*/

	//Test1 t0;
	//Test1 t1(12);
	//Test1 t2(t1);

	//16.5 初始化列表
	/*
	* C++提供了初始化列表语法，用来初始化属性
	* 语法： 构造函数()：属性1(值1),属性2（值2）... {}
	*/

	Test2 t2(1, 2, 3);
	t2.PrintTest2();
	cout << "-------16.5-----------" << endl;

	//16.6 类对象作为类成员
	/*
	* 当类中成员是其他类对象时，我们称该成员为 对象成员
	* 构造的顺序是 ：先调用对象成员的构造，再调用本类构造
	* 析构顺序与构造相反
	*/


	Test2 t3(1, 2, 3);
	t3.PrintTest2();

	cout << "------16.6-------" << endl;


	//16.7 静态成员
	/*
	静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
	（1）静态成员分为：
		a.静态成员变量
			1.所有对象共享同一份数据
			2.在编译阶段分配内存
			3.类内声明，类外初始化
		b.静态成员函数
			1.所有对象共享同一个函数
			2.静态成员函数只能访问静态成员变量
	*/
	test04();
	cout << "------16.7-------" << endl;

	//17 C++对象模型和this指针
	//17.1 成员变量和成员函数分开存储
	
	/*
	* 只有非静态成员变量才占用对象空间
	* 静态成员变量、静态成员函数、函数都不占用对象空间
	*/

	//
	cout << sizeof(Test4) << endl;

	cout << "------17.1END-------" << endl;

	//17.2 this指针
	//当形参和成员变量同名，可用this区分
	//在类的非静态成员函数中返回对象本身，可用return *this

	test05();

	cout << "------17.2END-------" << endl;

	//17.3 空指针访问成员函数
	//C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
	//如果用到this指针，需要加以判断保证代码的健壮性
	test06();
	cout << "------17.3END-------" << endl;

	//17.4 const修饰成员函数
	/*
	常函数：
		成员函数后加const后我们称为这个函数为常函数
		常函数内不可以修改成员属性
		成员属性声明时加关键字mutable后，在常函数中依然可以修改
	常对象：
		声明对象前加const称该对象为常对象
		常对象只能调用常函数
	*/

	test07();
	cout << "------17.3END-------" << endl;

	//18 友元
	//18.1 全局函数做友元

	test08();
	cout << "------18.1END-------" << endl;

	//18.2 类做友元

	
	//18.3 成员函数做友元



	return 0;

}