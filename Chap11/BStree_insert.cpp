struct Knode *Insert(struct KNode *newptr, struct KNode *r){
  if(r == NULL)
    return(newptr);
  else
    if(strcmp(newptr→key, r→key) == 0)
      DUPLICATE_ENTRY();
    else
      if(strcmp(newptr→key, r→key) < 0)
        r→left = Insert(newprt, r→left);
      else
        r→right = Insert(newptr, r→right);
  return(r);
}
