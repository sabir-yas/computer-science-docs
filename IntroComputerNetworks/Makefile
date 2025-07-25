# Makefile for DHCP client

CC = gcc
CFLAGS = -Wall -g
TARGET = client
SOURCE = client.c

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCE)

clean:
	rm -f $(TARGET)

.PHONY: clean