#include <stdio.h>
#include <stdlib.h>

typedef struct LNode *List;
struct LNode{
    int data;
    struct LNode *next;
};

void Add(List PtrL, int item){
    List R, P = PtrL;
    while (P -> next !=NULL)
        P = P -> next;
    R = (List)malloc(sizeof(struct LNode));
    P -> next =R;
    R -> data = item;
    R -> next = NULL;
    int t = item;
    if (t != 0){
        t--;
        Add(PtrL, t);
    }
    printf("%p\n",R);
    printf("%p\n",&R);
}
void Print(List S){
    while(S){
        printf("-->%d\n",S->data);
        S = S->next;
    }
  
}
int main(int argc, const char * argv[]) {
    struct LNode N1;
    List L1 = &N1;
    struct LNode N2;
    List L2 = &N2;

    N1.data=1;
    N1.next = L2;
    N2.data = 2;
    N2.next = NULL;
    List S = L1;
    Print(S);
//    Add(S, 3);
    Add(S, 5);
    Print(S);

    return 0;
}
