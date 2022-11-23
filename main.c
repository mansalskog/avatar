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
        "    char t[] = {'%', '8', 's', 34, '%', 's', 34, ',', 0};",
        "    int i, j, M = 23, N = sizeof l / sizeof *l;",
        "    if (c < 2) return 0;",
        "    freopen(a[1], m, stdout);",
        "    printf(s, M, M, 255);",
        "    puts(m + 2);",
        "    for (i = 0; i < N; i++) {",
        "        if (i == 4) for (j = 0; j < N; j++) {",
        "            if (j == N - 1) t[7] = 0;",
        "            printf(t, m + 2, l[j]);",
        "            puts(m + 2);",
        "        }",
        "        puts(l[i]);",
        "    }",
        "    fclose(stdout);",
        "    return 0;",
        "}              "
    };
    char m[] = {'w', 'b', 0};
    char s[] = {'P', '6', ' ', '%', 'd', ' ', '%', 'd', ' ', '%', 'd', 0};
    char t[] = {'%', '8', 's', 34, '%', 's', 34, ',', 0};
    int i, j, M = 23, N = sizeof l / sizeof *l;
    if (c < 2) return 0;
    freopen(a[1], m, stdout);
    printf(s, M, M, 255);
    puts(m + 2);
    for (i = 0; i < N; i++) {
        if (i == 4) for (j = 0; j < N; j++) {
            if (j == N - 1) t[7] = 0;
            printf(t, m + 2, l[j]);
            puts(m + 2);
        }
        puts(l[i]);
    }
    fclose(stdout);
    return 0;
}              
