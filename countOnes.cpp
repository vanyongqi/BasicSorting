#include<iostream> 
using namespace std;
//统计n的二进制展开有多少个1的总数：O（logn） 
int countOnes(unsigned int n){
	int one_Num = 0;//计数器复位 
	while(0 < n){//在缩减到0之前，反复循环 
		one_Num +=(n & 1);//检查最低位，若为1则加 1 
		n >>= 1;//右移一位 
	}
	return one_Num;//返回计数 
}
int main(){
	
	 int num =127;
	 cout<<countOnes(num);
	 	  
}
