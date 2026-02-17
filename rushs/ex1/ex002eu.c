#include <unistd.h>

/* 1. Criamos a ferramenta de imprimir (Obrigatório vir antes) */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* 2. Criamos a sua lógica de transformar em ponto */
void	ft_point_str(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = '.';       /* Troca a letra por ponto */
		ft_putchar(str[i]); /* Usa a ferramenta que criamos acima */
		i++;
	}
}

/* 3. O Botão de ligar (main) */
int	main(void)
{
	char	palavra[] = "GIL";

	ft_point_str(palavra);
	ft_putchar('\n');
	return (0);
}

