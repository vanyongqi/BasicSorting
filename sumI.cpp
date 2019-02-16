#include<iostream> 
using namespace std;

//数组求和(递归版本) 
long sum_0(int a[],int n){
	if( 1 > n)//平凡情况，递归基 
		return 0;
	else
		return sum_0(a , n-1) + a[n-1];//递归项：拆分成 fun(n-1)+a[i] 
}//O(1)*递归深度 = O(1)*(n-1) = O(n)

//数组求和(迭代版本)
long sum_1(int a[], int n){
	int sum = 0;//初始化累加器 
	for(int i = 0; i < n; i++)//逐一遍历数组元素 
		sum+=a[i];//求和 
	return sum;//返回累加器 
} 
//数组求和(分而治之版本)
long sum_2(int a[], int lo,int hi){
	if(lo == hi)
		return a[lo];
	else{
		int mi = (lo + hi) >> 1;
		return sum_2(a,lo,mi)+sum_2(a,mi+1,hi); 
	} 
}
int main(){
	int a[5] = {4,3,2,1,0};
	int size = sizeof(a)/sizeof(int);
	cout<<sum_0(a,size);
	cout<<"\n";
	cout<<sum_1(a,size); 
	cout<<"\n";
	cout<<sum_2(a,0,size-1); 
} 
