SRC_DIR=src
OUT_DIR=build

buildMain: $(SRC_DIR)/*.c
	gcc -o $(OUT_DIR)/runme $(SRC_DIR)/*.c -I .