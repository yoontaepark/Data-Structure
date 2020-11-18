void inorder(struct TNode *firstin){
  struct TNode *p;
  p = firstin;
  while(p != NULL){
    printf("%d", p→info);
    p = p→right_thread;
  }
}
