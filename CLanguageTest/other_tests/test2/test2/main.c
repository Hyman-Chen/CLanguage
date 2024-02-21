# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>

void add(int x, int y) {
    int z = x;
    x = y;
    y = z;
}

/* 共用体定义：
struct 结构体名称{
*            变量类型 变量名 ：给变量分配的内存大小；
*            ......
*
*}
* 共用体的赋值：
* struct gyt{
* int a：8；
* } wy，*pwy；
* pwy = &wy；
* wy.a = 3；
* 取值：
* pwy -> a
*/
int main() {
    int g;
    struct zj {
        int a : 8;
        unsigned int b: 2;
        int c : 6;
    } wy,*pwy;
    pwy = &wy;
    wy.a = 2;
    wy.b = 3;

    printf("%d\n",wy.a);
    printf("%d\n",wy.b);
    printf("%d\n",pwy->b);
    printf("%d\n",pwy->a);
    scanf("%d", &g);
    return 0;

    
}
