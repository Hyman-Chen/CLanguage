#include <stdio.h>

int main(int argc, const char * argv[]) {
    int ah = 0;
    int *pah;
    pah = &ah;
    *pah = 10; //
    printf("ah= %d\n",ah);
    
    int a = 0;
    int *pa = &a;
    printf("%d\n",a);
    *pa = 10;
    printf("%d\n",a);
    // 指针的大小和电脑的位数有关，
    printf("%d\n",sizeof(char *));
    printf("%d\n",sizeof(int *));
    printf("%d\n",sizeof(short int *));
    printf("%d\n",sizeof(long long int *));
    printf("%d\n",sizeof(long int *));
    printf("%d\n",sizeof(float *));
    
    return 0;
}
