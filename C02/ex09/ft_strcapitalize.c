/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnemeth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:02:03 by nnemeth           #+#    #+#             */
/*   Updated: 2021/09/14 17:13:39 by nnemeth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*make_small(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 91 && str[i] <= 96)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (*str);
}

char	characters(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 123 && str[i] <= 126)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (*str);
}

char	otherchar(char *str)
{
	int	j;

	j = 0;
	while (str[j])
	{
		if (str[j] >= 58 && str[j] <= 64)
		{
			if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
				str[j + 1] = str[j + 1] - 32;
		}
		j++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	make_small(str);
	alpha (str);
	characters(str);
	otherchar(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (str[i] <= 47 && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
/*int main ()
{
	char str[] = "salut, comment tu vas ? 42mots @quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(str));
}*/
