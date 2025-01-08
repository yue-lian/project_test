#ifndef _OI_PROJECT1_TEST6_H
#define _OI_RPOJECT1_TEST6_H
#include <iostream>
#include <string>
using namespace std;

//20 继承
//20.1 继承的基本语法

/*
class A : public B;
A 类称为子类 或 派生类
B 类称为父类 或 基类
*/


//20.2 继承方式

/*
继承的语法： class 子类 : 继承方式 父类

继承方式一共有三种：
	公共继承
	保护继承
	私有继承

	继承方式	基类公有成员	基类保护成员	基类私有成员
	公有继承		公有			保护		无法访问
	保护继承		保护			保护		无法访问
	私有继承		私有			私有		无法访问

*/

/*
题目： 考虑一个系统，定义了一个基类 Vehicle 和两个派生类 Car 和 Bike。请根据不同的继承方式（公有继承、保护继承、私有继承），实现以下需求：

Vehicle 类有一个公有方法 start()，一个保护方法 stop()，和一个私有方法 fuel()。
Car 和 Bike 分别继承自 Vehicle 类：
Car 继承自 Vehicle，并且可以访问并使用 Vehicle 类的 start() 和 stop() 方法。
Bike 继承自 Vehicle，但要求只能访问 start() 方法，不能直接访问 stop() 和 fuel() 方法。
Truck 类作为一个特殊类型的车辆，它会私有继承 Vehicle 类，仅在其内部实现功能，外部无法直接使用 Vehicle 的任何方法。
请用 C++ 编写实现代码，并说明每个类的行为。
*/
class Veicle
{
public:
	void start();
protected:
	void stop();
private:
	void fuel();

};

class Car :public Veicle
{
public:
	void drive();
private:

};

class Bike :protected Veicle
{
public:
	void ride();
private:

};

class Truck : private Veicle
{
public:
	void haul();
private:

};

void test01();

//20.3 继承中的对象模型
class Test2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son02 :public Test2
{
public:
	int m_D;
};

void test02();

//20.4 继承中构造和析构顺序
// 问题：继承中父类和子类的析构函数顺序？
// 总结：继承中 先调用父类构造函数，再调用子类构造函数，析构顺序与构造相反
class Father1
{
public:
	Father1();
	~Father1();
private:

};

class Son1 :public Father1
{
public:
	Son1();
	~Son1();
private:
};

void test04();

//20.5 继承同名成员处理方式
//问题：当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？

//总结：
// 1. 子类对象可以直接访问到子类中同名成员
// 2. 子类对象加作用域可以访问到父类同名成员
// 3. 当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数

class Father5
{
public:
	Father5();
	//void func051();
	void func052(int a);

public:
	int m_a;
	int m_b;
};

class Son5 :public Father5
{
public:
	Son5();


public:
	int m_a;
};

void test05();

//20.6 继承同名静态成员处理方式
// 问题：继承中同名的静态成员在子类对象上如何进行访问？
// 同20.5，直接在静态成员变量或者静态成员方法上添加父类的作用域即可

//20.7 多继承语法
/*
C++允许一个类继承多个类
语法： class 子类 ：继承方式 父类1 ， 继承方式 父类2...
多继承可能会引发父类中有同名成员出现，需要加作用域区分
C++实际开发中不建议用多继承
*/

//可能导致多个同名成员，需要用到对应的作用域进行区分

//20.8 菱形继承
/*
菱形继承概念：
	两个派生类继承同一个基类
	又有某个类同时继承者两个派生类
	这种继承被称为菱形继承，或者钻石继承
菱形继承问题：
	1. 羊继承了动物的数据，驼同样继承了动物的数据，当草泥马使用数据时，就会产生二义性。
	2. 草泥马继承自动物的数据继承了两份，其实我们应该清楚，这份数据我们只需要一份就可以
*/


//21 多态

//21.1 多态的基本概念

/*
多态是C++面向对象三大特性之一
多态分为两类
	静态多态: 函数重载 和 运算符重载属于静态多态，复用函数名
	动态多态: 派生类和虚函数实现运行时多态
静态多态和动态多态区别：
	静态多态的函数地址早绑定 - 编译阶段确定函数地址
	动态多态的函数地址晚绑定 - 运行阶段确定函数地址
*/

/*
多态是指同一个操作在不同对象上表现出不同的行为。它的两种主要形式：
	编译时多态（静态多态）：通过函数重载（Function Overloading）或操作符重载（Operator Overloading）实现。
	运行时多态（动态多态）：通过继承和方法重写（Method Overriding）实现，依赖于动态绑定（Dynamic Binding）。

	C++运行时多态通过继承和虚函数实现

*/

//21.2 多态案例一-计算器类
/*
案例描述：
分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
*/

//普通写法
class Calculator
{
public:
	double operatorResult(string str);
	Calculator();
	Calculator(double a, double b);
	Calculator(string str);
	Calculator(double a, double b, string str);
public:
	double m_a;
	double m_b;
	string str1;
};

void test06();


//多态实现
class AbstractCalculator
{
public:
	virtual int getResult();
public:
	int inputNum1;
	int inputNum2;
};

//加法计算
class AddCalculator:public AbstractCalculator
{
public:
	
	int getResult();

};
//减法计算
class SubCalculator:public AbstractCalculator
{
public:
	
	int getResult();

};

//乘法计算
class MulCalculator:public AbstractCalculator
{
public:
	
	int getResult();

};

//除法计算
class DivCalculator:public AbstractCalculator
{
public:
	int getResult();
};
//测试计算器的正常功能
void test07();

//21.3 纯虚函数和抽象类

class Base
{
public:
	virtual void func() = 0;

};

class Son6 :public Base
{
public:
	virtual void func();
};

void test08();


//21.4虚析构和纯虚析构
class Base9
{
public:
	Base9();
	virtual ~Base9() = 0;
	virtual void Speak() = 0;
public:

};

class Test9 :public Base9
{
public:
	Test9(string name);
	Test9();
	~Test9();
	virtual void Speak();
public:
	string *m_name;
};

void test09();

#endif // !_OI_PROJECT1_TEST6_H

