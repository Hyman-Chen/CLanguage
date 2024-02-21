#include <stdio.h>
#include <time.h>
clock_t start,stop,start2,stop2;
double duration,duration2;
int MaxSubswqSum4(int [],int);
int PrintN1(int n){
    int i;
    for (i=1;i<=n;i++){
//        printf("%d\n",i);
    }
    return 0;
}

//
int PrintN2(int n){
    if (n)
    PrintN2(n-1);
//    printf("%d\n",n);
    return 0;
}
int main(int argc, const char * argv[]) {
//    // sizeof是操作符不是函数，sizeof在求变量的时候后面的括号可以省略。
//    printf("size of char =%d\n", sizeof(char));
//    printf("size of int =%d\n", sizeof(int));
//    printf("size of short int =%d\n", sizeof(short int));
//    printf("size of long int =%d\n", sizeof(long int));
//    printf("size of long long int =%d\n", sizeof(long long int));
//    printf("size of float =%d\n", sizeof(float));
//
//    int a = 4;
//    printf("size of 4 =%d\n", sizeof(4));
//    printf("size of a =%d\n", sizeof(a));
//    int arr[4];
//    printf("size of arr = %d\n",sizeof arr);
//    //计算数组内元素个数
//    printf("%d\n",sizeof(arr)/sizeof(int));
//    //!为取反操作符，从右向左计算。
//    printf("!4=%d\n",(!4));
//    // C语言常见关键字
//    // auto变量自动创建自动销毁
//    // register用法
//    register int num = 100; //建议放在寄存器中
//    // 数据可存在的位置：
//    //寄存器、更小、大量/频繁使用的数据
//    //高速缓存、几十MB
//    //内存、8～16GB
//    //硬盘、500G
//    //网盘、2T
//    // volatile C语言暂时不讲
//    //  注意！！！！！define、include不是关键字，而是预处理指令
//
//    // 1、static修饰局部变量
//    // 改变了局部变量的生存周期，本质上是改变了变量的存储类型
//    // 变量存储位置：栈区->静态区
//    // 2、static修饰全局变量
//    // 只能在自己所在的源文件内部使用
//    // 3、static修饰函数
//    // 使得函数只能在自己所在地源文件使用，不能在其他源文件内部使用
//    // static是将函数的外部链接属性变成了内部链接属性
//    /**
//            整数在内存中以补码方式存储，负数->反码->补码
//     **/
    double CLK_TCK =1;
//    printf("%lf\n",CLK_TCK);
//    start = clock();
////    PrintN1(100000);
//    stop = clock();
//    duration = ((double)(stop-start)) / CLK_TCK; // 一秒钟打多少下
//    printf("%f\n",duration);
//
    start2 = clock();
    PrintN2(100000);
    stop2 = clock();
    duration2 = ((double)(stop2-start2)) / CLK_TCK; // 一秒钟打多少下
    printf("%f\n",duration2);

    
//    if (a){
//        printf("zhen");
//    }
//    if (!a){
//        printf("jia");
//    }
//    printf("Hello, World!\n");
//    PrintN1(100000);

    
    return 0;
}
// 最大子列和
int MaxSubseqSum4(int A[], int N){
    int ThisSum, MaxSum;
    int i;
    ThisSum = MaxSum = A[0];
    for (i=0;i<N;i++){
        ThisSum += A[i];
        if (ThisSum > MaxSum)
            MaxSum = ThisSum;
        else if (ThisSum < 0)
            ThisSum = 0;
            
    }
    return MaxSum;
}



