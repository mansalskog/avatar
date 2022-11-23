#include <stdio.h>
#include <stdlib.h>
int main(int c, char **a) {
    char *l[] = {
        "#include <stdio.h>",
        "#include <stdlib.h>",
        "int main(int c, char **a) {",
        "    char *l[] = {",
        "    };",
        "    char m[] = {'w', 'b', 0};",
        "    char s[] = {'P', '6', ' ', '%', 'd', ' ', '%', 'd', ' ', '%', 'd', 0};",
        "    char *t;",
        "    int i, j, k, M = 23, N = sizeof l / sizeof *l;",
        "    if (c < 2) return 0;",
        "    freopen(a[1], m, stdout);",
        "    printf(s, M, M, 255);",
        "    puts(m + 2);",
        "    for (i = 0; i < N; i++) {",
        "        if (i == 4) for (j = 0; j < N; j++) {",
        "            for (k = 0; k < 8; k++) putchar(' ');",
        "            putchar('\\\"');",
        "            for (t = l[j]; *t; t++) {",
        "                if (*t == '\\\"' || *t == '\\\\') putchar('\\\\');",
        "                putchar(*t);",
        "            }",
        "            puts(j < N - 1 ? \"\\\",\" : \"\\\"\");",
        "        }",
        "        puts(l[i]);",
        "    }",
        "    fclose(stdout);",
        "    return 0;",
        "}      "
    };
    char m[] = {'w', 'b', 0};
    char s[] = {'P', '6', ' ', '%', 'd', ' ', '%', 'd', ' ', '%', 'd', 0};
    char *t;
    int i, j, k, M = 23, N = sizeof l / sizeof *l;
    if (c < 2) return 0;
    freopen(a[1], m, stdout);
    printf(s, M, M, 255);
    puts(m + 2);
    for (i = 0; i < N; i++) {
        if (i == 4) for (j = 0; j < N; j++) {
            for (k = 0; k < 8; k++) putchar(' ');
            putchar('\"');
            for (t = l[j]; *t; t++) {
                if (*t == '\"' || *t == '\\') putchar('\\');
                putchar(*t);
            }
            puts(j < N - 1 ? "\"," : "\"");
        }
        puts(l[i]);
    }
    fclose(stdout);
    return 0;
}      
