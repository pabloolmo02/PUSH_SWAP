/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmo-lo <polmo-lo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 18:37:07 by polmo-lo          #+#    #+#             */
/*   Updated: 2024/11/14 18:54:08 by polmo-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int isnum(const char *str)
{
	int	i;
	
	i = 0;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i])
	{
		if(str[i] < '0' || str[i] > '9')
			printf("Invalid arguments");
			return 0;
		i++;
	}
	return 1;
}

int check_range(long num) {
    if(num < INT_MIN || num > INT_MAX) {
        return 0;
		printf("out of range");
    }
    return 1;
}

int check_duplicates(int *numbers, int size)
{
	int	i;
	int	j;

	i = 1;
	while(j < i -1)
		if(numbers[j] == numbers[i -1])
		{
			printf("Numeros duplicaus");
			free(numbers);
			return NULL;
		}
}
int *parse(int argc, char **argv, t_stack *data)
{
	int		*numbers;
	int		i;
	long	num;
	
	i = 1;
	numbers = malloc((argc -1) * sizeof(int));
	if(!numbers)
		return NULL;
	while(i < argc)
	{
			if(isnum(argv[i]) == 0)
			{
				free(numbers);
				return (0);
			}
			num = atol(argv[i]);
			if(check_range(num) == 0)
			{
				free(numbers);
				return NULL;
			}
			numbers[i-1] = (int)num;
			i++;
			
	}
}
