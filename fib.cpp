#include<iostream> 
using namespace std;
long fib_0(int n){//计算Fibonacci数列的第n项(分而治之) O(n^2) 
	return (2>n) ? 
	1://当n<=1时 直接返回 递归基 
	fib_0(n-1) + fib_0(n-2);//否则计算前两项，其和为正解 
}	
//记忆递归 
int lookup[100] = {0};
long fib_1(int n){

	if ( 0==lookup[n])	{
		if(n<=1) 
		
			lookup[n] = 1;
		else
			lookup[n] = fib_1(n-1)+fib_1(n-2);
	}	
	return lookup[n];
}
//制表 
long fib_2(int n){
	int f[n+1];
	int i;
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i<=n;i++)
	f[i] = f[i-1] + f[i-2];
	return f[n];
}
//迭代 
long fib_3(int n){
	long f = 1,g = 1;
	while(0 < n--){
		g += f;
		f =g-f;
	}
	return f;
}
int main(){
	cout<< fib_0(5)<<endl;
	cout<< fib_1(5)<<endl;
	cout<< fib_2(5)<<endl;
	cout<< fib_3(5)<<endl;
	return 0;
}
