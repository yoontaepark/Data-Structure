typedef struct two_three *two_three_ptr,
struct two_three {
  int lkey, rkey;
  two_three_ptr lchild, mchild, rchild;
};

two_three_ptr search23(two_three_ptr t, int x){
  while(t)
    switch(compare(x,t){
      case 1: t = t→lchild;
        break;
      case 2: t = t→mchild;
        break;
      case 3: t = t→rchild;
        break;
      case 4: return(t);
    }
  return(NULL);
}
