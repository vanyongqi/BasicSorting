#include<iostream> 
using namespace std;
void bubbleSort_A(int a[],int n){//起泡排序版本A ：O(n^2) 
	bool sorted = false;//整体排序标志，首先假定尚未排序 
	while(!sorted){//尚未确定全局排序之前，逐行进行扫描交换 
		sorted = true;//假定已经排序 
		for(int i = 0; i< n; i++){//自左向右逐行检查a[0,n]内的相邻元素 
		if(a[i-1]>a[i]){//一旦出现逆序对 
		swap(a[i-1],a[i]);//交换 
		sorted = false;//整体排序不能保证，需要清除排序标志 
			}
		}
		n--;// 缩短排序序列长度 
	}
}//借助布尔类型sorted作为标志，可以提前推出，而不蛮力做n-1趟扫描 
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
	bubbleSort_A(array_1,size);
	for(int i = 0;i < size; i++)
		cout<<array_1[i];
}
