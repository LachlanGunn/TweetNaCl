all: tweetnacl.so

tweetnacl.so: randombytes.c tweetnacl.c tweetnacl.h
	gcc -shared -fPIC -Wall -Werror -pedantic -std=c99 -m64 -o libtweetnacl.so randombytes.c tweetnacl.c tweetnacl_params.c

