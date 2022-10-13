#include "stack.h"
#include <stdlib.h>
#include <assert.h>


//Create initialization of stack
void initialize(stack* s)
{
  s->head = NULL; //to initialize a stack
}

void push(int x, stack* s) //inserting item x at the top of the stack
{
    //implement push. Will put an item x at the top of the stack s
    node *next_node = (node*)malloc(sizeof(node)); //allocating memmory 
    next_node -> next = s -> head;  //start of the list in stack
    s -> head = next_node; // the head pointer now points to the next empty memory space
    s -> head -> data = x; // value "x" gets pushed to head

}

int pop(stack* s) //returning and removing the top item of the stack. Plus freeing up the memory
{
  assert(s->head >= 0);

  int pop_value; //value of pop
  node *temp = s -> head; //temporary pointer to free up space
  pop_value = s -> head -> data; //value
  s -> head = s -> head -> next; //the pointer "head" point to the next element in the list
  free(temp); //to release the memory pointer "head" pointed to before to avoid memory leak

  return pop_value; 
}

bool empty(stack* s) //check if the stack can accept more
{
  if (s -> head == NULL) //checks if "head" is NULL. if it is, then the stack is empty
    return true;
  else 
    return false; 
}

bool full(stack* s) {
    //implement full here
    
    //checking wether or not a stack is full is seemingly pointless due to the only limitation being
    //how much memory is allocated. 
    // If a stack is full it would be an overflow condition and result in an error. 
  return false;
}
