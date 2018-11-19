#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COMPARE(x,y) ((x<y) ? -1: ((x==y) ? 0 : 1))
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))
#define MAX_INT_LEN 35

void assignRandNum(int *lst);
void printLst(int *lst);
void bubbleSort(int *lst);
int binarySearch(int lst[], int search_num, int n);
int linearSearch(int *lst, int search_num);

main()
{
  int lst[MAX_INT_LEN];
  int i = 0;

  assignRandNum(lst);
  printLst(lst);

}

void assignRandNum(int *lst)
{
  int i = 0;
  srand(time(NULL));
  while(i < MAX_INT_LEN) lst[i++] = rand() % 10;
}

void printLst(int *lst)
{
  int i = 0, tmp, search;

  printf("What to search : ");
  scanf("%d", &search);

  printf("\nThis is the int list\n");
  lst[5] = 12;
  while(i < MAX_INT_LEN) printf("%d ", lst[i++]);
  printf("\n");

  tmp = linearSearch(lst, search);
  for(i=0; i<tmp; i++) printf("  ");
  printf("┗here\n");

  printf("\nUsing linear search -> %d\n", linearSearch(lst, 12)+1);
  //printf("Using binary search -> %d\n", binarySearch(lst, 12));

}

void bubbleSort(int *lst)
{
  int i, j;
  for(i=MAX_INT_LEN-1; i>=0; i--)
    for(j=0; j<i; j++) if(lst[i] < lst[j]) SWAP(lst[i], lst[j]);


}

int binarySearch(int list[], int search_num, int n)
{
    int left = 0, right = n - 1;
    int mid;

    while (left <= right)
    {
        mid = (left + right) / 2;
        switch(COMPARE(list[mid], search_num))
        {
            case -1 : left = mid + 1;
                break;
            case 0 : return mid;
            case 1 : right = mid - 1;
                break;
        }
    }
    return -1;
}

int linearSearch(int *lst, int search_num)
{
  int i;
  for(i=0; i<MAX_INT_LEN; i++)
    if(lst[i] == search_num) return i;
  return -1;

}
