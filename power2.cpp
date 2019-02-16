#include<iostream> 
using namespace std;
//计算2的n次幂 O(n) = O(2^r)r 为输入指数n的比特位数 
long power_2_A (int n){
	long pow = 1;//累积器初始化为2^0;
	while(0 < n--)//O(n)
		pow <<= 1;//左移一位 
	return pow;//返回累积器的值 
} 

// 计算2的n次幂 O(log n) = O(r) r为输入n的位数 
inline long sqr(long a){ return a*a;}
long power_2_B(int n){
	if(0 == n) 
		return 1;//递归基
		
	return (n & 1)? //判断奇偶来分别递归 
		sqr(power_2_B(n >> 1))<<1 : sqr(power_2_B(n >> 1));
	}
}

int main(){

	cout<<power_2 (8);
} 
