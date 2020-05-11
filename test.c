


#include "list.h"
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char *argv[])
{
  int n, value;
  Node *head = NULL;
  Node *tail = NULL;
  do
  {
    n = 0;
    printf("Choose an operation from the list below:\n");
    printf("\t1. Insert Head\n");
    printf("\t2. Insert tail\n");
    printf("\t3. Delete a Node\n");
    printf("\t4. Delete all\n");
    printf("\t5. Print List\n");
    printf("\t6. Close Program\n");
    scanf("%d", &n);
    if (n < 1 || n > 6)
    {
      n = 0;
    }
    switch (n)
    {
      case 0:
          printf("Invalid input.\n");
          break;

      case 1:
          printf("Enter an integer to insert into the list: ");
          scanf("%d", &value);
          head = List_insert(head, value);
          break;

      case 2:
        printf("Enter an integer to insert into the list: ");
        scanf("%d", &value);
        tail = List_insert_last(head, value);
        break;

      case 3:
          printf("Choose a number to delete: ");
          scanf("%d", &value);
          head = List_delete(head, value);
          break;

      case 4:
          printf("Deleting entire list.\n");
          List_destroy(head);
          break;

      case 5:
          printf("List:\n");
          List_print(head);
          break;

      case 6:
          printf("Exiting program.\n");
          break;
    }
  } while (n != 6);
}