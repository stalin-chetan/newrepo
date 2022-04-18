// Edit the body of the following for loop so that only even numbers between 70 and 80 get printed on
// the screen. (Hint: use continue statement.)
// #include <stdio.h>
// int main(){
//  int i;
//  for(i = 70; i <= 80; i++){
//  printf("%d ", i);
//  }
//  return 0;
// }
#include <stdio.h>
int main()
{
    int i;
    for (i = 70; i <= 80; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}
