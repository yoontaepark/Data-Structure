element Delete_q(int *front, int rear){
  if(*front == rear){
    printf("Queue is empty \n");
    return;
    }
  return (queue[++(*front)]);
}
