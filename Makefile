# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -g

# Find all .c files
SRCS = $(wildcard *.c)

# Default target
.PHONY: all clean run

# Build target for specific .c file
%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)

# Manually specify libraries that you commonly use
LIBS = -lm  # Add any other libraries you need here

# Run target
run: all
	./$^

# Clean target
clean:
	rm -f $(SRCS:.c=)

