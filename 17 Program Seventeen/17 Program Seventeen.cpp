#include <iostream>
using namespace std;
void addTwo(int num);
int main()
{
	int myNum = 6;
	cout << "mynum = " << myNum << endl;
	addTwo(myNum);
	cout << "mynum = " << myNum << endl;
}
void addTwo(int num)
{
	num += 2;
	cout << "addTwo = " << num << endl;
}