int main() {
    int i;
    int j;
    int a;
    int b;
    int flag = ?;
    a = 0;
    b = 0;
    j = 1;
    if (flag) {
        i = 0;
    } else {
        i = 1;
    }

    while (?) {
        a++;
        b += (j - i);
        i += 2;
        if (i%2 == 0) {
            j += 2;
        } else {
            j++;
        }
    }


    return 0;
}

/*
    __VERIFIER_assert(a == b);

[7:]:
-$6{flag} >= 1 && -$5{b} >= 1 && -$4{a}+$5{b} >= 1 ? 2
-$6{flag} >= 1 && -$4{a} >= 1 && -$4{a}+$5{b} == 0 ? 0.
$4{a}-$5{b} >= 1 && -$6{flag} >= 1 && -$5{b} >= 1 ? 2
-$6{flag} >= 1 && -$4{a} >= 1 && $5{b} == 0 ? 1
-$6{flag} >= 1 && $4{a} == 0 && $5{b} == 0 ? 0.
$4{a} >= 1 && -$6{flag} >= 1 && $5{b} == 0 ? 1
$5{b} >= 1 && -$6{flag} >= 1 && -$4{a}+$5{b} >= 1 ? 2
$4{a} >= 1 && -$6{flag} >= 1 && -$4{a}+$5{b} == 0 ? 0.
$4{a}-$5{b} >= 1 && $5{b} >= 1 && -$6{flag} >= 1 ? 2
-$5{b} >= 1 && -$4{a}+$5{b} >= 1 && $6{flag} == 0 ? 2
-$4{a} >= 1 && $6{flag} == 0 && -$4{a}+$5{b} == 0 ? 0.
$4{a}-$5{b} >= 1 && -$5{b} >= 1 && $6{flag} == 0 ? 2
-$4{a} >= 1 && $5{b} == 0 && $6{flag} == 0 ? 1
$4{a} == 0 && $5{b} == 0 && $6{flag} == 0 ? 0.
$4{a} >= 1 && $5{b} == 0 && $6{flag} == 0 ? 1
$5{b} >= 1 && -$4{a}+$5{b} >= 1 && $6{flag} == 0 ? 2
$4{a} >= 1 && $6{flag} == 0 && -$4{a}+$5{b} == 0 ? 0.
$4{a}-$5{b} >= 1 && $5{b} >= 1 && $6{flag} == 0 ? 2
$6{flag} >= 1 && -$5{b} >= 1 && -$4{a}+$5{b} >= 1 ? 2
$6{flag} >= 1 && -$4{a} >= 1 && -$4{a}+$5{b} == 0 ? 0.
$4{a}-$5{b} >= 1 && $6{flag} >= 1 && -$5{b} >= 1 ? 2
$6{flag} >= 1 && -$4{a} >= 1 && $5{b} == 0 ? 1
$6{flag} >= 1 && $4{a} == 0 && $5{b} == 0 ? 0.
$4{a} >= 1 && $6{flag} >= 1 && $5{b} == 0 ? 1
$5{b} >= 1 && $6{flag} >= 1 && -$4{a}+$5{b} >= 1 ? 2
$4{a} >= 1 && $6{flag} >= 1 && -$4{a}+$5{b} == 0 ? 0.
$4{a}-$5{b} >= 1 && $5{b} >= 1 && $6{flag} >= 1 ? 2

*/
