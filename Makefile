CC := cc
CFLAGS := -Wall -Ofast

SRC_DIR := ./src
BUILD_DIR := ./build
FRONT_DIR := ./front

EXEC_NAME := UniXPActivate

EMCC := emcc

all:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.c $(SRC_DIR)/xp_activate32.c -o $(BUILD_DIR)/$(EXEC_NAME)

.PHONY: clean
clean:
	rm $(BUILD_DIR)/*
