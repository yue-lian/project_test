//#include <iostream>
//#include"test6.h"
//using namespace std;
//
//int main() {
//
//	//����
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
//	cout << "��������" << endl;
//}
//
//void Veicle::stop()
//{
//	cout << "����ֹͣ" << endl;
//}
//
//void Veicle::fuel()
//{
//	cout << "��������" << endl;
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
////20.3 �̳��еĶ���ģ��
//void test02()
//{
//	cout << "�̳�Test2���Ӷ���Ĵ�СΪ��" << sizeof(Son02) << endl;
//}
//
////20.4 �̳��й��������˳��
//
//
//void test04()
//{
//	Son1 son1;
//}
//
//Father1::Father1()
//{
//	cout << "����һ����" << endl;
//}
//
//Father1::~Father1()
//{
//	cout << "����һ����" << endl;
//}
//
//Son1::Son1()
//{
//	cout << "����һ����" << endl;
//}
//
//Son1::~Son1()
//{
//	cout << "����һ����" << endl;
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
//	cout << "father5��m_a=" << f5.m_a << endl;
//	cout << "son5��m_a=" << s5.m_a << endl;
//	//�������ʸ����б����ص�ͬ����Ա��������Ҫ�Ӹ����������
//	cout << "son5��m_a=" << s5.Father5::m_a << endl;
//	cout << "son5��m_b=" << s5.m_b << endl;
//}
////21.2 ��̬����
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
////��̬ʵ��
//void test07()
//{
//	//��
//	AbstractCalculator* ab = new AddCalculator();
//	ab->inputNum1 = 10;
//	ab->inputNum2 = 5;
//	cout << "10+5=" << ab->getResult() << endl;
//	delete ab;
//
//	//��
//	ab = new SubCalculator();
//	ab->inputNum1 = 10;
//	ab->inputNum2 = 5;
//	cout << "10-5=" << ab->getResult() << endl;
//	delete ab;
//
//	//��
//	ab = new MulCalculator();
//	ab->inputNum1 = 10;
//	ab->inputNum2 = 5;
//	cout << "10*5=" << ab->getResult() << endl;
//	delete ab;
//
//	//��
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
//		cout << "����������Ϊ0" << endl;
//		return 0;
//	}
//	return inputNum1/inputNum2;
//}
//
////21.3 ���麯���ͳ�����
///*
//���麯���﷨�� virtual ����ֵ���� ������ �������б�= 0 ;
//���������˴��麯���������Ҳ��Ϊ������
//
//�������ص㣺
//	�޷�ʵ��������
//	���������д�������еĴ��麯��������Ҳ���ڳ�����
//*/
//
//void Son6::func()
//{
//	cout << "func����" << endl;
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
////21.4 �������ʹ�������
///*
//��̬ʹ��ʱ����������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
//�����ʽ���������е�����������Ϊ���������ߴ�������
//
//�������ʹ����������ԣ�
//	���Խ������ָ���ͷ��������
//	����Ҫ�о���ĺ���ʵ��
//
//�������ʹ�����������
//	����Ǵ����������������ڳ����࣬�޷�ʵ��������
//
//	�������﷨��
//		virtual ~����(){}
//	���������﷨��
//		virtual ~����() = 0;
//		����::~����(){}
//*/
//
//void test09()
//{
//	Base9 *base9 = new Test9("���Ծ�");
//	base9->Speak();
//	Base9::Speak;
//	delete base9;
//}
//
//
//Test9::Test9(string name)
//{
//	cout << "Test9���캯��������" << endl;
//	m_name = new string(name);
//}
//
//Test9::Test9()
//{
//	cout << "����9����" << endl;
//}
//
//Test9::~Test9()
//{
//	cout << "����9������" << endl;
//}
//
//void Test9::Speak()
//{
//	cout << "��������9�ĳ�Ա����Speak()";
//}
//
//Base9::Base9()
//{
//	cout << "����9����" << endl;
//}
//
//Base9::~Base9()
//{
//	cout << "����9������" << endl;
//}