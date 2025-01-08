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

//文本文件
/*
需要包含头文件 < fstream >

文件类型分为两种：
	1. 文本文件 - 文件以文本的ASCII码形式存储在计算机中
	2. 二进制文件 - 文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们

操作文件的三大类:
	1. ofstream：写操作
	2. ifstream： 读操作
	3. fstream ： 读写操作

	打开方式			解释
	ios::in			为读文件而打开文件
	ios::out		为写文件而打开文件
	ios::ate		初始位置：文件尾
	ios::app		追加方式写文件
	ios::trunc		如果文件存在先删除，再创建
	ios::binary		二进制方式
*/

//写
/*
1.头文件
2.创建流对象
3.打开文件
4.写数据
5.关闭文件
*/
void test1() {
	fstream ofs;
	ofs.open("D://FileStore//another//test.txt", ios::out);
	cout << "-------写入中-------" << endl;
	ofs << "测试写入";
	cout << "-------写入完成-------" << endl;
	ofs.close();
}

//读
//相对于写操作，读操作在打卡文件的时候需要检查文件是否存在
//写数据有四种方式
//

void test2() {
	ifstream ifs;
	ifs.open("D://FileStore//another//test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//第一种读取方式（按照空白字符分隔文本）

	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout <<"输出结果：" << buf << endl;
	//}

	//第二种（按照行读取数据）
	//如果行的长度超过了 buf 的大小，
	//getline() 会丢弃该行的其余部分并返回 false。
	
	// char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof((buf)))) {
	//	cout << "输出结果：" << buf << endl;
	//}

	//第三种(推荐)
	//用 getline() 和 string 类型
	//使用了 string 类型来存储每行数据。
	//getline() 读取一行数据并存储到 string 类型的变量 buf 中，直到文件结束。
	
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//第四种
	// get() 函数逐字符读取文件，直到遇到文件末尾（EOF）。
	// 每次调用 get() 都会读取一个字符（包括空白字符、换行符等）。
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}


	//关闭文件
	ifs.close();
	

}


//二进制文件
//指定ios::binary


//写文件
//函数原型：ostream& write(const *buffer,int len);
void test01()
{
	//1.头文件
	//2.创建输出流对象
	ofstream ofs("D://FileStore//another//test.txt",ios::out|ios::binary);

	//3.打开文件
	Test1 p = { "张三" , 18 };

	//4.写文件
	ofs.write((const char *)&p, sizeof(p));

	//5.关闭文件
	ofs.close();
}


//读文件
//二进制方式读文件主要利用 流对象 调用 成员函数read
//函数原型：istream& read(char *buffer,int len);

void test02()
{
	ifstream ifs(url, ios::in, ios::binary);
	if (!ifs.is_open()) {
		cout << "文件打开失败!" << endl;
	}

	Test1 p;
	ifs.read((char*)&p, sizeof(p));

	cout << "名称：" << p.m_Name << "\t年龄：" << p.m_Age << endl;
}


