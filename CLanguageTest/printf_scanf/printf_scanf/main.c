#include <stdio.h>

int main(int argc, const char * argv[]) {
//    // scanf函数
////    int a,b,c;
////    printf("input a,b,c:\n");
////    scanf("input a,b,c%d,%d,  %d",&a,&b,&c);// 若%d之间没有空格或者逗号，则空格、回车、tab都能作为输入时的分隔符
////    //若%d之间有空格或逗号，则需要严格按照空格或逗号输入数据，
////    printf("a = %d,\nb = %d,\nc = %d\n",a,b,c);
////    int cc;
////    char ch;
////    scanf("%d%c\n",&cc,&ch);
////    printf("cc = %d,ch = %c\n",cc,ch);
//    double f;
//    scanf("%lf",&f);
//    printf("%f\n",f);
    // gets()和puts()的用法
    char ch[] = "abc\0e\n",c1[]={'a'},c2[3];
    puts(ch);
    gets(c2);
    puts(c2);
    puts(ch);
    
    
    
    // 文件的读写
    fopen("/Users/hyman/Desktop/hello.txt","w");
    
    
    return 0;
}
