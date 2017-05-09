#ifndef _OUTPUTFILE_H
#define _OUTPUTFILE_H
#include<vector>
#include<string>
#include "Car.h"
#include "tinystr.h"
#include "tinyxml.h"

class OutputFile{  // 将运行结果输出至xml文件中
public:
	OutputFile(vector<Car*> carSet, vector<Customer*> rejectCustomer, vector<Customer*> dynamicCustomer, string fileName, Customer depot, float result, float extra = 0.0f);   // 构造函数
	~OutputFile(){};           // 析构函数
	void exportData();         // 主函数
private:
	vector<Car*> carSet;
	vector<Customer*> rejectCustomer;
	vector<Customer*> dynamicCustomer;
	string fileName;
	Customer depot;
	float result;
	float extra;
};

#endif
