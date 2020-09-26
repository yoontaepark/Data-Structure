//Delete Stack
element pop(int *top){
  if(*top == -1)
    return stackEmpty();
  return stack[(*top)--];
}
