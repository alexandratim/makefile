all: menu.c min.o max.o diff.o sum.o
^Igcc menu.c abs_min.o abs_max.o diff.o sum.o -o menu
min.o: abs_min.c
^Igcc -c abs_min.c -o abs_min.o
max.o: abs_max.c
^Igcc -c abs_max.c -o abs_max.o
diff.o: diff.c
^Igcc -c diff.c -o diff.o
sum.o: sum.c
^Igcc -c sum.c -o sum.o
clean:
^Irm -rf *.o menu
