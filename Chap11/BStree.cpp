struct KNode{
  struct KNode *left;
  char key[10];
  int info;
  struct KNODE *right;
}

void Inorder(struct KNode *rootptr){
  if(rootptr != NULL) {
    Inorder(rootptr→left);
    printf("%d", rotoptr→info);
    Inorder(rootptr→right);
  }
}
