Aim : To Write a C program to solve the Tower of Hanoi Using Recursion.
//program//

#include <stdio.h>

// recursive function to perform tower of hanoi
void TOH(int n, char S, char A, char D)
 {
           // base case : if only one disk
              if (n == 1)
              {
                  printf("Move disk 1 from %c to %c\n", S, D);
                  return;
              }

              // move n-1 disks from source to temporary
              TOH(n - 1, S, D, A);     

              // move nth disk from source to destination
              printf("Move disk %d from %c to %c\n", n, S, D);

              // move n-1 disks from temporary to destination
              TOH(n - 1, A, S, D);
          }
          int main()
          {
              int n;
              printf("Enter the number of disks: ");
              scanf("%d", &n);
              printf("\nRequired moves:\n");

              // function call      
              TOH(n, 'S', 'A', 'D');
              return 0;
          }
