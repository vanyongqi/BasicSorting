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
	/**同样是传值，函数结束后，原值不会改变
	可能会越界，故适用于数值较小的时候**/
	num_1 = num_1 + num_2;
	num_2 = num_1 - num_2;
	num_1 = num_1 - num_2; 
}
void swap_1(int num_1,int num_2){
	/* 位运算 */
	num_1 = num_1 ^ num_2;
	num_2 = num_1 ^ num_2;
	num_1 = num_1 ^ num_2; 
} 
void swap_2(int num_1 ,int num_2){
	/* 这是一种假交换，只是在函数内部进行了交换，
	当函数执行完毕后，函数栈帧被释放，原来的值并未改变。*/
	int tmp = num_1;
	num_1 = num_2;
	num_2 = tmp;
} 
void swap_3(int *x,int *y){
	/*利用指针弥补这一缺陷，过程基本一致，但可以改变原值
    思路：传址，过程原理与传值的思路相同，只是传过来的是地址*/
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

