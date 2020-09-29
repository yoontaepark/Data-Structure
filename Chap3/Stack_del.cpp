//Delete Stack
element pop(int *top){
  if(*top == -1){
    printf("Stack is Empty!!\n");
    return 0;
  }
  else return stack[top--];
}
