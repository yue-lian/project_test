#include <iostream>
#include"test6.h"
using namespace std;

int main() {

	//����
	cout << "20.2------------" << endl;
	test01();

	cout << "20.3------------" << endl;
	test02();

	cout << "20.4------------" << endl;
	test04();

	cout << "20.5------------" << endl;
	test05();

	cout << "20.6------------" << endl;
	test06();

	return 0;
}

void Veicle::start()
{
	cout << "��������" << endl;
}

void Veicle::stop()
{
	cout << "����ֹͣ" << endl;
}

void Veicle::fuel()
{
	cout << "��������" << endl;
}

void Car::drive()
{
	start();
	stop();

}

void Bike::ride()
{
	start();
	stop();
}

void Truck::haul()
{
	start();
	stop();
}

void test01()
{
	Veicle veicle;
	Car car;
	Bike bike;
	Truck truck;

	car.drive();
	car.start();
	//car.stop();

	bike.ride();
	//bike.start();
	//bike.stop();

	truck.haul();
	//truck.start();
	//truck.stop();
}


//20.3 �̳��еĶ���ģ��
void test02()
{
	cout << "�̳�Test2���Ӷ���Ĵ�СΪ��" << sizeof(Son02) << endl;
}

//20.4 �̳��й��������˳��


void test04()
{
	Son1 son1;
}

Father1::Father1()
{
	cout << "����һ����" << endl;
}

Father1::~Father1()
{
	cout << "����һ����" << endl;
}

Son1::Son1()
{
	cout << "����һ����" << endl;
}

Son1::~Son1()
{
	cout << "����һ����" << endl;
}
//20.5

Father5::Father5()
{
	m_a = 500;
	m_b = 501;
}

void Father5::func052(int a)
{
	m_a = a;
}

Son5::Son5()
{
	m_a = 50;
}

void test05()
{
	Father5 f5;
	Son5 s5;
	cout << "father5��m_a=" << f5.m_a << endl;
	cout << "son5��m_a=" << s5.m_a << endl;
	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
	cout << "son5��m_a=" << s5.Father5::m_a << endl;
	cout << "son5��m_b=" << s5.m_b << endl;
}
//21.2 ��̬����

void test06()
{

	Calculator calculator(1.2, 0.2, "*");
	calculator.operatorResult(calculator.str1);
	cout << calculator.m_a << calculator.str1 << calculator.m_b << "=" << calculator.operatorResult(calculator.str1) << endl;
	Calculator calculator2(1.2, 0.2, "/");
	calculator2.operatorResult(calculator2.str1);
	cout << calculator2.m_a << calculator2.str1 << calculator2.m_b << "=" << calculator2.operatorResult(calculator2.str1) << endl;


}

//double Calculator::add(double a, double b)
//{
//	return a+b;
//}
//
//double Calculator::sub(double a, double b)
//{
//	return a-b;
//}
//
//double Calculator::mul(double a, double b)
//{
//	return a*b;
//}
//
//double Calculator::div(double a, double b)
//{
//	return a/b;
//}

double Calculator::operatorResult(string str)
{
	if (str == "+")
	{
		return m_a + m_b;
	}
	else if (str == "-") {
		return m_a - m_b;
	}
	else if (str == "*") {
		return m_a * m_b;
	}
	else if (str == "/") {
		return m_a / m_b;
	}

	return 0;
}

Calculator::Calculator()
{
}

Calculator::Calculator(double a, double b)
{
	m_a = a;
	m_b = b;
}

Calculator::Calculator(string str)
{
	str1 = str;
}

Calculator::Calculator(double a, double b, string str)
{
	m_a = a;
	m_b = b;
	str1 = str;
}
