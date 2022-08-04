#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct  Stu {
	char name[10];
	int age;
};
/*测试qsort对int型数组进行排序*/
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void qsort_int() {
	int i = 0;
	int arr[7] = { 7,4,0,5,1,3,2 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	qsort(arr, length, width, cmp_int);
	for (i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
}
/*测试qsort对float型数组进行排序*/
int com_float(const void* e1, const void* e2) {
	return (int)(*(float*)e1 - *(float*)e2);

}
void qsort_float() {
	int i = 0;
	float arr[7] = { 7.0,4.0,0.0,5.0,1.0,3.5,2.9 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int width = sizeof(arr[0]);
	qsort(arr, length, width, com_float);
	for (i = 0; i < length; i++)
	{
		printf("%f ", arr[i]);
	}
}
/*使用qsort通过结构体的成员变量age进行排序*/
int com_struct_by_age(const void* e1,const void* e2) {
	return ((struct Stu*)e1)->name - ((struct Stu*)e2)->name;

}
void qsort_struct_by_age() {
	int i = 0;
	struct Stu stu[3] = {{"MeiMei",23},{"JiaJia",22},{"XueXue",21}};
	int length = sizeof(stu) / sizeof(stu[0]);
	int width = sizeof(stu[0]);
	qsort(stu, length, width, com_struct_by_age);
	
}
/*使用qsort通过结构体的成员变量name进行排序*/
int com_struct_by_name(const void* e1,const void* e2) {
	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
}
void qsort_struct_by_name() {
	int i = 0;
	struct Stu stu[3] = { {"MeiMei",23},{"JiaJia",22},{"XueXue",21} };
	int length = sizeof(stu) / sizeof(stu[0]);
	int width = sizeof(stu[0]);
	qsort(stu, length, width, com_struct_by_name);

}
//qsort()函数的使用
int main() {
	/*qsort_int();
	printf("\n");
	qsort_float();*/
	//qsort_struct_by_age();
	qsort_struct_by_name();
	return 0;
}




