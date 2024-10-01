/*Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

int main(int ac, char **av) {
    int i = 0;
    int end;
    int start;

    if (ac == 2) {
        while (av[1][i]) {
            i++;
        }
        while (i > 0 && (av[1][i - 1] == ' ' || av[1][i - 1] == '\t')) {
            i--;
        }
        end = i;
        while (i > 0 && (av[1][i - 1] != ' ' && av[1][i - 1] != '\t')) {
            i--;
        }
        start = i;
        while (start < end) {
            write(1, &av[1][start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}