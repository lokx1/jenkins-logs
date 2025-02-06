#include <stdio.h>
#include <unistd.h>
#include <assert.h>
#include "p40.c"
void test_pipe()
{
    int pipefd[2];
    char buffer[5];
    assert(pipe(pipefd) != -1); 
    assert(strcmp("hello", buffer) == 0); 
}
void test_boundary_values()
{
    int pipefd[2];
    char buffer[5];
    assert(pipe(pipefd) != -1); 
    assert(strcmp("hello", buffer) == 0); 
}
void test_epsilon()
{
    int pipefd[2];
    char buffer[5];
    assert(pipe(pipefd) != -1); 
    assert(strcmp("hello", buffer) == 0); 
}
int main(void)
{
    return 0;
}