#include<iostream> 
using namespace std;
//ͳ��n�Ķ�����չ���ж��ٸ�1��������O��logn�� 
int countOnes(unsigned int n){
	int one_Num = 0;//��������λ 
	while(0 < n){//��������0֮ǰ������ѭ�� 
		one_Num +=(n & 1);//������λ����Ϊ1��� 1 
		n >>= 1;//����һλ 
	}
	return one_Num;//���ؼ��� 
}
int main(){
	
	 int num =127;
	 cout<<countOnes(num);
	 	  
}
