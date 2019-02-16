#include<iostream> 
using namespace std;

//�������(�ݹ�汾) 
long sum_0(int a[],int n){
	if( 1 > n)//ƽ��������ݹ�� 
		return 0;
	else
		return sum_0(a , n-1) + a[n-1];//�ݹ����ֳ� fun(n-1)+a[i] 
}//O(1)*�ݹ���� = O(1)*(n-1) = O(n)

//�������(�����汾)
long sum_1(int a[], int n){
	int sum = 0;//��ʼ���ۼ��� 
	for(int i = 0; i < n; i++)//��һ��������Ԫ�� 
		sum+=a[i];//��� 
	return sum;//�����ۼ��� 
} 
//�������(�ֶ���֮�汾)
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
