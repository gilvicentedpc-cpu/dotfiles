#include <unistd.h>

void ft_rush(int x, int y)
{
    int l;
    int c;

    l = 1;

    while (l <= y)
    {
        c = 1;
        while (c <= x)
        {
            // 1. Cantos da Esquerda (Superior e Inferior)
            if ((l == 1 && c == 1) || (l == y && c == 1))
                write(1, "A", 1);
            // 2. Cantos da Direita (Superior e Inferior)
            else if ((l == 1 && c == x) || (l == y && c == x))
                write(1, "C", 1);
            // 3. O resto das bordas (onde não é canto)
            else if (l == 1 || l == y || c == 1 || c == x)
                write(1, "B", 1);
            // 4. O miolo vazio
            else
                write(1, " ", 1);
            c++;
        }
        write(1, "\n", 1);
        l++;
    }
}

int main(void)
{
    ft_rush(5, 3);
    return (0);
}

