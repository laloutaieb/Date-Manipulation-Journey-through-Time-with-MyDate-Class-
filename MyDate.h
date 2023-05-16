#pragma once 


class MyDate
{
private:
	int jour;
	int moi;
	int année;
public:
	MyDate(int a= 1 , int b= 1, int c= 1920); // constructor classic 
	MyDate(const MyDate& a); // constructor copy 
	void setDate(int a, int b, int c); 
	void print(); 
	MyDate operator=(const MyDate& a);
	MyDate operator++(); // MyDate operator++(const MyDate& a); ne marche avec deux + : ++ 
	//il existe de operateur ++ pas compris la difference
	MyDate operator>(MyDate a); 
	MyDate operator<(MyDate b); 
	MyDate operator==(MyDate b);
};



/*
i++ > affecter > incrementer 
++i > incrementer > affecter 

incrementer = augmenter 
i = 1;
j = i++;
//i = 2 et j = 1

i = 1;
j = ++i;
//i = 2 et j = 2

*/