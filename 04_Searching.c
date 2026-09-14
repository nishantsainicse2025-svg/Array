#include <stdio.h>
#include<stdlib.h>
struct node{
    int data ;
    struct node *next;
};
void Searching( struct node* head,int target){
   struct node *ptr=head;
   struct node *Pos;
    while(ptr!=NULL){
        if(target==ptr->data){
            Pos=ptr;
            printf("Found!");
            return ;
        }else{
         ptr=ptr->next;}
    }
    Pos=NULL;
    printf("Not found");
    return ;
}


int main() {
    int target=11;
    struct node *head;
    struct node *sec;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
       sec  =(struct node*)malloc(sizeof(struct node));
       third =(struct node*)malloc(sizeof(struct node));
       fourth=(struct node*)malloc(sizeof(struct node));
head->data=45;
head->next=sec;

sec->data=23;
sec->next=third;
 third->data=12;
 third->next=fourth;
 fourth->data=90;
 fourth->next=NULL;
 Searching(head,target);
    return 0;
}