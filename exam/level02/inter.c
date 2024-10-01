/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.

The display will be followed by a \n.

If the number of arguments is not 2, the program displays \n.

Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/

#include <unistd.h>

int check_double(char *str, char c, int pos) {
    int i = 0;
    while (i < pos) {
        if (str[i] == c) {
            return (1);
        }
        i++;
    }
    return (0);
}

int main(int argc, char **argv) {
    int i;
    int j;

    if (argc == 3) {
        i = 0;
        while (argv[1][i]) {
            if (!check_double(argv[1], argv[1][i], i)) {
                j = 0;
                while (argv[2][j]) {
                    if (argv[1][i] == argv[2][j]) {
                        write(1, &argv[1][i], 1);
                        break;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}