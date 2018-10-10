#include <stdio.h>
#include <stdlib.h>

struct Node{
  char name[50];
  int roll;
  struct Node *next;

};

int printList(struct Node *n){
  while (n != NULL)
  {
     printf(" %d", n->roll);

     n = n->next;
  }


  return 0;

}

int main(){
  struct Node *head = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;

  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));

  head->roll = 1;
  second->roll = 2;
  third->roll = 3;
  head->name[50] = "Naman";
  second->name[50] = "Mohit";
  third->name[50] = "Roy";
  head->next = second;
  second->next = third;
  third->next = NULL;

  printList(head);
}
