#include<iostream>
#include<fstream>
#include"test7.hpp"
#include <string>
using namespace std;

string url = "D://FileStore//another//test.txt";
int main() {
	//test1();

	//test2();
	cout << "--------------" << endl;

	test01();

	test02();

	return 0;
}

//�ı��ļ�
/*
��Ҫ����ͷ�ļ� < fstream >

�ļ����ͷ�Ϊ���֣�
	1. �ı��ļ� - �ļ����ı���ASCII����ʽ�洢�ڼ������
	2. �������ļ� - �ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������

�����ļ���������:
	1. ofstream��д����
	2. ifstream�� ������
	3. fstream �� ��д����

	�򿪷�ʽ			����
	ios::in			Ϊ���ļ������ļ�
	ios::out		Ϊд�ļ������ļ�
	ios::ate		��ʼλ�ã��ļ�β
	ios::app		׷�ӷ�ʽд�ļ�
	ios::trunc		����ļ�������ɾ�����ٴ���
	ios::binary		�����Ʒ�ʽ
*/

//д
/*
1.ͷ�ļ�
2.����������
3.���ļ�
4.д����
5.�ر��ļ�
*/
void test1() {
	fstream ofs;
	ofs.open("D://FileStore//another//test.txt", ios::out);
	cout << "-------д����-------" << endl;
	ofs << "����д��";
	cout << "-------д�����-------" << endl;
	ofs.close();
}

//��
//�����д�������������ڴ��ļ���ʱ����Ҫ����ļ��Ƿ����
//д���������ַ�ʽ
//

void test2() {
	ifstream ifs;
	ifs.open("D://FileStore//another//test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//��һ�ֶ�ȡ��ʽ�����տհ��ַ��ָ��ı���

	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout <<"��������" << buf << endl;
	//}

	//�ڶ��֣������ж�ȡ���ݣ�
	//����еĳ��ȳ����� buf �Ĵ�С��
	//getline() �ᶪ�����е����ಿ�ֲ����� false��
	
	// char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof((buf)))) {
	//	cout << "��������" << buf << endl;
	//}

	//������(�Ƽ�)
	//�� getline() �� string ����
	//ʹ���� string �������洢ÿ�����ݡ�
	//getline() ��ȡһ�����ݲ��洢�� string ���͵ı��� buf �У�ֱ���ļ�������
	
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//������
	// get() �������ַ���ȡ�ļ���ֱ�������ļ�ĩβ��EOF����
	// ÿ�ε��� get() �����ȡһ���ַ��������հ��ַ������з��ȣ���
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}


	//�ر��ļ�
	ifs.close();
	

}


//�������ļ�
//ָ��ios::binary


//д�ļ�
//����ԭ�ͣ�ostream& write(const *buffer,int len);
void test01()
{
	//1.ͷ�ļ�
	//2.�������������
	ofstream ofs("D://FileStore//another//test.txt",ios::out|ios::binary);

	//3.���ļ�
	Test1 p = { "����" , 18 };

	//4.д�ļ�
	ofs.write((const char *)&p, sizeof(p));

	//5.�ر��ļ�
	ofs.close();
}


//���ļ�
//�����Ʒ�ʽ���ļ���Ҫ���� ������ ���� ��Ա����read
//����ԭ�ͣ�istream& read(char *buffer,int len);

void test02()
{
	ifstream ifs(url, ios::in, ios::binary);
	if (!ifs.is_open()) {
		cout << "�ļ���ʧ��!" << endl;
	}

	Test1 p;
	ifs.read((char*)&p, sizeof(p));

	cout << "���ƣ�" << p.m_Name << "\t���䣺" << p.m_Age << endl;
}


