/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmorel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 18:59:04 by tmorel            #+#    #+#             */
/*   Updated: 2023/03/04 19:10:33 by tmorel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_deb(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('/');
		}
		else if (i == x)
		{
			ft_putchar(92);
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void	print_ver(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if ((i == 1) || (i == x))
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
		i++;
	}
}

void	print_fin(int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(92);
		}
		else if (i == x)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			print_deb(x);
		}
		else if (i == y)
		{
			print_fin(x);
		}
		else
		{
			print_ver(x);
		}
		ft_putchar(10);
		i++;
	}
}
