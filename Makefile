build:
	clang src.c -mllvm -print-before-all 2> dump.txt
	python3 splitter.py
clean:
	rm dump.txt 
	rm *.out
	rm llir*
