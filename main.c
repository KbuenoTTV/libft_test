/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:07:21 by jchichep          #+#    #+#             */
/*   Updated: 2014/11/08 16:01:37 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include "test.h"

char				*ft_strstr(const char *s1, const char *s2);

int main()
{
	printf("\n\033[31m---------------PARTIE OBLIGATOIRE----------------\033[0m\n");

	if (FT_ATOI == true)
	{
		int nb1;
		int nb2;

		printf("\n\033[33m\t\tFT_ATOI\033[0m\n");
		if ((nb1 = atoi("0")) == (nb2 = ft_atoi("0")))
			printf("ft_atoi [TEST = \"0\"] :  \033[32m\t\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"0\"] :  \033[31m\t\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("-2147483648")) == (nb2 = ft_atoi("-2147483648")))
			printf("ft_atoi [TEST = \"-2147483648\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"-2147483648\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("2147483647")) == (nb2 = ft_atoi("2147483647")))
			printf("ft_atoi [TEST = \"2147483647\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"2147483647\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("  42")) == (nb2 = ft_atoi("  42")))
			printf("ft_atoi [TEST = \"  42\"] :  \033[32m\t\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"  42\"] :  \033[31m\t\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t -42")) == (nb2 = ft_atoi("\t \t \t -42")))
			printf("ft_atoi [TEST = \"\\t \\t \\t -42\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t -42\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("42papa58")) == (nb2 = ft_atoi("42papa58")))
			printf("ft_atoi [TEST = \"42papa58\"] :  \033[32m\t\t\t Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"42papa58\"] :  \033[31m\t\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t -42papa58")) == (nb2 = ft_atoi("\t \t \t -42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t -42papa58\"] : \t\033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t -42papa58\"] : \t\033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t +42papa58")) == (nb2 = ft_atoi("\t\t \t\t \t\t +42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t +42papa58\"] : \t\033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t +42papa58\"] : \t\033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
	}
	if (FT_STRCMP == true)
	{
		int nb1;
		int nb2;
		printf("\n\033[33m\t\tFT_STRCMP\033[0m\n");
		if ((nb1 = strcmp("", "")) == (nb2 = ft_strcmp("", "")))
			printf("ft_strcmp.c [TEST = \"\", \"\"] :  \033[32m\t\t\t Correcte\033[0m\n");
		else
			printf("ft_strlen.c [TEST = \"\", \"\"] :  \033[31m\t\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = strcmp("abc", "cba")) == (nb2 = ft_strcmp("abc", "cba")))
			printf("ft_strcmp.c [TEST = \"abc\", \"cba\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"abc\", \"cba\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = strcmp("cba", "abc")) == (nb2 = ft_strcmp("cba", "abc")))
			printf("ft_strcmp.c [TEST = \"cba\", \"abc\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"cba\", \"abc\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = strcmp("cba", "cba0")) == (nb2 = ft_strcmp("cba", "cba0")))
			printf("ft_strcmp.c [TEST = \"cba\", \"cba0\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"cba\", \"cba0\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = strcmp("abcd", "abc")) == (nb2 = ft_strcmp("abcd", "abc")))
			printf("ft_strcmp.c [TEST = \"abcd\", \"abc\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"abcd\", \"abc\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
	}

	if (FT_STRLCAT == true)
	{
		char *str1;
		char *str2;
		char str3[] = "TEST";
		char str4[] = "TE";
		int ret1;
		int ret2;

		str1 = malloc(20);
		str2 = malloc(20);
		bzero(str1, 20);
		bzero(str2, 20);
		str1[4] = 'B';
		str2[4] = 'B';
		printf("\n\033[33m\t\tFT_STRLCAT\033[0m\n");
		if ((ret1 = strlcat(str1, str3, 4)) == (ret2 = ft_strlcat(str2, str3, 4)) && strcmp(str1, str2) == 0)
			printf("ft_strlcat.c [TEST = \"\\0\\0\\0\\0B\\0 \"TEST\", 4] :  \033[32m Correcte\033[0m\n");
		else
		{
			if (strcmp(str1, str2) != 0)
				printf("ft_strlcat.c [TEST = \"\\0\\0\\0\\0B\\0\", \"TEST\", 4] :  \033[31m Wrong\033[0m\nYour value %s, Good value %s\n", str2, str1);
			if (ret1 != ret2)
				printf("ft_strlcat.c [TEST = \"\\0\\0\\0\\0B\\0\", \"TEST\", 4] :  \033[31m Wrong\033[0m\nYour return %d, Good return %s\n", ret2, ret1);
		}
		bzero(str1, 20);
		bzero(str2, 20);
		strcpy(str1, str3);
		strcpy(str2, str3);
		if ((ret1 = strlcat(str1, str3, 4)) == (ret2 = ft_strlcat(str2, str3, 4)) && strcmp(str1, str2) == 0)
			printf("ft_strlcat.c [TEST = \"TE\" \"TEST\", 4] :  \t\033[32m Correcte\033[0m\n");
		else
		{
			if (strcmp(str1, str2) != 0)
				printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 4] :  \t\033[31m Wrong\033[0m\nYour value %s, Good value %s\n", str2, str1);
			if (ret1 != ret2)
				printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 4] :  \t\033[31m Wrong\033[0m\nYour return %d, Good return %s\n", ret2, ret1);
		}
		bzero(str1, 20);
		bzero(str2, 20);
		strcpy(str1, str3);
		strcpy(str2, str3);
		if ((ret1 = strlcat(str1, str3, 2)) == (ret2 = ft_strlcat(str2, str3, 2)) && strcmp(str1, str2) == 0)
			printf("ft_strlcat.c [TEST = \"TE\" \"TEST\", 2] :  \t\033[32m Correcte\033[0m\n");
		else
		{
			if (strcmp(str1, str2) != 0)
				printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 2] :  \t\033[31m Wrong\033[0m\nYour value %s, Good value %s\n", str2, str1);
			if (ret1 != ret2)
				printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 2] :  \t\033[31m Wrong\033[0m\nYour return %d, Good return %s\n", ret2, ret1);
		}
		bzero(str1, 20);
		bzero(str2, 20);
		strcpy(str1, str3);
		strcpy(str2, str3);
		if ((ret1 = strlcat(str1, str3, 9)) == (ret2 = ft_strlcat(str2, str3, 9)) && strcmp(str1, str2) == 0)
			printf("ft_strlcat.c [TEST = \"TE\" \"TEST\", 9] :  \t\033[32m Correcte\033[0m\n");
		else
		{
			if (strcmp(str1, str2) != 0)
				printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 9] :  \t\033[31m Wrong\033[0m\nYour value %s, Good value %s\n", str2, str1);
			if (ret1 != ret2)
				printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 9] :  \t\033[31m Wrong\033[0m\nYour return %d, Good return %s\n", ret2, ret1);
		}

	}

	if (FT_STRLEN == true)
	{
		int nb1;
		int nb2;
		printf("\n\033[33m\t\tFT_STRLEN\033[0m\n");
		if ((nb1 = strlen("")) == (nb2 = ft_strlen("")))
			printf("ft_strlen.c [TEST = \"\"] :  \033[32m\t\t\t Correcte\033[0m\n");
		else
			printf("ft_strlen.c [TEST = \"\"] :  \033[31m\t\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = strlen("Hello World")) == (nb2 = ft_strlen("Hello World")))
			printf("ft_strlen.c [TEST = \"Hello World\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strlen.c [TEST = \"Hello World\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
	}
	if (FT_STRSTR == true)
	{
		char str1[] = "";
		char str2[] = "";
		char str3[] = "TEST";
		char str4[] = "TE";
		char *res1;
		char *res2;

		printf("\n\033[33m\t\tFT_STRSTR\033[0m\n");
		if ((res1 = strstr(str1, str2)) == (res2 = ft_strstr(str1, str2)))
			printf("ft_strstr.c [TEST = \"\", \"\"] :  \033[32m\t\t\t Correcte\033[0m\n");
		else
			printf("ft_strstr.c [TEST = \"\", \"\"] :  \033[31m\t\t\t Wrong\033[0m\nYour value %s, Good value %s\n", res2, res1);
		if ((res1 = strstr(str3, str4)) == (res2 = ft_strstr(str3, str4)))
			printf("ft_strstr.c [TEST = \"TEST\", \"TE\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strstr.c [TEST = \"TEST\", \"TE\"] :  \033[31m\t\t Wrong\033[0m\nYour value %s, Good value %s\n", res2, res1);
		if ((res1 = strstr(str4, str3)) == (res2 = ft_strstr(str4, str3)))
			printf("ft_strstr.c [TEST = \"TE\", \"TEST\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strstr.c [TEST = \"TE\", \"TEST\"] :  \033[31m\t\t Wrong\033[0m\nYour value %s, Good value %s\n", res2, res1);
		if ((res1 = strstr(str1, str3)) == (res2 = ft_strstr(str1, str3)))
			printf("ft_strstr.c [TEST = \"\", \"TEST\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strstr.c [TEST = \"\", \"TEST\"] :  \033[31m\t\t Wrong\033[0m\nYour value %s, Good value %s\n", res2, res1);
		if ((res1 = strstr(str3, str1)) == (res2 = ft_strstr(str3, str1)))
			printf("ft_strstr.c [TEST = \"TEST\", \"\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strstr.c [TEST = \"TEST\", \"\"] :  \033[31m\t\t Wrong\033[0m\nYour value %s, Good value %s\n", res2, res1);
	}


	printf("\n\033[31m--------------PARTIE SUPPLEMENTAIRE--------------\033[0m\n");

	if (FT_PUTSTR == true)
	{
		printf("\n\033[33m\t\tFT_PUTSTR\033[0m\n");
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
		printf("\n\033[33m\t\tFT_PUTCHAR\033[0m\n");
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
		printf("\n\033[33m\t\tFT_PUTNBR\033[0m\n");
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
		printf("\n\033[33m\t\tFT_PUTENDL\033[0m\n");
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
		printf("\n\033[33m\t\tFT_PUTSTR_FD\033[0m\n");
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
		printf("\n\033[33m\t\tFT_PUTCHAR_FD\033[0m\n");
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
		printf("\n\033[33m\t\tFT_PUTNBR_FD\033[0m\n");
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
		printf("\n\033[33m\t\tFT_PUTENDL_FD\033[0m\n");
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
}


