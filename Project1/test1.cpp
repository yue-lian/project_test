//#include<iostream>
//#include "test.h"
//using namespace std;
////�ṹ��
//struct project {
//	//��Ա�б�
//	string pname = "testName";
//	string ptime = "testTime";
//	bool pstate = false;
//};
//struct totalProject {
//	//��Ա�б�
//	int id = 1; //��Ŀ���
//	string name = "����Ŀ����1"; //��Ŀ����
//	int age; //��Ŀ����
//	project proj;//�ӽṹ��
//
//};
//
////ֵ����
//void printTotalProject(totalProject tproj) {
//	tproj.age = 24;
//	cout << "�Ӻ�������Ŀ1���ƣ�" << tproj.name << "\t����Ŀ1���䣺" << tproj.age << "\t\t��Ŀ1״̬��" << tproj.proj
//		.pstate<< endl;
//}
//
////��ַ����
//void printTotalProject2(totalProject *tproj) {
//	tproj->age = 22;
//	cout << "�Ӻ�������Ŀ2���ƣ�" << tproj->name << "\t����Ŀ2���䣺" << tproj->age << "\t\t��Ŀ2״̬��" << tproj->proj
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
//	cout <<"short������ռ�ڴ�ռ䣺" << sizeof(short) << endl;
//
//	float f1 = 3.14f;
//	double d1 = 3.14;
//	/*
//	* float - 4
//	* double - 8
//	*/
//	cout << "float sizeof =" << sizeof(f1) << endl;
//
//	//�ַ�����
//	char ch = 'a';
//	cout << ch << endl;
//	cout << (int)ch <<endl;
//	cout << "helloworld\b\b\b\b\b\b\b\b\b\b" << endl;
//
//	//���ݵ�����(int��double��char��string��bool)
//	//cout << "������a��ֵ��";
//	//cin >> a;
//	//cout << a << endl;
//
//	//�������̽ṹ
//	//1.˳��
//
//	//2.ѡ��
//	// 
//	//2.1 if
//	if (a > 10) {
//		cout << "a��С��10" << endl;
//	}
//	else if (a > 5)
//	{
//		cout << "a��С��5" << endl;
//	}
//	else
//	{
//		cout << "aС�ڵ���5" << endl;
//	}
//
//	//2.2  ��Ŀ�����
//	int c = 0;
//	c = a <= 5 ? a : 0;
//	cout << "c = " << c << endl;
//
//	//2.3 switch���
//	//switch����б��ʽ����ֻ�������ͻ����ַ���
//	//switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����
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
//	//3.ѭ��
//	//cout << "������a��ֵ��";
//	//cin >> a;
//	//3.1 whileѭ��
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
//	//4.����
//	//4.1 һά����
//
//	//int arr0[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//for (int i = 0; i < size(arr0); i++)
//	//{
//	//	cout << arr0[i] <<"\t";
//	//}
//	//cout << arr0 << endl;
//
//	//4.2 ��������;
//	//1. ����ͳ�������������ڴ��еĳ���
//	//2. ���Ի�ȡ�������ڴ��е��׵�ַ
//
//	
//	/*cout << "\n����������ռ�ڴ�ռ�Ϊ�� " << sizeof(arr0) << endl;
//	cout << "ÿ��Ԫ����ռ�ڴ�ռ�Ϊ�� " << sizeof(arr0[0]) << endl;
//	cout << "�����Ԫ�ظ���Ϊ�� " << sizeof(arr0) / sizeof(arr0[0]) << endl;
//	cout << "�����׵�ַΪ�� " << (int)arr0 << endl;
//	cout << "�����е�һ��Ԫ�ص�ַΪ�� " << (int)&arr0[0] << endl;
//	cout << "�����еڶ���Ԫ�ص�ַΪ�� " << (int)&arr0[1] << endl;
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
//	//4.3��ά����
//	//��ά����������
//	int arr[2][3] =
//	{
//	{1,2,3},
//	{4,5,6}
//	};
//
//	//cout << "��ά�����С�� " << sizeof(arr) << endl;
//	//cout << "��ά����һ�д�С�� " << sizeof(arr[0]) << endl;
//	//cout << "��ά����Ԫ�ش�С�� " << sizeof(arr[0][0]) << endl;
//	//cout << "��ά���������� " << sizeof(arr) / sizeof(arr[0]) << endl;
//	//cout << "��ά���������� " << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
//	////��ַ
//	//cout << "��ά�����׵�ַ��" << arr << endl;
//	//cout << "��ά�����һ�е�ַ��" << arr[0] << endl;
//	//cout << "��ά����ڶ��е�ַ��" << arr[1] << endl;
//	//cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
//	//cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr[0][1] << endl;
//
//	//5.����
//	//��������������Σ�����ֻ����һ��
//
//	//6.ָ��
//	/*
//	* �ڴ����Ǵ�0��ʼ��¼�ģ�һ����ʮ���������ֱ�ʾ
//	* ��������ָ����������ַ
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
//	//const����ָ��
//	/*
//	* const���ε���ָ�룬ָ��ָ����Ըģ�ָ��ָ���ֵ�����Ը���
//	* const���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
//	* const������ָ�������γ���
//	*/
//	const int* p1 = &t1;
//	//const�޶�����ָ��
//	p1 = &t;
//
//	int* const p2 = &t2;
//	//const�޶����ǳ���
//	*p2 = 20;
//
//	//���޶�ָ��Ҳ�޶�����
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
//	//7.ָ��+����
//	int arr0[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ָ�������ָ��
//	int *p = arr0;
//	cout << "arr0�ĵ�һ��Ԫ�أ�" << arr0[0] << endl;
//	cout << "ָ��p���ʵĵ�һ��Ԫ�أ�" << p << endl;
//	cout << "ͨ�������ַ���ʵĵ�һ��Ԫ�أ�" << *arr0 << endl;
//
//	//8.ָ��+����
//	//����ָ�������������������޸�ʵ�ε�ֵ
//
//	a = 1;
//	int b = 2;
//	swap1(a, b);
//	cout << "a = " << a << "\tb= " << b << endl;
//	swap2(&a, &b);
//	cout << "a = " << a << "\tb= " << b << endl;
//
//	//9.ָ�롢���顢����
//	/*
//	* eg.��װһ������������ð������ʵ�ֶ������������������
//	* �������飺int arr[10] = { 4,3,6,9,1,2,10,8,7,5 }
//	*/
//	int arr3[10] = { 4,3,6,9,1,2,10,8,7,5 };
//	int n = sizeof(arr3) / sizeof(int);
//	BubbleSort(n, arr3);
//	PrintArray(n, arr3);
//	cout << "\n";
//
//	//10.�ṹ��
//	/*
//	�ṹ�������û��Զ�����������ͣ������û��洢��ͬ����������
//	struct �ṹ���� { �ṹ���Ա�б� }��
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
//	cout << "��Ŀ1������= " << proj1.pname << endl;
//	cout << "��Ŀ1������= " << proj1.ptime << endl;
//	cout << "��Ŀ1��״̬= " << proj1.pstate << endl;
//
//	//10.1 �ṹ������
//	project arrp[3] = {
//		{"��Ŀ1","2024/12/27",false},
//		{"��Ŀ2","2024/12/20",false},
//		{"��Ŀ3","2024/12/15",true }
//	};
//	for (int i = 0; i < 3; i++)
//	{
//		cout <<"��Ŀ����=" << arrp[i].pname << "\t\t��Ŀ����=" << arrp[i].ptime << "\t\t��Ŀ״̬=" << arrp[i].pstate << endl;
//
//	}
//
//	//10.2 �ṹ��ָ��
//	/*
//	ͨ��ָ����ʽṹ���Ա
//	���ò�����'->'����ͨ���ṹ����ʽṹ������
//	*/
//	struct project  * pp = &proj1;
//	cout << "pp->pname=" << pp->pname << endl;
//
//	//10.3 �ṹ����Ƕ��һ���ӽṹ�壨��20�У�
//
//	//10.4 �ṹ������������
//	/*
//	* ���ṹ����Ϊ���������д���
//	* ���ݷ�ʽ������ֵ���ݺ͵�ַ����
//	*/
//	totalProject tproj = { 2,"zxmmc",10,proj1 };
//	//ֵ����;
//	printTotalProject(tproj);
//	cout << "�Ӻ�������Ŀ1���ƣ�" << tproj.name << "\t����Ŀ1���䣺" << tproj.age << "\t\t��Ŀ1״̬��" << tproj.proj
//		.pstate << endl;
//
//	//��ַ����
//	printTotalProject2(&tproj);
//	cout << "�Ӻ�������Ŀ2���ƣ�" << tproj.name << "\t����Ŀ2���䣺" << tproj.age << "\t\t��Ŀ2״̬��" << tproj.proj
//		.pstate << endl;
//
//
//
//	return 0;
//}
//
