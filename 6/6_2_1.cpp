/*
数组的定义和使用
数组是具有一定顺序关系的若干相同类型变量的集合体，
组成数组的变量称为该数组的元素

数组的定义
类型说明符 数组名[常量表达式][常量表达式].......;
数组名的构成方法与一般变量名相同。

例：int a[10];
表示a为整形数组，有10个元素：a[0]....a[9]
例：int a[5][3];
表示a为整形二维数组，其中第一维有5个下标（0~4），
第二维有三个下标（0~2），数组的元素个数有15，
可以用于存放5行3列的整形数据表格。

数组元素的使用
1.数组必须先定义，后使用。
2.可以逐个引用数组元素
例如：
a[0] = a[5]+a[7]-a[2*3]
b[1][2] = a[2][3]/2;
*/

//例题6-1
#include <iostream>
using namespace std;
int main(){
    int a[10],b[10];
    for (int i = 0; i < 10; i++)
    {   
        a[i] = i*2-1;
        b[10-i-1] = a[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << "a[" << i << "]=" << a[i] << " ";
        cout << "b[" << i << "]=" << b[i] << endl;
    }
    return 0;
}