void insert23(two_three_ptr t, int y){
  two_three_ptr q,p,r;
  if(!(*t))
    new_root(t,y,NULL);
  else{
    p = find_node(*t,y);
    if(!p){
      fprintf(stderr,"The key is currently in the tree\n");
      exit(1);
    }
    q = NULL;
    for(;;)
    if(p→rkey == INT_MAX){
      put_in(&p, y, q);
      break;
    }
    else{
      split(p, &y, &q);
      if(p == *t){
        new_root(t,y,q);
        break;
      }
      else
        p = delete();
    }
  }
}
    
