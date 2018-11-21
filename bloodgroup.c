#include <stdio.h>
#include <string.h>
void main()
{ char Name[40], G[5], answer[10];
  int i;
  do
  {
    printf("What is your Name? ");
    scanf("%s", Name);
    do
    {
      printf("Welcome to ISLAND");
    }  while (strcmp(G, "A") !=0  &&
                            strcmp(G, "B") !=0  &&
                            strcmp(G, "AB") !=0   &&
                            strcmp(G, "O") !=0 );
    if (strcmp(G,"A") ==0)
    {
      printf("HELLO you are A type\n");
    }
    else if (strcmp(G, "B") ==0)
    {
      printf("%s, B. Well, you can give blood to who you want to give\n", Name);
    }
    else if (strcmp(G, "AB") == 0)
    {
      printf("%s, AB. Oh my God, you can give blood only to: AB.\n", Name);
      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", Name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", answer);
  } while (strcmp(answer, "YES") == 0);
  printf("Goodbye\n");
}
