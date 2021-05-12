
extern int printd( int i );

int fact( int n , int m) {
  if ( n <= 1 )
    return 0;
  return n*fact(n-1,m);
}

void coucou(int i, int j){
  printd(i);
  return;
}


int main() {
  printd(fact(10,0));
  return;
}