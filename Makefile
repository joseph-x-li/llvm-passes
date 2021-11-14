build:
	clang src.c -mllvm -print-before-all 2> dump.txt
clean:
	rm dump.txt 
	rm *.out
	rm llir*
