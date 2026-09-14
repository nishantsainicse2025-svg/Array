#include <stdio.h>
#include <stdlib.h>
struct node
{
   int data;
   struct node *next;
};

void starting(struct node *ptr)
{
struct node *one;
one = (struct node *)malloc(sizeof(struct node));
one->data=121;
   one->next = ptr;
   ptr = one;
   while (ptr != NULL)
   {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
   }
   
}
void last(struct node *head)
{
   struct node *new;
    struct node *ptr=head;
    new = (struct node *)malloc(sizeof(struct node));

    while (ptr->next != NULL)
    {
         
        ptr = ptr->next;
    }
    
    new->data = 1901;
    new->next = NULL;
    ptr->next = new;
    ptr=head;
     while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }

}
struct node *position(struct node *head)
{
 int index;
   printf("Enter index: ");
   scanf("%d", &index);
   
   struct node* new;
   new=(struct node*)malloc(sizeof(struct node));
   
   struct node* ptr=head;
   int i=0;
   while(i!=index-1){
    ptr=ptr->next;
    i++;
   }
   
   
   new->data=1200;
   new->next=ptr->next;
   ptr->next=new;
   ptr=head;
   while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
  

   struct node *head;
   struct node *second;
   struct node *third;
   struct node *fourth;
   
   struct node *two; // New pointer

   head = (struct node *)malloc(sizeof(struct node));
   second = (struct node *)malloc(sizeof(struct node));
   third = (struct node *)malloc(sizeof(struct node));
   fourth = (struct node *)malloc(sizeof(struct node));
   
   two = (struct node *)malloc(sizeof(struct node));

   
   two->data = 90;

   // one->next=head;
   head->data = 67;
   head->next = second;

   second->data = 6;
   second->next = third;

   third->data = 7;
   third->next = fourth;

   fourth->data = 2;
   fourth->next = NULL;

   // starting(head);
   // last(head);
   position(head);
   

   return 0;
}