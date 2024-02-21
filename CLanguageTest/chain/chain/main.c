#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 定义节点结构
typedef struct Nodename{
    int data;
    struct Nodename *next;
} Node;

int main(int argc, const char * argv[]) {
    // 头接法创建链表
    
    // 创建头节点
    Node headNode;
    Node *head = &headNode;
    head -> data = 0;
    head -> next = NULL;
    
    // 此循环用于对var的输入，当输入-1时停止输入
    while (true){
        int var;
        printf("请输入数据：");
        scanf("%d", &var);
        
        // 创建新节点并给新节点分配内存
        Node * pnewNode = malloc(sizeof(Node));
        pnewNode->data = 0;
        pnewNode->next = NULL;
        
        if (var == -1)
            break;
        /* 先将数据存入新节点，再将头节点的next的地址存入新节点的next，最后将新节点的指针存入头节点的next中，后面两者顺序不能颠倒。*/
        pnewNode -> data = var;
        pnewNode->next = head -> next;
        head -> next = pnewNode;
        
    }
    // 此处p用于遍历链表
    Node*p;
    // 初始化p为链表的头，p代表当前节点
    p=head;
    printf("------------\n");
    // 如果p的next为空指针，则停止遍历
    while(true)
    {
        if (p->next == NULL)
            break;
        // p变成next所指的节点，此处先改变当前节点后输出当前的值，是因为一开始p值的是头节点，头节点的值为0
        p = p->next;
        printf("%d\n",p->data);
        
        
    
    
    
    return 0;
}
