#include<unistd.h>

void ft_rush(int x, int y)
{
    int l;
    int c;

    l = 1;
    while(l <= y)
    {
        c = 1;
        while(c <= x)
        {
            if (l == y && c == 1)
                write(1, "A", 1);
            else if (l == y && c == x)
                write(1, "B", 1);
            else if (l == 1 && (c == 1 || c == x))
                write(1, "C", 1);
            else if ((l == 1 || l == y) || (c == 1 || c == x))
                write(1, "B", 1);
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
        ft_rush(5,3);
        return(0);
}
