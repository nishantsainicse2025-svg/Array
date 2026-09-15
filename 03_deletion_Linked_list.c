#include <stdio.h>
#include <stdlib.h>
struct Node
{
   int data;
   struct Node *next;
};
void LLtraversal(struct Node *ptr)
{
   while (ptr != NULL)
   {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
   }
}
void deletfirst(struct Node *head)
{
   struct Node *ptr = head;
   head = head->next;
   free(ptr);
   ptr=head; // this is important because previously ptr points to deleted node ,so we redirect towad to new head
    while (ptr != NULL)
   {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
   }
}
void random(struct Node *head)
{
   int index;
   printf("Enter index to delet node:");
   scanf("%d", &index);
   struct Node *ptr = head;
   struct Node *temp = ptr->next;

   for (int i = 0; i< index - 1; i++)
   {
     
      ptr = ptr->next;
      temp=temp->next;
   }
   
   ptr->next = temp->next;
   free(temp);
   ptr=head;
   while (ptr != NULL)
   {
      printf("%d\n", ptr->data);
      ptr = ptr->next;
   }
   
}
void last(struct Node *head)
{
   struct Node *ptr = head;
   struct Node *preptr = head;
   
   while (ptr->next != NULL)
   {
      printf("%d ",ptr->data);
      preptr = ptr;
      ptr = ptr->next;
   }
   preptr->next = NULL;
   free(ptr);

   
}

int main()
{

   struct Node *head;
   struct Node *second;
   struct Node *third;
   struct Node *fourth;
   struct Node *fifth;
   head = (struct Node *)malloc(sizeof(struct Node));
   second = (struct Node *)malloc(sizeof(struct Node));
   third = (struct Node *)malloc(sizeof(struct Node));
   fourth = (struct Node *)malloc(sizeof(struct Node));
   fifth = (struct Node *)malloc(sizeof(struct Node));

   head->data = 3;
   head->next = second;

   second->data = 32;
   second->next = third;

   third->data = 2;
   third->next = fourth;

   fourth->data = 56;
   fourth->next = fifth;

   fifth->data = 98;
   fifth->next = NULL;
   // LLtraversal(head);
   // deletfirst(head);
   random(head);
   // last(head);
   // printf("After\n");
   // LLtraversal(head);
   return 0;
}