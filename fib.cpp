#include<iostream> 
using namespace std;
long fib_0(int n){//����Fibonacci���еĵ�n��(�ֶ���֮) O(n^2) 
	return (2>n) ? 
	1://��n<=1ʱ ֱ�ӷ��� �ݹ�� 
	fib_0(n-1) + fib_0(n-2);//�������ǰ������Ϊ���� 
}	
//����ݹ� 
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
//�Ʊ� 
long fib_2(int n){
	int f[n+1];
	int i;
	f[0] = 1;
	f[1] = 1;
	for(int i = 2; i<=n;i++)
	f[i] = f[i-1] + f[i-2];
	return f[n];
}
//���� 
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
