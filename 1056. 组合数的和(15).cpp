
1056. 组合数的和(15)
时间限制
400 ms
内存限制
65536 kB
代码长度限制
8000 B
判题程序
Standard
作者
CHEN, Yue
给定N个非0的个位数字，用其中任意2个数字都可以组合成1个2位的数字。要求所有可能组合出来的2位数字的和。例如给定2、5、8，则可以组合出：25、28、52、58、82、85，它们的和为330。

输入格式：

输入在一行中先给出N（1<N<10），随后是N个不同的非0个位数字。数字间以空格分隔。

输出格式：

输出所有可能组合出来的2位数字的和。

输入样例：
3 2 8 5
输出样例：
330#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> v;
	int t,sum = 0;
	while(cin >> t) v.push_back(t);
	for(int i = 1; i < v.size() ; i++) 
		for(int j = 1; j < v.size() ; j++) 
			if(i != j ) sum += v[i]*10 + v[j]; 
	cout << sum;
return 0;
}

