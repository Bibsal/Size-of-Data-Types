# Size-of-Data-Types
C++ Program For My Project 


#include<iostream.h>
#include<conio.h>
class Int              
{
	static int i;
//	static char ab;    // This is just a comment
	int j;
//	char cd;           //Comment
};
class Char
{
	static char ab;
	char cd;
};
class Float
{
	static float a;
	float b;
};
class Double
{
	static double c;
	double d;
};

int Int::i;
char Char::ab;
float Float::a;
double Double::c;
int main()
{
	clrscr();
	cout<<"Size of char:"<<sizeof(Char)<<" byte"<<endl;
	cout<<"Size of int :"<<sizeof(Int)<<" byte"<<endl;
	cout<<"Size of float:"<<sizeof(Float)<<" byte"<<endl;
	cout<<"Size of double:"<<sizeof(Double)<<" byte"<<endl;
	getch();
	return 0;

}
