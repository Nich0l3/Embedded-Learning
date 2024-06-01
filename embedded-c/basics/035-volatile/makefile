# Compiler and flags
CC = arm-none-eabi-gcc
CFLAGS = -mcpu=cortex-m4 -mthumb 

# source file
SRC = 035-volatile.c

# output file
ASM1 = $(SRC:.c=.s)
ASM2 = $(SRC:.c=-optimized.s)

# default target
all : $(ASM1) $(ASM2)

# compile the source file into assembly

$(ASM1): $(SRC)
	$(CC) $(CFLAGS) -S -o $@ $<

$(ASM2): $(SRC)
	$(CC) $(CFLAGS) -O1 -S -o $@ $<

# clean up generated files
clean :
	rm -f $(ASM1) $(ASM2)

