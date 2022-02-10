#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    return 0;
}


struct DLLNode {
    int data;
    struct DLLNode *next;
    struct DLLNode *prev;
};

void insertAtBeginning(struct DLLNode **head, int data){
    struct DLLNode *current = *head;
    struct DLLNode *newNode = (struct DLLNode *) (malloc(sizeof(struct DLLNode)));
    if(!newNode){
        printf("Memory error");
        return;
    }
    newNode->prev = NULL;
    newNode->data = data;
    newNode->next = NULL;
    if(current == NULL){
        *head = newNode;
        return;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
};

void insertAtEnd(struct DLLNode **head, int data){
    struct DLLNode *current = *head;
    struct DLLNode *newNode = (struct DLLNode *)(malloc(sizeof(struct DLLNode)));
    if(!newNode){
        printf("Memory Error");
        return;
    }
    if (*head == NULL){
        *head = newNode;
        return;
    }
    while (current->next!=NULL)
        current = current->next;

    newNode->prev = current;
    current->next = newNode;
}