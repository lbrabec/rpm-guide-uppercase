CC = gcc
PREFIX = /usr/local
BINDIR = $(PREFIX)/bin

all: app

app: main.c
	$(CC) $(CFLAGS) -std=c99 -o uppercase main.c

install: myapp
	install -D -m 0755 uppercase $(DESTDIR)$(BINDIR)/uppercase

clean:
	rm -f uppercase

.PHONY: all install clean

