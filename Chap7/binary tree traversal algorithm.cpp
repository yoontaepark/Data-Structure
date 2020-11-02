struct node *nodeptr;

void preorder(struct node *tree_ptr){
  if(tree_ptr){
    printf("%d", tree_ptr→info);
    preorder(tree_ptr→left);
    preorder(tree_ptr→right);
  }
}

void inorder(struct node *tree_ptr){
  if(tree_ptr){
    inorder(tree_ptr→left);
    printf("%d", tree_ptr→info);
    inorder(tree_ptr→right);
  }
}

void postorder(struct node *tree_ptr){
  if(tree_ptr){
    postorder(tree_ptr→left);
    postorder(tree_ptr→right);
    printf("%d", tree_ptr→info);
  }
}

