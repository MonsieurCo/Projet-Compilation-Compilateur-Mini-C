extern int printd( int i );
int coucou(){
printd(1);
return 4;
}
int main() {
  int i,j;
  i = 450;
  j = -123;
  if ( coucou() < coucou() ) printd(i); else printd(j);
  if ( i+1 < 123 ) printd(i); else printd(j);
  if ( i+1 < j ) printd(i); else printd(j);
  if ( 45 < j+0 ) printd(i); else printd(j);
  if ( 45 < 123 ) printd(i); else printd(j);
  if ( 45 < j ) printd(i); else printd(j);
  if ( i < j+0 ) printd(i); else printd(j);
  if ( i < 123 ) printd(i); else printd(j);
  if ( i < j ) printd(i); else printd(j);

  if ( i+1 > j+0 ) printd(i); else printd(j);
  if ( i+1 > 123 ) printd(i); else printd(j);
  if ( i+1 > j ) printd(i); else printd(j);
  if ( 45 > j+0 ) printd(i); else printd(j);
  if ( 45 > 123 ) printd(i); else printd(j);
  if ( 45 > j ) printd(i); else printd(j);
  if ( i > j+0 ) printd(i); else printd(j);
  if ( i > 123 ) printd(i); else printd(j);
  if ( i > j ) printd(i); else printd(j);

  if ( i+1 >= j+0 ) printd(i); else printd(j);
  if ( i+1 >= 123 ) printd(i); else printd(j);
  if ( i+1 >= j ) printd(i); else printd(j);
  if ( 45 >= j+0 ) printd(i); else printd(j);
  if ( 45 >= 123 ) printd(i); else printd(j);
  if ( 45 >= j ) printd(i); else printd(j);
  if ( i >= j+0 ) printd(i); else printd(j);
  if ( i >= 123 ) printd(i); else printd(j);
  if ( i >= j ) printd(i); else printd(j);

  if ( i+1 <= j+0 ) printd(i); else printd(j);
  if ( i+1 <= 123 ) printd(i); else printd(j);
  if ( i+1 <= j ) printd(i); else printd(j);
  if ( 45 <= j+0 ) printd(i); else printd(j);
  if ( 45 <= 123 ) printd(i); else printd(j);
  if ( 45 <= j ) printd(i); else printd(j);
  if ( i <= j+0 ) printd(i); else printd(j);
  if ( i <= 123 ) printd(i); else printd(j);
  if ( i <= j ) printd(i); else printd(j);

  if ( i+1 == j+0 ) printd(i); else printd(j);
  if ( i+1 == 123 ) printd(i); else printd(j);
  if ( i+1 == j ) printd(i); else printd(j);
  if ( 45 == j+0 ) printd(i); else printd(j);
  if ( 45 == 123 ) printd(i); else printd(j);
  if ( 45 == j ) printd(i); else printd(j);
  if ( i == j+0 ) printd(i); else printd(j);
  if ( i == 123 ) printd(i); else printd(j);
  if ( i == j ) printd(i); else printd(j);

  if ( i+1 != j+0 ) printd(i); else printd(j);
  if ( i+1 != 123 ) printd(i); else printd(j);
  if ( i+1 != j ) printd(i); else printd(j);
  if ( 45 != j+0 ) printd(i); else printd(j);
  if ( 45 != 123 ) printd(i); else printd(j);
  if ( 45 != j ) printd(i); else printd(j);
  if ( i != j+0 ) printd(i); else printd(j);
  if ( i != 123 ) printd(i); else printd(j);
  if ( i != j ) printd(i); else printd(j);

  return 0;
}
