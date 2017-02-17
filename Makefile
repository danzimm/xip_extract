CC=clang
CFLAGS=-Wall -Werror -isystem Headers
LDFLAGS=-framework Foundation -framework PackageKit -F/System/Library/PrivateFrameworks/

all: xip_extract

xip_extract: xip_extract.m.o
	$(CC) $^ -o $@ $(CFLAGS) $(LDFLAGS)

%.m.o: %.m
	$(CC) -c $< -o $@ $(CFLAGS)

