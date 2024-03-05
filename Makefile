all: ./a.out

compRun:
	g++ *.cpp  -o r.out

compTest:
	g++ test.cpp -o a.out

test: clean compTest; ./a.out

run: clean compRun; ./r.out

clean:
	rm -f *.out
