all: main main2
mainobjs = main.o dot.o matvec.o matmat.o fillrand.o checkres.o
main2objs = main2.o dot.o matvec.o matmat.o fillrand.o checkres.o
main: $(mainobjs)
	$(CC) -o main $?
main2: $(main2objs)
	$(CC) -o main2 $?
clean:
	rm *.o main main2
