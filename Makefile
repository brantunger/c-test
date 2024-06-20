SRC_DIR=src
OUT_DIR=build

buildMain: $(SRC_DIR)/*.c $(SRC_DIR)/*.h
	if [ ! -d $(OUT_DIR) ]; then mkdir $(OUT_DIR); fi
	gcc -o $(OUT_DIR)/runme $(SRC_DIR)/*.c -I .

.PHONY: clean

clean:
	rm -rf $(OUT_DIR)