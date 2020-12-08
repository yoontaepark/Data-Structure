struct KNode *Search (char K[], struct KNode *r){
  if(r == NULL)
    return(NULL);
  else
    if(strcmp(k, r→key) == 0)
      return(r);
    else if(strcmp(k, r→key) < 0)
      return(Search(k, r→left));
    else return(Search(k, r→right));
}


