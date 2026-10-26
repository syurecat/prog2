CC := gcc
CFLAGS := -Wall -Wextra

SOURCES := $(wildcard *.c)
TARGETS := $(SOURCES:.c=.out)

.PHONY: all clean

all: $(TARGETS)

%.out: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)