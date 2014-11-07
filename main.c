/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:07:21 by jchichep          #+#    #+#             */
/*   Updated: 2014/11/07 18:43:39 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include "test.h"

int main()
{
	if (FT_PUTSTR == true)
	{
		pid_t   pid;
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "1", NULL);
		}
	}
	if (FT_PUTCHAR == true)
	{
		pid_t   pid;
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "2", NULL);
		}
	}
	if (FT_PUTNBR == true)
	{
		pid_t   pid;
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "3", NULL);
		}
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "4", NULL);
		}
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "5", NULL);
		}
	}
	if (FT_PUTENDL == true)
	{
		pid_t   pid;
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "6", NULL);
		}
	}
	if (FT_PUTSTR_FD == true)
	{
		pid_t   pid;
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "7", NULL);
		}
	}
	if (FT_PUTCHAR_FD == true)
	{
		pid_t   pid;
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "8", NULL);
		}
	}
	if (FT_PUTNBR_FD == true)
	{
		pid_t   pid;
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "9", NULL);
		}
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "10", NULL);
		}
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "11", NULL);
		}
	}
	if (FT_PUTENDL_FD == true)
	{
		pid_t   pid;
		pid = fork ();
		if (pid > 0)
		{
			wait(NULL);
		}
		else
		{
			execl("test.sh", "test.sh", "12", NULL);
		}
	}
	if (FT_ATOI == true)
	{
		int nb1;
		int nb2;

		if ((nb1 = atoi("0")) == (nb2 = ft_atoi("0")))
			printf("ft_atoi [TEST = \"0\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"0\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("-2147483648")) == (nb2 = ft_atoi("-2147483648")))
			printf("ft_atoi [TEST = \"-2147483648\"] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"-2147483648\"] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("2147483647")) == (nb2 = ft_atoi("2147483647")))
			printf("ft_atoi [TEST = \"2147483647\"] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"2147483647\"] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("  42")) == (nb2 = ft_atoi("  42")))
			printf("ft_atoi [TEST = \"  42\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"  42\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t -42")) == (nb2 = ft_atoi("\t \t \t -42")))
			printf("ft_atoi [TEST = \"\\t \\t \\t -42\"] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t -42\"] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("42papa58")) == (nb2 = ft_atoi("42papa58")))
			printf("ft_atoi [TEST = \"42papa58\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"42papa58\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t -42papa58")) == (nb2 = ft_atoi("\t \t \t -42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t -42papa58\"] : \033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t -42papa58\"] : \033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
	}
}


