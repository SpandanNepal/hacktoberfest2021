#include<iostream>
#include<stdlib.h>
struct  node
{
    int data;
    struct node * next;
    
};

// int countLen(struct node * head){
//    struct node * ptr = head;
//     int count = 0;
//     while(ptr  != NULL){
//         ptr = ptr -> next;
//         count++;
//     }
//     return count;
// }

int recusiveCount(struct node * head){
if(head == NULL){
    return 0;
}
    else
    {
        return 1 + recusiveCount(head->next);
    }
    
}

int main(){
    struct node * head = (struct node*)malloc(sizeof(struct node));
    struct node * first = (struct node*)malloc(sizeof(struct node));
    struct node * second = (struct node*)malloc(sizeof(struct node));
    struct node * third = (struct node*)malloc(sizeof(struct node));

    head ->data = 7;
    head ->next = first;

    first->data = 12;
    first->next = second;

    second ->data = 34;
    second ->next = third;

    third ->data = 56;
    third ->next = NULL;
     
    std::cout<<"Len of linkedlist : "<<recusiveCount(head);

    return 0;
}
