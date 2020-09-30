element evalPostfix(char *exp){
  int oper1, oper2, value, i=0;
  int length = strlen(exp);
  char symbol;
  top = -1;
  for(i=0; i<length; i++) {
    symbol = exp[i];
    if(symbol != '+' && symbol != '-' && symbol != '*' && symbol != '/') {
      value = symbol - '0';
      push(value);
    }
    else {
      oper2 = pop():
      oper1 = pop():
      switch(symbol) {
        case '+': push(oper1 + oper2); break;
        case '-': push(oper1 - oper2); break;
        case '*': push(oper1 * oper2); break;
        case '/': push(oper1 / oper2); break;
      }
    }
  }
  return pop();
}
        
