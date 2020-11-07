CC = gcc
OUT = tcc
OBJ = lex.yy.o fb3-1.o
SCANNER = fb3-1.l
PARSER = fb3-1.y

build: $(OUT)

run: $(OUT)
	./$(OUT) < test.c > test.asm

clean:
	rm -f *.o lex.yy.c y.tab.c y.tab.h y.output $(OUT)

$(OUT): $(OBJ) fb3-1funcs.c
	$(CC) -o $(OUT) $(OBJ) -ll

lex.yy.c: $(SCANNER) y.tab.c fb3-1funcs.c
	flex $<

y.tab.c: $(PARSER) fb3-1funcs.c
	bison -vdty $<
