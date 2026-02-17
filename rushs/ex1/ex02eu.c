#include <unistd.h>

void	ft_point_str(char *str)
{
	int	i;

	i = 0;
	// Enquanto a gaveta não for o muro (\0)
	while (str[i] != '\0')
	{
		// 1. A GAVETA 'i' RECEBE O CARACTERE '.'
		str[i] = '.'; 
		
		// 2. O WRITE MOSTRA O QUE TEM NA GAVETA AGORA
		write(1, &str[i], 1);
		
		// 3. PULA PARA A PRÓXIMA
		i++;
	}
}

int	main(void)
{
	// Criamos um array (cômoda) com a palavra
	char	minha_comoda[] = "ESCOLA";

	ft_point_str(minha_comoda);
	write(1, "\n", 1);
	return (0);
}


