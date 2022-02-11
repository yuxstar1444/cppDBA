#include<iostream>
#include<algorithm>
using namespace std;

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Stack {
    int top;
    int capacity;
    int *array;
};
struct Stack *createStack(int capacity){
    struct Stack *S = (struct Stack *) (malloc(sizeof(struct Stack)));
    if (!S) return NULL;
    S->capacity = capacity;
    S->top = 1;
    S->array = (int*) malloc(S->capacity * sizeof(int));
    if (!S->array) return NULL;
    return S;
}
int isEmpty(struct Stack *s){
    return NULL;
}

int size(struct Stack *S){
    return NULL;

}

int isFull(struct Stack *S){
    return NULL;
}

void doubleStack(struct Stack *S){
    S->capacity *=2;
    S->array = (int*) realloc(S->array, S->capacity * sizeof(int));
}

void push(struct Stack *S, int data){

}

int pop(struct Stack *S){
    return NULL;
}

int peek(struct Stack *S){
    return NULL;
}

void deleteStack(struct Stack *S){

}

int main(){
    return NULL;
}