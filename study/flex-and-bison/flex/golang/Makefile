CC = gcc
OUT = tcc
OBJ = lex.yy.o fb1-5.o
SCANNER = fb1-5.l
PARSER = fb1-5.y

build: $(OUT)

run: $(OUT)
	./$(OUT) < test.c > test.asm

clean:
	rm -f *.o lex.yy.c fb1-5.tab.c fb1-5.tab.h y.output $(OUT)

$(OUT): $(OBJ)
	$(CC) -o $(OUT) $(OBJ) -ll

lex.yy.c: $(SCANNER) fb1-5.tab.c
	flex $<

fb1-5.tab.c: $(PARSER)
	bison -vdty $<
