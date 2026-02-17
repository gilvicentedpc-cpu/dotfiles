void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		
        write (1, &str[i], 1);// 1. O comando para imprimir a letra da gaveta 'i'
	    i++;
		// 2. O comando para ir para a próxima gaveta
     }
}

