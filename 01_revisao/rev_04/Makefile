all: geraos main executa

geraos:
	gcc *.c -c

main:
	gcc *.o -o main

executa: test1 test2 test3 test4 test5 test6 diff1 diff2 diff3 diff4 diff5 diff6

test1:
	./main <input/test_1 >out1

test2:
	./main <input/test_2 >out2

test3:
	./main <input/test_3 >out3

test4:
	./main <input/test_4 >out4

test5:
	./main <input/test_5 >out5

test6:
	./main <input/test_6 >out6

diff1:
	diff output/test_1 out1

diff2:
	diff output/test_2 out2

diff3:
	diff output/test_3 out3

diff4:
	diff output/test_4 out4

diff5:
	diff output/test_5 out5

diff6:
	diff output/test_6 out6