#ifndef _OI_PROJECT1_TEST6_H
#define _OI_RPOJECT1_TEST6_H
#include <iostream>
#include <string>
using namespace std;

//20 �̳�
//20.1 �̳еĻ����﷨

/*
class A : public B;
A ���Ϊ���� �� ������
B ���Ϊ���� �� ����
*/


//20.2 �̳з�ʽ

/*
�̳е��﷨�� class ���� : �̳з�ʽ ����

�̳з�ʽһ�������֣�
	�����̳�
	�����̳�
	˽�м̳�

	�̳з�ʽ	���๫�г�Ա	���ౣ����Ա	����˽�г�Ա
	���м̳�		����			����		�޷�����
	�����̳�		����			����		�޷�����
	˽�м̳�		˽��			˽��		�޷�����

*/

/*
��Ŀ�� ����һ��ϵͳ��������һ������ Vehicle ������������ Car �� Bike������ݲ�ͬ�ļ̳з�ʽ�����м̳С������̳С�˽�м̳У���ʵ����������

Vehicle ����һ�����з��� start()��һ���������� stop()����һ��˽�з��� fuel()��
Car �� Bike �ֱ�̳��� Vehicle �ࣺ
Car �̳��� Vehicle�����ҿ��Է��ʲ�ʹ�� Vehicle ��� start() �� stop() ������
Bike �̳��� Vehicle����Ҫ��ֻ�ܷ��� start() ����������ֱ�ӷ��� stop() �� fuel() ������
Truck ����Ϊһ���������͵ĳ���������˽�м̳� Vehicle �࣬�������ڲ�ʵ�ֹ��ܣ��ⲿ�޷�ֱ��ʹ�� Vehicle ���κη�����
���� C++ ��дʵ�ִ��룬��˵��ÿ�������Ϊ��
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

//20.3 �̳��еĶ���ģ��
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

//20.4 �̳��й��������˳��
// ���⣺�̳��и�����������������˳��
// �ܽ᣺�̳��� �ȵ��ø��๹�캯�����ٵ������๹�캯��������˳���빹���෴
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

//20.5 �̳�ͬ����Ա����ʽ
//���⣺�������븸�����ͬ���ĳ�Ա�����ͨ��������󣬷��ʵ����������ͬ���������أ�

//�ܽ᣺
// 1. ����������ֱ�ӷ��ʵ�������ͬ����Ա
// 2. ����������������Է��ʵ�����ͬ����Ա
// 3. �������븸��ӵ��ͬ���ĳ�Ա��������������ظ�����ͬ����Ա����������������Է��ʵ�������ͬ������

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

//20.6 �̳�ͬ����̬��Ա����ʽ
// ���⣺�̳���ͬ���ľ�̬��Ա�������������ν��з��ʣ�
// ͬ20.5��ֱ���ھ�̬��Ա�������߾�̬��Ա��������Ӹ���������򼴿�

//20.7 ��̳��﷨
/*
C++����һ����̳ж����
�﷨�� class ���� ���̳з�ʽ ����1 �� �̳з�ʽ ����2...
��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
C++ʵ�ʿ����в������ö�̳�
*/

//���ܵ��¶��ͬ����Ա����Ҫ�õ���Ӧ���������������

//20.8 ���μ̳�
/*
���μ̳и��
	����������̳�ͬһ������
	����ĳ����ͬʱ�̳�������������
	���ּ̳б���Ϊ���μ̳У�������ʯ�̳�
���μ̳����⣺
	1. ��̳��˶�������ݣ���ͬ���̳��˶�������ݣ���������ʹ������ʱ���ͻ���������ԡ�
	2. ������̳��Զ�������ݼ̳������ݣ���ʵ����Ӧ������������������ֻ��Ҫһ�ݾͿ���
*/


//21 ��̬

//21.1 ��̬�Ļ�������

/*
��̬��C++���������������֮һ
��̬��Ϊ����
	��̬��̬: �������� �� ������������ھ�̬��̬�����ú�����
	��̬��̬: ��������麯��ʵ������ʱ��̬
��̬��̬�Ͷ�̬��̬����
	��̬��̬�ĺ�����ַ��� - ����׶�ȷ��������ַ
	��̬��̬�ĺ�����ַ��� - ���н׶�ȷ��������ַ
*/

/*
��̬��ָͬһ�������ڲ�ͬ�����ϱ��ֳ���ͬ����Ϊ������������Ҫ��ʽ��
	����ʱ��̬����̬��̬����ͨ���������أ�Function Overloading������������أ�Operator Overloading��ʵ�֡�
	����ʱ��̬����̬��̬����ͨ���̳кͷ�����д��Method Overriding��ʵ�֣������ڶ�̬�󶨣�Dynamic Binding����

	C++����ʱ��̬ͨ���̳к��麯��ʵ��

*/

//21.2 ��̬����һ-��������
/*
����������
�ֱ�������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
*/

//��ͨд��
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


//��̬ʵ��
class AbstractCalculator
{
public:
	virtual int getResult();
public:
	int inputNum1;
	int inputNum2;
};

//�ӷ�����
class AddCalculator:public AbstractCalculator
{
public:
	
	int getResult();

};
//��������
class SubCalculator:public AbstractCalculator
{
public:
	
	int getResult();

};

//�˷�����
class MulCalculator:public AbstractCalculator
{
public:
	
	int getResult();

};

//��������
class DivCalculator:public AbstractCalculator
{
public:
	int getResult();
};
//���Լ���������������
void test07();

//21.3 ���麯���ͳ�����

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


//21.4�������ʹ�������
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

