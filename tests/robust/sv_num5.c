int main() { 
  int i = ?;
  int n=?;
  int sn=0;
  if (!(n < 1000 && n >= -1000)) return 0;
  for(i=1; i<=n; i++) {
    sn = sn + 2;
  }
  
}


/* __VERIFIER_assert(sn==n*a || sn == 0);


Uncontrolled variable : i . 

-$4{sn} >= 5 && -$3{n} >= 1001 && -2$3{n}+$4{sn} >= 1 ? bottom
-$3{n} >= 1001 && -2$3{n}+$4{sn} == 0 ? 0.
2$3{n}-$4{sn} >= 1 && -$3{n} >= 1001 ? bottom
$3{n} >= -1000 && -$4{sn} >= 5 && -2$3{n}+$4{sn} >= 1 ? bottom
$3{n} >= -1000 && -2$3{n} >= 5 && -2$3{n}+$4{sn} == 0 ? 0.
2$3{n}-$4{sn} >= 1 && $3{n} >= -1000 && -$4{sn} >= 5 && -$3{n} >= 0 ? bottom
-$4{sn} >= 5 && $3{n} == 1 ? bottom
$3{n} >= 2 && -$4{sn} >= 5 && -$3{n} >= -999 ? top
$3{n} >= 1000 && -$4{sn} >= 5 ? bottom
-$3{n} >= 1001 && $4{sn} == -4 ? bottom
$3{n} >= -1000 && -2$3{n} >= 5 && $4{sn} == -4 ? bottom
$3{n} == -2 && $4{sn} == -4 ? 0.
2$3{n} >= -3 && -$3{n} >= 0 && $4{sn} == -4 ? bottom
$3{n} == 1 && $4{sn} == -4 ? bottom
$3{n} >= 2 && -$3{n} >= -999 && $4{sn} == -4 ? 7
$3{n} >= 1000 && $4{sn} == -4 ? bottom
-$3{n} >= 1001 && $4{sn} == -3 ? bottom
$3{n} >= -1000 && -$3{n} >= 2 && $4{sn} == -3 ? bottom
2$3{n} == -3 && $4{sn} == -3 ? 0.
$3{n} >= -1 && -$3{n} >= 0 && $4{sn} == -3 ? bottom
$3{n} == 1 && $4{sn} == -3 ? bottom
$3{n} >= 2 && -$3{n} >= -999 && $4{sn} == -3 ? top
$3{n} >= 1000 && $4{sn} == -3 ? bottom
-$3{n} >= 1001 && $4{sn} == -2 ? bottom
$3{n} >= -1000 && -2$3{n} >= 3 && $4{sn} == -2 ? bottom
$3{n} == -1 && $4{sn} == -2 ? 0.
2$3{n} >= -1 && -$3{n} >= 0 && $4{sn} == -2 ? bottom
$3{n} >= 1 && -$3{n} >= -999 && $4{sn} == -2 ? 4
$3{n} >= 1000 && $4{sn} == -2 ? bottom
-$3{n} >= 1001 && $4{sn} == -1 ? bottom
$3{n} >= -1000 && -$3{n} >= 1 && $4{sn} == -1 ? bottom
2$3{n} == -1 && $4{sn} == -1 ? 0.
$3{n} == 0 && $4{sn} == -1 ? bottom
$3{n} == 1 && $4{sn} == -1 ? bottom
$3{n} >= 2 && -$3{n} >= -999 && $4{sn} == -1 ? top
$3{n} >= 1000 && $4{sn} == -1 ? bottom
$4{sn} == 0 ? 0.
$4{sn} >= 1 && -$3{n} >= 0 ? bottom
$4{sn} >= 3 && $3{n} == 1 ? bottom
$3{n} == 1 && $4{sn} == 2 ? 0.
$3{n} == 1 && $4{sn} == 1 ? bottom
$3{n} >= 2 && -$3{n} >= -999 && -2$3{n}+$4{sn} >= 1 ? bottom
$3{n} >= 2 && -$3{n} >= -999 && -2$3{n}+$4{sn} == 0 ? 0.
$3{n} >= 2 && -$3{n} >= -999 && -2$3{n}+$4{sn} == -1 ? bottom
$3{n} >= 2 && -$3{n} >= -999 && -2$3{n}+$4{sn} == -2 ? 4
$3{n} >= 2 && -$3{n} >= -999 && -2$3{n}+$4{sn} == -3 ? bottom
2$3{n} >= 5 && -$3{n} >= -999 && -2$3{n}+$4{sn} == -4 ? 7
2$3{n}-$4{sn} >= 5 && $4{sn} >= 1 && -$3{n} >= -999 ? top
$3{n} >= 1000 && -2$3{n}+$4{sn} >= 1 ? bottom
$3{n} >= 1000 && -2$3{n}+$4{sn} == 0 ? 0.
2$3{n}-$4{sn} >= 1 && $3{n} >= 1000 && $4{sn} >= 1 ? bottom




*/