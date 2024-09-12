#include <stdio.h>

int add_item(int items[],int length); //declaration 

int list_items(int items[], int length);

int remove_item(int items[]);


int main(void){   
   
   int length; 
   
   printf("set a size to the array:");
   scanf("%d", &length);

   int items[length];

   add_item(items,length);
   list_items(items,length);
}


// add new items 
int add_item(int items[], int length) // definition of function 

{

  int item; 

  for (int index = 0; index < length; index++)
    
  {
     printf("add items inside the array:");
     scanf("%d", &item);
    
     items[index] = item;

  }

  return 0;
}

// remove end item the array  //! error is function 
int remove_item(int items[]) 

{
  
  int length = sizeof(items) / sizeof(items[0]); //!

  items[length] = length - 1; 

  return 0;
}

// list the items 
int list_items(int items[], int length) 

{
  for (int index  = 0; index < length; index++)
  {
     printf( "[%d]:%d\n",index, items[index]); 
  }

  return 0;
}


