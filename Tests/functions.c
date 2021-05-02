extern int printd( int i );

int fact( int n , int m) {
  if ( n <= 1 )
    return 1;
  return n*fact(n-1,m);
}


int main() {
  printd(fact(10,0));
  return 0;
}