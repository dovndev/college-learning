CC = clang
CFLAGS = -O3 -s WASM=1
SRC = src/main.c
OUT = wasm/main.wasm

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OUT)