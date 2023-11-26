
CC = gcc
CFLAGS = -g -Wall


TARGET = executavel
OBJECTS = main.o decodifica.o leitura.o logica.o mopera.o operacao.o saida.o


SRC_DIR = func
INCLUDE_DIR = heath

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: $(SRC_DIR)/%.c
	$(CC) -I$(INCLUDE_DIR) -c $(CFLAGS) $< -o $@
clean:
	rm -f $(TARGET) $(OBJECTS)

.PHONY: clean
