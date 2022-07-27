#include <stdio.h>
#include "pai.h"

int
main()
  {
  int op;
  //saru();
  onset();

  do
    {
    menu();
    printf("\nEnter the option: ");
    scanf("%d", &op);
    switch(op)
      {
      case 0:
        cr();
        break;
      case 1:
        printf("Option 1\n");
        break;
      case 2:
        printf("Option 2\n");
        break;
      case 3:
        printf("Option 3\n");
        break;
      default:
        printf("Option isn't valid\n");
      }
    }while(op);

  return(0);
  }
