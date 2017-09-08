CF = gcc -Wall -Werror

OBJ_DIR = build/src
SRC_DIR = src

EXE = bin/calc
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))
DEP = $(OBJ:.o=.d)

-include $(DEP)

.PHONY: all clean


all: build/ $(OBJ_DIR) bin/ $(EXE) $(SRC)

build/ $(OBJ_DIR) bin/:
	mkdir $@

$(EXE): $(OBJ)
	$(CF) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CF) $^ -c -o $@ 
	$(CF) $^ -MM > $(OBJ_DIR)/$*.d 

clean:
	rm -rf build bin
