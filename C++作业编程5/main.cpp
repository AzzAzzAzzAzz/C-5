#include<iostream>
#include"student.h"
using namespace std;

int main()
{
	student a("����", 88);
	student b(a);
	a.display();
	b.display();
	return 0;
}