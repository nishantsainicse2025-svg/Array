#include <stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
};
void CountNodes(struct node* ptr){
    int count=0;
    while(ptr!=NULL){
        count++;
        ptr=ptr->next;
       
    }
     printf("%d ",count);
}

int main() {
    struct node *head;
    struct node *sec;
    struct node *third;
    head=(struct node*)malloc(sizeof(struct node));
       sec  =(struct node*)malloc(sizeof(struct node));
       third =(struct node*)malloc(sizeof(struct node));
head->data=45;
head->next=sec;

sec->data=23;
sec->next=third;
 third->data=12;
 third->next=NULL;
 CountNodes(head);
    return 0;
}