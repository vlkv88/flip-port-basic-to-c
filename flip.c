#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// RANDOM
float rnd(float max)
{
    //srand(time(NULL));
    return (float)rand() / ((float)RAND_MAX);
}

// TABS
void tabs(int tabs)
{
    for (int i = 0; i < tabs; i++)
    {
        printf(" ");
    }
}

int main()
{
    float F1, F2, P[16], X[4], Z1, Z2;
    int I9, S1, S2, B1, B2, Z3, Z5;
    char T[5], A, H[5];
    tabs(25);
    printf("FLIP\n");
    tabs(18);
    printf("CREATIVE COMPUTING\n");
    tabs(16);
    printf("MORRISTOWN NEW JERSEY\n\n\n");
    B1 = 50;
    printf("EXPLANATION (Y OR N)");
    scanf("%s", T);
    if (strcmp(T, "Y") == 0)
    {
        printf("ON EACH TURN, YOU GUESS YES <'Y'> OR NO <'N'>.\n");
        printf("ONLY ONE IS CORRECT, AND THE PROGRAM HAS DECIDED\n");
        printf("WHICH ONE, BEFORE YOU MAKE YOUR GUESS. AT FIRST\n");
        printf("YOUR ODDS ARE 50%, PURE CHANCE. BUT LATER THE\n");
        printf("PROGRAM WILL TRY TO TAKE ADVANTAGE OF PATTERNS\n");
        printf("IN YOUR GUESSING.\n\n");
        printf("GAME ENDS AFTER %d TURNS; A SCORE OF ", B1);
        B2 = B1 / 2 - 1;
        printf("%d OR MORE\nIS GOOD. PROGRAM TELLS WHEN YOU WIN A TURN,\n", B2);
        printf("BY TYPING AN ASTERISK ('*') AS THE FIRST\n");
        printf("CHARACTER OF THE FOLLOWING LINE.\n\n\n");
    }
    else
    {
        goto n180;
    }

n180:
    P[16];
    X[4];

n240:
    printf("BEGIN\n");
    for (int I = 0; I < 16; I++)
    {
        P[I] = 0.5;
    }
    for (int I = 0; I < 4; I++)
    {
        X[I] = 0;
        if (rnd(1) < 0.5)
        {
            goto n320;
        }
        X[I] = 1;

    n320:
        continue;
    }

    F1 = 0.8;
    F2 = 0.3;
    S1 = 0;
    S2 = 0;
    A = ' ';

n380:
    I9 = 8 * X[3] + 4 * X[2] + 2 * X[1] + X[0] + 1;
    Z1 = P[I9];
    Z2 = Z1;
    if (Z2 != 0.5)
    {
        goto n480;
    }

    Z2 = rnd(1);
    goto n520;

n480:
    if (Z2 > 0.5)
    {
        goto n510;
    }

    Z2 = Z2 * F2 + 0 * (1 - F2);
    goto n520;

n510:
    Z2 = Z2 * F2 + 1 * (1 - F2);

n520:
    Z5 = 0;
    if (rnd(1) < Z2)
    {
        goto n560;
    }

    Z5 = 1;

n560:
    printf("%c", A);

    Z3 = 0;
n600:
    scanf("%s", H);
    if (strcmp(H, "Y") == 0)
    {
        goto n650;
    }
    else if (strcmp(H, "N") == 0)
    {
        goto n660;
    }
    else
    {
        printf("ERROR, MUST BE  Y  OR  N  .\n ");
        goto n600;
    }

n650:
    Z3 = 1;

n660:
    A = ' ';
    S2 = S2 + 1;
    if (Z3 != Z5)
    {
        goto n710;
    }

    A = '*';
    S1 = S1 + 1;

n710:
    X[0] = X[2];

    X[1] = X[3];

    X[2] = Z3;

    X[3] = Z5;

    P[I9] = F1 * P[I9] * (1 - F1) * X[2];
    if (S2 < B1)
    {
        goto n380;
    }
    printf("%c", A);
    printf("END OF GAME.");
    printf("YOU GOT %d OUT OF %d CORRECT.\n\n", S1, S2);
    printf("PLAY AGAIN (Y OR N)");
    scanf("%s", T);
    if (strcmp(T, "Y") == 0)
    {
        goto n240;
    }
    else
    {
        return 0;
    }
}