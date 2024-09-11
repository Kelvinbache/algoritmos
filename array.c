#include <stdio.h>

int items[0],length; // for this variable global


int add_items(void){
   
   int item;

   for (int index = 0; index <= length; index++){
     
    printf("item to be added to the array:");
    scanf("%d", &item);

     items[index] = item; // here add items the array 
   }

  return 0;
}


int remove_items(void){
   // here is remove item
  return 0;
}



int main(){ 
   
   printf(" index the array:");
   scanf("%d", &length); // here assigning value 
   
   items[length]; // here it same 

   add_items();
   remove_items();   
    
    for(int index = 0 ; index <= length; index++){
      printf("%d\n", items[index]);
    }


}
