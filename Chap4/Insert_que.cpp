void Add_q(int *reae, element item){
  if(*rear == QUEUE_SIZE-1){
    printf("Queue is Full !!");
    return;
    }
  queue[++(*rear)] = item;
  return;
}
    
