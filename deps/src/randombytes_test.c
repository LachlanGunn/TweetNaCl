#include <stdio.h>
#include <string.h>

#define LEN_TEST 8

extern int  init_randombytes();
extern void cleanup_randombytes();
extern void randombytes(unsigned char* dest, long long int length);

void print_buffer(unsigned char* randomness)
{
    int i;
    for(i = 0; i < LEN_TEST-1; i++)
    {
	printf("%02X ", randomness[i]);
    }
    printf("%02X\n", randomness[LEN_TEST-1]);
}

int main(int argc, char** argv)
{
    unsigned char randomness[LEN_TEST];
    int retval = init_randombytes();

    memset(randomness, 0, LEN_TEST);
    print_buffer(randomness);

    randombytes(randomness, LEN_TEST);
    print_buffer(randomness);

    cleanup_randombytes();
    return 0;
}
