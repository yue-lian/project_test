#include<iostream>
//#include "test4.h"
using namespace std;

//ȫ�ֳ���
const double PI = 3.14;

//ȫ�ֱ���
int i = 0;

class Circle
{
public:
	//����
	int m_r;//�뾶
	double calculateZC() {
		return 2 * PI * m_r;
	}//�����ܳ�


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
		cout << "����=" << m_name << endl << "ѧ��=" << m_id << endl;
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
		m_Name = "����";
		m_Car = "������";
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
	cout << "�����޲ι��캯��" << endl;
}

MyClass::MyClass(int n)
{

	cout << "�����вι��캯��\tn=" << n << endl;
}

MyClass::MyClass(const MyClass& p)
{
	age = p.age;
	cout << "���ǿ������캯��\tage=" << age << endl;
}

MyClass::~MyClass()
{
	cout << "������������" << endl;

}

class Test
{
public:
	Test() {
		cout << "�����޲ι��캯��" << endl;
	}

	Test(int n) {
		age = n;
		cout << "�����вι��캯��\tn=" << age << endl;

	}

	Test(const Test& t) {
		age = t.age;
		cout << "���ǿ������캯��\tage=" << age << endl;

	}

	//~Test() {
	//	cout << "������������" << endl;
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

//�����޲ι��캯��
void test01() {
	Test t;
}
//�����вι��캯��
void test02() {
	//1.���ŷ�
	Test t1(24);

	//2.��ʾ��
	Test t2 = Test(25);
	Test t3 = Test(t2);

	//3.��ʽת����
	Test t4 = 26;
	Test t5 = t4;

}
//�鿴���������ĵ���ʱ��
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
	cout << "�����޲ι���" << endl;
	testData2 = nullptr; // ��ʼ��ָ��
}

Test1::Test1(int testData1)
{
	cout << "�����вι���" << endl;
}

Test1::Test1(const Test1& p)
{
	cout << "���ǿ�������" << endl;
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
	cout << "������������" << endl;
	delete testData2;//�ͷŶ�̬������ڴ�
}


class Test2
{
public:

	int m_A;
	int m_B;
	int m_C;
	//Test3 t3;

	Test2() { cout << "Test2���޲ι��죡" << endl; };
	//��ͳ��ʽ��ʼ��
	/*
	Test2(int a, int b, int c) {
	 m_A = a;
	 m_B = b;
	 m_C = c;
	}
	*/

	//��ʼ���б���ʽ��ʼ��
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
	Test3() { cout << "Test3���޲ι��죡" << endl; };
	Test3(int a) :t_A(a) {}
	int t_A;
};

class Test4
{
public:
	static void printTest4() {
		cout << "t4A=" << t4A << endl;
		//cout << "t4B=" << t4B;//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
		
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
	//��̬��Ա���������ַ��ʷ�ʽ

	Test4 t4;




	//1.�������
	t4.t4A = 410;
	t4.t4B = 420;
	cout << "t4A=" << t4.t4A << endl;
	cout << "t4B=" << t4.t4B << endl;

	t4.setT4C(430);
	cout << "t4C=" << t4.getT4C() << endl;

	//2.��������

	cout <<"��������t4C��" << Test4::getT4C() << endl;
}

class Test5
{
public:
	Test5(int age) {
		this->age = age;
	}

	Test5& Test5AddAge(Test5 t5) {
		this->age += t5.age;
		//���ض�����
		return *this;
	}
	int age;
};

static void test05() {
	Test5 t5(10);
	Test5 t51(11);
	t51.Test5AddAge(t5).Test5AddAge(t5).Test5AddAge(t5).Test5AddAge(t5);
	cout << "t51������Ϊ��" << t51.age << endl;
}

class Test6
{
public:
	
	Test6() {};

	Test6(int n) {
		mAge = n;
	}

	void showClassName() {
		cout << "�ҵ������ǲ���6" << endl;
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
		cout << "����MyFunc����" << endl;
	}

	int m_a;
	mutable int m_b;//���޸ĵ�
};

static void test07() {
	const Test7 t7;//������
	t7.showTest7();
	cout <<"m_b=" << t7.m_b << endl;
	t7.m_b = 101;
	cout << "m_b=" << t7.m_b << endl;
	t7.MyFunc();
}

class Test8
{
	//���߱����� goodGayȫ�ֺ��� ��Test8����Ԫ�����Է���˽������
	friend void goodGay(Test8* t8);
public:
	Test8() {
		this->m_BedRoom="����";
		this->m_SittingRoom="����";
	};

public:
	string m_SittingRoom;//����
private:
	string m_BedRoom;//����
};

void goodGay(Test8* t8) {
	cout << "�û������ڷ��ʣ� " << t8->m_SittingRoom << endl;
	cout << "�û������ڷ��ʣ� " << t8->m_BedRoom << endl;
}

static void test08() {
	Test8 t;
	goodGay(&t);
}

//���� ������Ԫ
/*
1.���屻���ʵ���
2.������Ԫ��
3.������Ԫ��
4.ʵ����Ԫ��Ĺ��캯���ͳ�Ա����
5.����
*/
class Test9
{
public:
	string PublicInformation;

private:
	string PrivateInformation;

};




int main() {
	//15.1 ��װ������һ����������ʱ�����Ժ���Ϊд��һ�𣬱�������
	//1 ���һ��Բ�࣬��Բ���ܳ�
	// c1����һ�������Բ
	Circle c1;
	c1.m_r = 10; //��Բ����İ뾶 ���и�ֵ����
	//2 * pi * 10 = = 62.8
	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC() << endl;


	//2 ���һ��ѧ���࣬������������ѧ�ţ����Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��
	Student stu1;
	stu1.m_id = 3;
	stu1.m_name = "����";
	stu1.showInfo();

	stu1.setId(4);
	stu1.setName("����");
	stu1.showInfo();

	//15.2 ��װ����������������ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
	//(1)public��protected��private
	//3 ��Person���Ͳ�ͬ����Ȩ��
	Person person;
	//cout << "����=" << person.m_Name << endl;
	person.func();
	cout << "����=" << person.m_Name << endl;

	//15.3 struct��class������
	/*
	* ��C++�� struct��classΨһ����������� Ĭ�ϵķ���Ȩ�޲�ͬ
	* struct Ĭ��Ȩ��Ϊ����
	* class Ĭ��Ȩ��Ϊ˽��
	*/

	//4 ͨ��ExampleClass��ExampleStruct����
	ExampleClass ec;
	//cout << ec.a << endl;
	ExampleStruct es;
	cout << "es.b=" << es.b << endl;

	//15.4 ��Ա��������˽��
	/*
	* ��Ա���ԵĶ��嶼����˽��pravate���涨�壬��publicͨ��get��set����ʵ�����ݵĶ�ȡ��¼�롣 
	*/


	//16 ����ĳ�ʼ��������
	//C++�е����������Դ�����ÿ������Ҳ�����г�ʼ�����Լ� ��������ǰ���������ݵ�����

	//16.1 ���캯������������
	/*
	* ���캯�������������ᱻ�������Զ����ã���ɶ����ʼ��������������
	* �������ṩ�Ĺ��캯�������������ǿ�ʵ�֡�
	* 
	* �����캯������Ҫ�������ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ�����캯���ɱ������Զ����ã������ֶ����á�
	* �﷨������(){}
	1. ���캯����û�з���ֵҲ��дvoid
	2. ����������������ͬ
	3. ���캯�������в�������˿��Է�������
	4. �����ڵ��ö���ʱ����Զ����ù��죬�����ֶ�����,����ֻ�����һ��

	* ��������������Ҫ�������ڶ�������ǰϵͳ�Զ����ã�ִ��һЩ����������
	* �﷨��~����(){}
	1. ����������û�з���ֵҲ��дvoid
	2. ����������������ͬ,������ǰ���Ϸ��� ~
	3. ���������������в�������˲����Է�������
	4. �����ڶ�������ǰ���Զ����������������ֶ�����,����ֻ�����һ��
	*/

	//16.1.1 ���캯������
	//��1�����ղ������вι�����޲ι��죻
	//��2���������ͣ���ͨ����Ϳ�������

	//cout << "-----�޲ι���-----" <<endl;
	//MyClass myClass;

	//cout << "-----�вι���-----" << endl;
	//MyClass::MyClass(1);

	//cout << "-----��������-----" << endl;
	//const int& p = 18;
	//MyClass::MyClass(p);

	//cout << "-----��������-----" << endl;
	//myClass.~MyClass();


	//16.1.2 ���캯���ĵ���

	//�޲ε���
	//test01();

	//�вε���
	//test02();

	//16.2 �������캯������ʱ��
	/*
	* ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
	* ֵ���ݵķ�ʽ������������ֵ
	* ��ֵ��ʽ���ؾֲ�����
	*/

	//test03();

	//16.3 �����������ù���
	/*
	* ϵͳĬ���ṩ����������Ĭ�Ϲ��캯����Ĭ������������Ĭ�Ͽ������캯����
	* ����û������вι��캯����c++�����ṩĬ���޲ι��죬���ǻ��ṩĬ�Ͽ�������
	* ����û����忽�����캯����c++�������ṩ�������캯��
	*/

	//16.4 �����ǳ����
	/*
	* ǳ�������򵥵ĸ�ֵ��������
	* ������ڶ�����������ռ䣬���п�������
	*/

	//Test1 t0;
	//Test1 t1(12);
	//Test1 t2(t1);

	//16.5 ��ʼ���б�
	/*
	* C++�ṩ�˳�ʼ���б��﷨��������ʼ������
	* �﷨�� ���캯��()������1(ֵ1),����2��ֵ2��... {}
	*/

	Test2 t2(1, 2, 3);
	t2.PrintTest2();
	cout << "-------16.5-----------" << endl;

	//16.6 �������Ϊ���Ա
	/*
	* �����г�Ա�����������ʱ�����ǳƸó�ԱΪ �����Ա
	* �����˳���� ���ȵ��ö����Ա�Ĺ��죬�ٵ��ñ��๹��
	* ����˳���빹���෴
	*/


	Test2 t3(1, 2, 3);
	t3.PrintTest2();

	cout << "------16.6-------" << endl;


	//16.7 ��̬��Ա
	/*
	��̬��Ա�����ڳ�Ա�����ͳ�Ա����ǰ���Ϲؼ���static����Ϊ��̬��Ա
	��1����̬��Ա��Ϊ��
		a.��̬��Ա����
			1.���ж�����ͬһ������
			2.�ڱ���׶η����ڴ�
			3.���������������ʼ��
		b.��̬��Ա����
			1.���ж�����ͬһ������
			2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
	*/
	test04();
	cout << "------16.7-------" << endl;

	//17 C++����ģ�ͺ�thisָ��
	//17.1 ��Ա�����ͳ�Ա�����ֿ��洢
	
	/*
	* ֻ�зǾ�̬��Ա������ռ�ö���ռ�
	* ��̬��Ա��������̬��Ա��������������ռ�ö���ռ�
	*/

	//
	cout << sizeof(Test4) << endl;

	cout << "------17.1END-------" << endl;

	//17.2 thisָ��
	//���βκͳ�Ա����ͬ��������this����
	//����ķǾ�̬��Ա�����з��ض�����������return *this

	test05();

	cout << "------17.2END-------" << endl;

	//17.3 ��ָ����ʳ�Ա����
	//C++�п�ָ��Ҳ�ǿ��Ե��ó�Ա�����ģ�����ҲҪע����û���õ�thisָ��
	//����õ�thisָ�룬��Ҫ�����жϱ�֤����Ľ�׳��
	test06();
	cout << "------17.3END-------" << endl;

	//17.4 const���γ�Ա����
	/*
	��������
		��Ա�������const�����ǳ�Ϊ�������Ϊ������
		�������ڲ������޸ĳ�Ա����
		��Ա��������ʱ�ӹؼ���mutable���ڳ���������Ȼ�����޸�
	������
		��������ǰ��const�Ƹö���Ϊ������
		������ֻ�ܵ��ó�����
	*/

	test07();
	cout << "------17.3END-------" << endl;

	//18 ��Ԫ
	//18.1 ȫ�ֺ�������Ԫ

	test08();
	cout << "------18.1END-------" << endl;

	//18.2 ������Ԫ

	
	//18.3 ��Ա��������Ԫ



	return 0;

}