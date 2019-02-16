#include<iostream> 
using namespace std;
//����2��n���� O(n) = O(2^r)r Ϊ����ָ��n�ı���λ�� 
long power_2_A (int n){
	long pow = 1;//�ۻ�����ʼ��Ϊ2^0;
	while(0 < n--)//O(n)
		pow <<= 1;//����һλ 
	return pow;//�����ۻ�����ֵ 
} 

// ����2��n���� O(log n) = O(r) rΪ����n��λ�� 
inline long sqr(long a){ return a*a;}
long power_2_B(int n){
	if(0 == n) 
		return 1;//�ݹ��
		
	return (n & 1)? //�ж���ż���ֱ�ݹ� 
		sqr(power_2_B(n >> 1))<<1 : sqr(power_2_B(n >> 1));
	}
}

int main(){

	cout<<power_2 (8);
} 
