//#include <iostream>
//#include"test6.h"
//using namespace std;
//
//int main() {
//
//	//测试
//	cout << "20.2------------" << endl;
//	test01();
//
//	cout << "20.3------------" << endl;
//	test02();
//
//	cout << "20.4------------" << endl;
//	test04();
//
//	cout << "20.5------------" << endl;
//	test05();
//
//	cout << "20.6------------" << endl;
//	test06();
//
//	cout << "20.7------------" << endl;
//	test07();
//
//	cout << "20.8------------" << endl;
//	test08();
//
//	cout << "20.9------------" << endl;
//	test09();
//
//
//	return 0;
//}
//
//void Veicle::start()
//{
//	cout << "车辆启动" << endl;
//}
//
//void Veicle::stop()
//{
//	cout << "车辆停止" << endl;
//}
//
//void Veicle::fuel()
//{
//	cout << "车辆加油" << endl;
//}
//
//void Car::drive()
//{
//	start();
//	stop();
//
//}
//
//void Bike::ride()
//{
//	start();
//	stop();
//}
//
//void Truck::haul()
//{
//	start();
//	stop();
//}
//
//void test01()
//{
//	Veicle veicle;
//	Car car;
//	Bike bike;
//	Truck truck;
//
//	car.drive();
//	car.start();
//	//car.stop();
//
//	bike.ride();
//	//bike.start();
//	//bike.stop();
//
//	truck.haul();
//	//truck.start();
//	//truck.stop();
//}
//
//
////20.3 继承中的对象模型
//void test02()
//{
//	cout << "继承Test2的子对象的大小为：" << sizeof(Son02) << endl;
//}
//
////20.4 继承中构造和析构顺序
//
//
//void test04()
//{
//	Son1 son1;
//}
//
//Father1::Father1()
//{
//	cout << "父类一创建" << endl;
//}
//
//Father1::~Father1()
//{
//	cout << "父类一销毁" << endl;
//}
//
//Son1::Son1()
//{
//	cout << "子类一创建" << endl;
//}
//
//Son1::~Son1()
//{
//	cout << "子类一销毁" << endl;
//}
////20.5
//
//Father5::Father5()
//{
//	m_a = 500;
//	m_b = 501;
//}
//
//void Father5::func052(int a)
//{
//	m_a = a;
//}
//
//Son5::Son5()
//{
//	m_a = 50;
//}
//
//void test05()
//{
//	Father5 f5;
//	Son5 s5;
//	cout << "father5的m_a=" << f5.m_a << endl;
//	cout << "son5的m_a=" << s5.m_a << endl;
//	//如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
//	cout << "son5的m_a=" << s5.Father5::m_a << endl;
//	cout << "son5的m_b=" << s5.m_b << endl;
//}
////21.2 多态案例
//
//void test06()
//{
//
//	Calculator calculator(1.2, 0.2, "*");
//	calculator.operatorResult(calculator.str1);
//	cout << calculator.m_a << calculator.str1 << calculator.m_b << "=" << calculator.operatorResult(calculator.str1) << endl;
//	Calculator calculator2(1.2, 0.2, "/");
//	calculator2.operatorResult(calculator2.str1);
//	cout << calculator2.m_a << calculator2.str1 << calculator2.m_b << "=" << calculator2.operatorResult(calculator2.str1) << endl;
//}
//
//
//double Calculator::operatorResult(string str)
//{
//	if (str == "+")
//	{
//		return m_a + m_b;
//	}
//	else if (str == "-") {
//		return m_a - m_b;
//	}
//	else if (str == "*") {
//		return m_a * m_b;
//	}
//	else if (str == "/") {
//		return m_a / m_b;
//	}
//
//	return 0;
//}
//
//Calculator::Calculator()
//{
//}
//
//Calculator::Calculator(double a, double b)
//{
//	m_a = a;
//	m_b = b;
//}
//
//Calculator::Calculator(string str)
//{
//	str1 = str;
//}
//
//Calculator::Calculator(double a, double b, string str)
//{
//	m_a = a;
//	m_b = b;
//	str1 = str;
//}
////多态实现
//void test07()
//{
//	//加
//	AbstractCalculator* ab = new AddCalculator();
//	ab->inputNum1 = 10;
//	ab->inputNum2 = 5;
//	cout << "10+5=" << ab->getResult() << endl;
//	delete ab;
//
//	//减
//	ab = new SubCalculator();
//	ab->inputNum1 = 10;
//	ab->inputNum2 = 5;
//	cout << "10-5=" << ab->getResult() << endl;
//	delete ab;
//
//	//乘
//	ab = new MulCalculator();
//	ab->inputNum1 = 10;
//	ab->inputNum2 = 5;
//	cout << "10*5=" << ab->getResult() << endl;
//	delete ab;
//
//	//除
//	ab = new DivCalculator();
//	ab->inputNum1 = 10;
//	ab->inputNum2 = 5;
//	cout << "10/5=" << ab->getResult() << endl;
//	delete ab;
//
//
//}
//
//
//int AbstractCalculator::getResult()
//{
//	return 0;
//}
//
//int AddCalculator::getResult()
//{
//	return inputNum1+inputNum2;
//}
//
//int SubCalculator::getResult()
//{
//	return inputNum1 - inputNum2;
//}
//
//int MulCalculator::getResult()
//{
//	return inputNum1 * inputNum2;
//}
//
//int DivCalculator::getResult()
//{
//	if (inputNum2 == 0) {
//		cout << "被除数不能为0" << endl;
//		return 0;
//	}
//	return inputNum1/inputNum2;
//}
//
////21.3 纯虚函数和抽象类
///*
//纯虚函数语法： virtual 返回值类型 函数名 （参数列表）= 0 ;
//当类中有了纯虚函数，这个类也称为抽象类
//
//抽象类特点：
//	无法实例化对象
//	子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//*/
//
//void Son6::func()
//{
//	cout << "func调用" << endl;
//}
//void test08()
//{
//	Base* son6 = new Son6;
//	son6->func();
//	delete son6;
//}
//
//
//
//
////21.4 虚析构和纯虚析构
///*
//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式：将父类中的析构函数改为虚析构或者纯虚析构
//
//虚析构和纯虚析构共性：
//	可以解决父类指针释放子类对象
//	都需要有具体的函数实现
//
//虚析构和纯虚析构区别：
//	如果是纯虚析构，该类属于抽象类，无法实例化对象
//
//	虚析构语法：
//		virtual ~类名(){}
//	纯虚析构语法：
//		virtual ~类名() = 0;
//		类名::~类名(){}
//*/
//
//void test09()
//{
//	Base9 *base9 = new Test9("测试九");
//	base9->Speak();
//	Base9::Speak;
//	delete base9;
//}
//
//
//Test9::Test9(string name)
//{
//	cout << "Test9构造函数被调用" << endl;
//	m_name = new string(name);
//}
//
//Test9::Test9()
//{
//	cout << "子类9创建" << endl;
//}
//
//Test9::~Test9()
//{
//	cout << "子类9已清理" << endl;
//}
//
//void Test9::Speak()
//{
//	cout << "我是子类9的成员方法Speak()";
//}
//
//Base9::Base9()
//{
//	cout << "父类9创建" << endl;
//}
//
//Base9::~Base9()
//{
//	cout << "父类9已清理" << endl;
//}