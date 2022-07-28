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
        printf("\nOption 1\n\n");
        break;
      case 2:
        printf("\nOption 2\n\n");
        break;
      case 3:
        printf("\nOption 3\n\n");
        break;
      case 4:
        saru();
        puts("\n");
        break;
      default:
        printf("\nOption isn't valid\n\n");
      }
    }while(op);

  return(0);
  }
