OCAMLRUNPARAM=b  ./main.exe tests/robust/perso/continuous.c -domain polyhedra -ordinals 3 -robust tests/robust/perso/continuous.txt  > tests/robust/perso/continuous_out.txt
OCAMLRUNPARAM=b  ./main.exe tests/robust/perso/dummy.c -domain polyhedra -ordinals 3 -robust tests/robust/perso/dummy.txt  > tests/robust/perso/dummy_out.txt
OCAMLRUNPARAM=b  ./main.exe tests/robust/perso/isz1.c -domain polyhedra -ordinals 3 -robust tests/robust/perso/isz1.txt  > tests/robust/perso/isz1_out.txt
OCAMLRUNPARAM=b  ./main.exe tests/robust/perso/isz2.c -domain polyhedra -ordinals 3 -robust tests/robust/perso/isz1.txt  > tests/robust/perso/isz2_out.txt
OCAMLRUNPARAM=b  ./main.exe tests/robust/perso/my_sum.c -domain polyhedra -ordinals 3 -robust tests/robust/perso/my_sum.txt  > tests/robust/perso/mysum_out.txt