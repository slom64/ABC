#include<iostream>
using namespace std;


int my_sum2(int a, int b, int c);


int main()
{
	cout << my_sum2(2, 4, 6);
	return 0;
}



int my_sum2(int a, int b, int c)
{
	return (a + b + c);
}