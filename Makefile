CC=gcc
CFLAGS=-Wall -Wextra -O2
CFLAGS_DEBUG=-Wall -Wextra -g -O0
SRC=main.c calendar.c
TARGET=build/main


all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p build
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

debug: $(SRC)
	mkdir -p build
	$(CC) $(CFLAGS_DEBUG) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) *.o
	rm -rf $(PDF_DIR)/build

.PHONY: all run clean debug