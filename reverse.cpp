#include<iostream> 
using namespace std;
//O(hi - lo + 1)
void reverse_0(int* a,int lo,int hi){
	if(lo < hi){
		swap(a[lo],a[hi]);
		reverse_0(a,lo+1,hi-1);
	}
}

//O(hi - lo + 1)
void reverse_1(int *a,int lo,int hi){
	next:
		if(lo < hi){
			swap(a[lo],a[hi]);
			lo++;hi--;
			goto next; 
		} 
} 

//O(hi - lo + 1)
void reverse_2(int *a,int lo,int hi){
	while(lo < hi)
		swap(a[lo++],a[hi--]);
}
void swap(int num_1,int num_2){
	/**ͬ���Ǵ�ֵ������������ԭֵ����ı�
	���ܻ�Խ�磬����������ֵ��С��ʱ��**/
	num_1 = num_1 + num_2;
	num_2 = num_1 - num_2;
	num_1 = num_1 - num_2; 
}
void swap_1(int num_1,int num_2){
	/* λ���� */
	num_1 = num_1 ^ num_2;
	num_2 = num_1 ^ num_2;
	num_1 = num_1 ^ num_2; 
} 
void swap_2(int num_1 ,int num_2){
	/* ����һ�ּٽ�����ֻ���ں����ڲ������˽�����
	������ִ����Ϻ󣬺���ջ֡���ͷţ�ԭ����ֵ��δ�ı䡣*/
	int tmp = num_1;
	num_1 = num_2;
	num_2 = tmp;
} 
void swap_3(int *x,int *y){
	/*����ָ���ֲ���һȱ�ݣ����̻���һ�£������Ըı�ԭֵ
    ˼·����ַ������ԭ���봫ֵ��˼·��ͬ��ֻ�Ǵ��������ǵ�ַ*/
    int tmp = *x;
    *x = *y;
    *y = *x;
}
int main(){
	int array_1[5] = {4,3,2,1,0};
	int size = sizeof(array_1)/sizeof(int);
	
	reverse_0(array_1, 0, size-1);
	for(int i = 0;i < size; i++)
		cout<<array_1[i];
	cout<<'\n';
	reverse_1(array_1, 0, size-1);
	for(int i = 0;i < size; i++)
		cout<<array_1[i];
	cout<<'\n';
	reverse_2(array_1, 0, size-1);
	for(int i = 0;i < size; i++)
		cout<<array_1[i];
}

