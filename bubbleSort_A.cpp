#include<iostream> 
using namespace std;
void bubbleSort_A(int a[],int n){//��������汾A ��O(n^2) 
	bool sorted = false;//���������־�����ȼٶ���δ���� 
	while(!sorted){//��δȷ��ȫ������֮ǰ�����н���ɨ�轻�� 
		sorted = true;//�ٶ��Ѿ����� 
		for(int i = 0; i< n; i++){//�����������м��a[0,n]�ڵ�����Ԫ�� 
		if(a[i-1]>a[i]){//һ����������� 
		swap(a[i-1],a[i]);//���� 
		sorted = false;//���������ܱ�֤����Ҫ��������־ 
			}
		}
		n--;// �����������г��� 
	}
}//������������sorted��Ϊ��־��������ǰ�Ƴ�������������n-1��ɨ�� 
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
	bubbleSort_A(array_1,size);
	for(int i = 0;i < size; i++)
		cout<<array_1[i];
}
