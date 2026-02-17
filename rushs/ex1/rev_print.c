#include <unistd.h>

void	ft_rev_print(char *str)
{
	int	i;

	i = 0;
	// Primeiro while: Só para levar o i até o muro (\0)
	while (str[i] != '\0')
	{
		i++;
	}
	// Aqui, se a palavra for "GIL", o i vale 3.
	
	i--; // O i agora passa a valer 2 (A gaveta do 'L')

	// Segundo while: Agora ele vem diminuindo e gritando (write)
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
}

int	main(void)
{
	ft_rev_print("GIL"); // Chama sua função
	write(1, "\n", 1);    // Pula uma linha no final para ficar bonito
	return (0);
}

