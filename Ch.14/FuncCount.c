//
//  Sort-Search.c
//  Buble sort & Binary Search.
//
//  Created by Ji Hong Geun on 25/11/18.
//  Copyright © 2018 Ji Hong Geun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#define MAX_INT_LEN 25
#define COMPARE_2_CASES(x,y) ((x < y) ? 0 : 1)
#define COMPARE_3_CASES(x,y) ((x<y) ? -1: ((x==y) ? 0 : 1))
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))
#define MALLOC(p, t, s)  if( !(p = (t*)malloc(s))  ){\
			        fprintf(stderr, "Insufficient memory!");\
		  	        exit(EXIT_FAILURE);\
			        }
#define VALID_LEN(l) ((l < MAX_INT_LEN && l > 0) ? 1 : 0)

int initList(int **lst);              		// malloc and assign number.
void bubbleSort(int *lst, int len);
void searchNum(int *lst, int lst_size);
int binSearch(int *lst, int search_num, int left, int right);
int linearSearch(int *lst, int search_num, int lst_size);

int main()
{
    int *lst;
    int i;
    int lst_size = initList(&lst);      // Init the list and takes length of the list.

    bubbleSort(lst, lst_size);

    printf("\nThis is the sorted list by Bubble Sort.\n");
    for(i=0; i<lst_size; i++) printf("%d ", lst[i]);
    printf("\n\n");

    searchNum(lst, lst_size);

    return 0;
}

int initList(int **lst)
{
    int i = 0;
    int tmp, len;

    do
    {
        printf("Type the length of list : ");
        scanf("%d", &len);
    } while(!VALID_LEN(len));

    MALLOC(*lst, int, sizeof(int)*len);

    while(i < len)
    {
        printf("Type the lst[%d]'s number : ", i);
        scanf("%d", (*lst)+i);
        i++;
    }

    printf("\nThis is the unsorted list.\n");
    for(i=0; i<len; i++) printf("%d ", *((*lst)+i));
    printf("\n");

    return len;
}

void bubbleSort(int *lst, int len)
{
    int i, j, tmp;

    for(i=len-1; i>0; i--)
        for(j=0; j<i; j++)
            if( COMPARE_2_CASES(lst[j], lst[j+1]) ) SWAP(lst[j], lst[j+1], tmp);

}

void searchNum(int *lst, int lst_size)
{
    int find = 0;


    while(find >= 0)
    {
        printf("\n====================\n");
        printf("If you want to stop, type the negative integer.\n");
        printf("What do you want to find? : ");
        scanf("%d", &find);
        printf("The location of %d : %d  (Using binary search)\n\n", find, binSearch(lst, find, 0, lst_size));
        printf("The location of %d : %d  (Using linear search)\n\n", find, linearSearch(lst, find, lst_size));
        printf("====================\n\n");
    }

}

int binSearch(int *lst, int search_num, int left, int right)
{
    static int count = 0;
    count++;
    int middle = (left + right) / 2;

    if (left <= right)
        switch(COMPARE_3_CASES(lst[middle], search_num))
       {
       	  case -1 : return binSearch(lst, search_num, middle+1, right);
        	case 0 :
            printf("\nbinSearch() called %d times\n", count);
            count = 0;
            return middle;      // Basis level of this recursion.
        	case 1 :  return binSearch(lst, search_num, left, middle-1);
       }

    return -1;

}

int linearSearch(int *lst, int search_num, int lst_size)
{
  static int i = -1;
  i++;

  if (lst_size == i) return -1;     // no search_num in this list.
	
  if (lst[i] == search_num)         // if it finds, return the location.
  {
    int tmp = i;
    i = -1;
    printf("\nbinSearch() called %d times\n", tmp+1);
    return tmp;
  }
  return linearSearch(lst, search_num, lst_size);

}
