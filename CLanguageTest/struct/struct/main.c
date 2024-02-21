#include <stdio.h>

struct student{
    char name[10];
    int age;
    int id;
    char sex[2];
};
struct book{
    char name[20];
    int price;
    char id[30];
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct student st1 = {"zhangsan", 22, 20000, "男"};
    struct student *pst1 = &st1;
    printf("%s\n",st1.name);
    printf("%s\n",(*pst1).name);
    printf("%s\n",pst1->name);
    printf("Hello, World!\n");
    
    printf("     **     \n");
    printf("     **     \n");
    printf("************\n");
    printf("************\n");
    printf("    *  *    \n");
    printf("    *  *    \n");
    
    // switch
    printf("输入1～7:_\b");
    int a;
    scanf("%d",&a);
    switch (a){
        case 1+0://case 后面不能是变量
            printf("星期一");break;
        case 2:
            printf("星期二");break;
        case 3:
            printf("星期三");break;
        case 4:
            printf("星期四");break;
        case 5:
            printf("星期五");break;
        case 6:
            printf("星期六");break;
        case 7:
            printf("星期日");break;
        default:
            printf("error!");
    }
    return 0;
}
