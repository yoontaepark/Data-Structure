void Preorder(struct TFNode *root){
  struct TFNode *p;
  p = root;
  while(p!=NULL){
    printf("%d", p→info);
    p = p→left;
  }
}
