#include<iostream>
#include<algorithm>
using namespace std;

typedef struct CLLNode {
    int data;
    struct CLLNode *next;
};

int length(struct CLLNode *head){
    struct CLLNode *current = head;
    int count = 0;
    if(head == NULL) return 0;
    do{
        current = current -> next;
        count++;
    }while (current !=head);
    return count;
}

int print(struct CLLNode *head){
    struct CLLNode *current = head;
    if (head == NULL) return;
    do{
        printf("%d->",current->data);
        current = current -> next;
    } while(current != head);
}

int main()
{
    return 0;
}
