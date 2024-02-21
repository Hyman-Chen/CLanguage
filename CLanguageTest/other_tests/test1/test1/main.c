# define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
# include<string.h>

void add(int x, int y) {
    int z = x;
    x = y;
    y = z;
}

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
    printf("%d",123);
    //printf("%d\n",sizeof(int));
    return 0;

    
}

