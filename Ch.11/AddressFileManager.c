//
//  AddressFileManager.c
//  File manager test.
//
//  Created by Ji Hong Guen on 27/11/18.
//  Copyright © 2018 Ji Hong Guen. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define MAX_STR_LEN 50
#define MAX_USER 20
#define TRUE 1
#define FALSE 0
#define PRINT 0
#define ADD 1
#define RETOUCH 2
#define SEARCH 3
#define SAVE 4
#define QUIT 5
#define COMPARE_2_CASES(c1, c2) ((c1 < c2) ? 0 : 1)
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))
#define MALLOC(p, t, s)  if( !(p = (t*)malloc(s))  ){\
			                   fprintf(stderr, "Insufficient memory!");\
		  	                 exit(EXIT_FAILURE);\
			                   }

typedef enum _FIELD_TYPE {
  usr_delimeter,
  name,
  addr,
  pnum
} FIELD_TYPE;

typedef struct person{
  char name[20];
  char addr[50];
  char pnum[20];
} Person;

int fieldType(char *str);      // Check the parameter str's field type.
void pull(FILE *rfp, Person *p_list, int *last_loc);    // Pull info. from address file.
void prtUsers(Person *p_list, int from, int to);        // print all user's info.
void insert(Person *p_list, int *last_loc);             // insert to list.
void retouch(Person *p_list, int last_loc);             // modify from list.
Person* search(Person *p_list, char *target, int last_loc);   // returns target's location.
void save(Person *p_list, int last_loc);                // write to address file.
//void bubbleSort(Person *p_lst, int last_loc);

void main()
{
  int menu;
  Person p_list[10];
  int last_loc = 0;          // this always indicate index of last location plus 1.
  char tmp_name[20];

  // Open address text file and pull information from it.
  FILE *rfp = fopen("Desktop/address.txt", "r");
  pull(rfp, p_list, &last_loc);


  while(1)
  {
    printf("\n\n======== Menu ========\n");
    printf("0. Print\n");
    printf("1. Add\n");
    printf("2. Retouch\n");
    printf("3. Search\n");
    printf("4. Save\n");
    printf("5. Quit\n");
    printf("======================\n\n");

    printf("Choose from menu : ");
    scanf("%d", &menu);
    printf("\n\n");

    switch(menu)
    {
      case PRINT     : prtUsers(p_list, 0, last_loc); break;
      case ADD       : insert(p_list, &last_loc); break;
      case RETOUCH   : retouch(p_list, last_loc); break;
      case SEARCH    :
                       printf("Type name that you wat to find : ");
                       scanf("%s", tmp_name);
                       search(p_list, tmp_name, last_loc);
                       break;
      case SAVE      :
                       fclose(rfp);
                       save(p_list, last_loc);
                       rfp = fopen("Desktop/address.txt", "r");
                       pull(rfp, p_list, &last_loc);
                       break;
      case QUIT       : return;
    } // switch
  } // while

}


int fieldType(char *str)
{
  // Delimit the parameter's field.
  int i;
  char str_field[5];
  strncpy(str_field, str, 4);
  str_field[4] = '\0';

  char field_name[5] = "Name";
  char field_addr[5] = "Addr";
  char field_pnum[5] = "Pnum";
  FIELD_TYPE type;

  if(!strcmp(str_field, field_name)) type = name;
  else if (!strcmp(str_field, field_addr)) type = addr;
  else if (!strcmp(str_field, field_pnum)) type = pnum;
  else type = usr_delimeter;

  return type;

}

void pull(FILE *rfp, Person *p_list, int *last_loc)
{
  char s[MAX_STR_LEN];
  int i = 0;
  int count = 0;    // This is for finding line's delimeter. => :

  while(1)
  {
    fgets(s, MAX_STR_LEN, rfp);
    *last_loc = i;

    if(feof(rfp)) break;      // basis level. If file string pointer reaches end.

    switch(fieldType(s))
    {
      case 1:
        while(s[++count] != ':');                               // find delemiter.
        strcpy((p_list+i) -> name, s + (count+2));
        (p_list+i) -> name[strlen((p_list+i)-> name)-1] = '\0';   // Delete NEWLINE.
        count = 0;
        break;
      case 2:
        while(s[++count] != ':');                               // find delemiter.
        strcpy((p_list+i) -> addr, s + (count+2));
        (p_list+i) -> addr[strlen((p_list+i)-> addr)-1] = '\0';     // Delete NEWLINE.
        count = 0;
        break;
      case 3:
        while(s[++count] != ':');                               // find delemiter.
        strcpy((p_list+i) -> pnum, s + (count+2));
        (p_list+i) -> pnum[strlen((p_list+i)-> pnum)-1] = '\0';     // Delete NEWLINE.
        count = 0;
        break;
      default :
        i++;          // Pull next person's info.
    } // switch
  } // while
}

void prtUsers(Person *p_list, int from, int to)
{
  int i;
  for(i=from; i<to; i++)
  {
    printf("=========================\n");
    printf("Name : ");
    printf("%s\n", (p_list+i)->name);
    printf("Pnum : ");
    printf("%s\n", (p_list+i)->pnum);
    printf("Addr : ");
    printf("%s\n", (p_list+i)->addr);
  }
  printf("=========================\n");
}

void insert(Person *p_list, int *last_loc)
{
  char tmp_name[20];
  char tmp_pnum[20];
  char tmp_addr[50];

  printf("Type name : ");
  scanf("%s", tmp_name);
  strcpy((p_list + *last_loc) -> name, tmp_name);

  printf("Type pnum : ");
  scanf("%s", tmp_pnum);
  strcpy((p_list + *last_loc) -> pnum, tmp_pnum);

  printf("Type addr : ");
  scanf("%s", tmp_addr);
  strcpy((p_list + *last_loc) -> addr, tmp_addr);

  *last_loc += 1;

}

void retouch(Person *p_list, int last_loc)
{
  char tmp_name[20];
  char tmp_pnum[20];
  char tmp_addr[50];
  int i = 0;

  printf("\n\n\n");
  printf("Type the user name that you want to retouch :  ");
  scanf("%s", tmp_name);

  // while(strcmp(p_list -> name, tmp_name))       // this will do basis level's role.
  // {
  //   if(i == *last_loc)
  //   {
  //     printf("Cant find %s\n\n", tmp_name);
  //     return;
  //   }
  //   i++;
  //   p_list++;
  // }

  p_list = search(p_list, tmp_name, last_loc);
  if(p_list)
  {
    printf("\nYou have chosen the user above.\n");
    printf("Type name : ");
    scanf("%s", tmp_name);
    strcpy(p_list -> name, tmp_name);

    printf("Type pnum : ");
    scanf("%s", tmp_pnum);
    strcpy(p_list -> pnum, tmp_pnum);

    printf("Type addr : ");
    scanf("%s", tmp_addr);
    strcpy(p_list -> addr, tmp_addr);
  }
}

Person* search(Person *p_list, char *target, int last_loc)
{
  int i = 0;
  while(strcmp(p_list -> name, target))       // search p_list until it reaches end or finds target.
  {
    if(i == last_loc)         // if there is no target, return NULL.
    {
      printf("Cant find %s\n\n", target);
      return NULL;
    }
    i++;
    p_list++;
  }

  prtUsers(p_list-i, i, i+1);
  return p_list;

}

void save(Person *p_list, int last_loc)
{
  int i;
  FILE *wfp = fopen("Desktop/address.txt", "w");
  for(i=0; i < last_loc; i++)
  {
    fprintf(wfp, "Name : %s\n", p_list -> name);
    fprintf(wfp, "Pnum : %s\n", p_list -> pnum);
    fprintf(wfp, "Addr : %s\n", p_list -> addr);
    fprintf(wfp, "====================\n");
    p_list++;
  }
  fclose(wfp);
	printf("Saved!\n");
}


//
// void bubbleSort(Person *p_lst, int last_loc)
// {
//     int i, j, k=0;
//     Person *tmp;
//
//     for(i=last_loc-1; i>0; i--)
//         for(j=0; j<i; j++)
//             //if( COMPARE_2_CASES(lst[j], lst[j+1]) ) SWAP(lst[j], lst[j+1], tmp);
//               while(p_lst -> name + k && (p_lst+1) -> name + k)
//                 if( COMPARE_2_CASES(*(p_lst -> name + k), *((p_lst+1) -> name + k)) )
//                   SWAP(p_lst, p_lst+1, tmp);
//
// }
