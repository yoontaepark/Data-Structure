void push(int *stack, int *top, element item) 
{
if(*top>= STACK_SIZE-1)
  return stackFull();
stack [++(*top)] = item;
}
