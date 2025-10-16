int	ipssi_atoi(char *str)
{
	int	i;
	int	nbr_moins;
	int	signe;
	int	conv;

	i = 0;
	nbr_moins = 0;
	conv = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\r'
        || str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
        		i++;
		if (str[i] == '+')
			i++;
		if (str[i] == '-')
		{	nbr_moins += 1;
			i++;
		}
		conv = conv *10 + (str[i] + '0');
		return (conv);
	}

	if (nbr_moins % 2 != 0)
		signe = -1;

	return (signe);
        i++;	
}	
