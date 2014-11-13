/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchichep <jchichep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 13:07:21 by jchichep          #+#    #+#             */
/*   Updated: 2014/11/13 19:36:45 by jchichep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "test.h"

char				*ft_strstr(const char *s1, const char *s2);
char				*ft_itoa(int n);

void ft_putinprintable(char *str, int len)
{
	int	i;

	i = -1;
	while (++i < len)
	{
		if (str[i] < ' ')
		{
			printf("\\%d", str[i]);
		}
		else
			printf("%c", str[i]);
	}
}

int main()
{
	printf("\n\033[31m---------------PARTIE OBLIGATOIRE----------------\033[0m\n");
	srand(time(NULL));
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
		if ((nb1 = atoi("\t \t \t -+42papa58")) == (nb2 = ft_atoi("\t\t \t\t \t\t -+42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t -+42papa58\"] : \t\033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t -+42papa58\"] : \t\033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t \n+42papa58")) == (nb2 = ft_atoi("\t\t \t\t \t\t \n+42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t \\n+42papa58\"] : \t\033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t \\n+42papa58\"] : \t\033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t \f+42papa58")) == (nb2 = ft_atoi("\t\t \t\t \t\t \f+42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t \\f+42papa58\"] : \t\033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t \\f+42papa58\"] : \t\033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t \v+42papa58")) == (nb2 = ft_atoi("\t\t \t\t \t\t \v+42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t \\v+42papa58\"] : \t\033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t \\v+42papa58\"] : \t\033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = atoi("\t \t \t \r+42papa58")) == (nb2 = ft_atoi("\t\t \t\t \t\t \r+42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t \\r+42papa58\"] : \t\033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t \\r+42papa58\"] : \t\033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);

		if ((nb1 = atoi("\t \t \t \b+42papa58")) == (nb2 = ft_atoi("\t\t \t\t \t\t \b+42papa58")))
			printf("ft_atoi [TEST = \"\\t \\t \\t \\b+42papa58\"] : \t\033[32m Correcte\033[0m\n");
		else
			printf("ft_atoi [TEST = \"\\t \\t \\t \\b+42papa58\"] : \t\033[31m Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		usleep(TIME);
	}
	if (FT_BZERO == true)
	{
		printf("\n\033[33m\t\tFT_BZERO\033[0m\n");
		char *str1;
		char *str2;
		int i = 0;
		str1 = strdup("0123456789");
		str2 = strdup("0123456789");
		bzero (str1, 5);
		ft_bzero (str2, 5);
		if (memcmp(str1, str2, 11) == 0)
			printf("ft_bzero.c [TEST = \"0123456789\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
		{
			printf("ft_bzero.c [TEST = \"0123456789\"] :  \033[31m\t\t Wrong\033[0m\nYour value ");
			ft_putinprintable(str2, 10);
			printf("Good value ");
			ft_putinprintable(str1, 10);
			printf("\n");
		}
		bzero (str1, 7);
		ft_bzero (str2, 7);
		if (memcmp(str1, str2, 11) == 0)
			printf("ft_bzero.c [TEST = \"\\0\\0\\0\\0\\056789\"] :  \033[32m\t Correcte\033[0m\n");
		else
		{
			printf("ft_bzero.c [TEST = \"\\0\\0\\0\\0\\056789\"] :  \033[31m\t Wrong\033[0m\nYour value ");
			ft_putinprintable(str2, 10);
			printf("Good value ");
			ft_putinprintable(str1, 10);
			printf("\n");
		}
	}

	if (FT_ISALNUM == true)
	{
		int nb1;
		int nb2;
		int i = -301;
		int error = false;
		printf("\n\033[33m\t\tFT_ISALNUM\033[0m\n");
		printf("TESTED VALUE ARE BEETWEEN -300 & 300\n");

		while (++i < 300)
		{
			if ((nb1 = isalnum(i)) != (nb2 = ft_isalnum(i)))
			{
				printf("ft_isalnum.c [TEST = '%d'] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", i, nb2, nb1);
				error = true;
			}

		}
		if (error == false)
			printf("ft_isalnum.c [TEST = -300 to 300] :  \033[32m\t\t Correcte\033[0m\n");
		usleep(TIME);
	}
	if (FT_ISALPHA == true)
	{
		int nb1;
		int nb2;
		int i = -301;
		int error = false;
		printf("\n\033[33m\t\tFT_ISALPHA\033[0m\n");
		printf("TESTED VALUE ARE BEETWEEN -300 & 300\n");

		while (++i < 300)
		{
			if ((nb1 = isalpha(i)) != (nb2 = ft_isalpha(i)))
			{
				printf("ft_isalpha.c [TEST = '%d'] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", i, nb2, nb1);
				error = true;
			}

		}
		if (error == false)
			printf("ft_isalpha.c [TEST = -300 to 300] :  \033[32m\t\t Correcte\033[0m\n");
		usleep(TIME);
	}
	if (FT_ISASCII == true)
	{
		int nb1;
		int nb2;
		int i = -301;
		int error = false;
		printf("\n\033[33m\t\tFT_ISASCII\033[0m\n");
		printf("TESTED VALUE ARE BEETWEEN -300 & 300\n");

		while (++i < 300)
		{
			if ((nb1 = isascii(i)) != (nb2 = ft_isascii(i)))
			{
				printf("ft_isascii.c [TEST = '%d'] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", i, nb2, nb1);
				error = true;
			}

		}
		if (error == false)
			printf("ft_isascii.c [TEST = -300 to 300] :  \033[32m\t\t Correcte\033[0m\n");
		usleep(TIME);
	}
	if (FT_ISDIGIT == true)
	{
		int nb1;
		int nb2;
		int i = -301;
		int error = false;
		printf("\n\033[33m\t\tFT_ISDIGIT\033[0m\n");
		printf("TESTED VALUE ARE BEETWEEN -300 & 300\n");

		while (++i < 300)
		{
			if ((nb1 = isdigit(i)) != (nb2 = ft_isdigit(i)))
			{
				printf("ft_isdigit.c [TEST = '%d'] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", i, nb2, nb1);
				error = true;
			}

		}
		if (error == false)
			printf("ft_isdigit.c [TEST = -300 to 300] :  \033[32m\t\t Correcte\033[0m\n");
		usleep(TIME);
	}
	if (FT_ISPRINT == true)
	{
		int nb1;
		int nb2;
		int i = -301;
		int error = false;
		printf("\n\033[33m\t\tFT_ISPRINT\033[0m\n");
		printf("TESTED VALUE ARE BEETWEEN -300 & 300\n");

		while (++i < 300)
		{
			if ((nb1 = isprint(i)) != (nb2 = ft_isprint(i)))
			{
				printf("ft_isprint.c [TEST = '%d'] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", i, nb2, nb1);
				error = true;
			}

		}
		if (error == false)
			printf("ft_isprint.c [TEST = -300 to 300] :  \033[32m\t\t Correcte\033[0m\n");
		usleep(TIME);
	}

	if (FT_MEMCMP == true)
	{
		int nb1;
		int nb2;
		printf("\n\033[33m\t\tFT_MEMCMP\033[0m\n");
		if ((nb1 = memcmp("", "", 1)) == (nb2 = ft_memcmp("", "", 1)))
			printf("ft_memcmp.c [TEST = \"\", \"\", 1] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_memcmp.c [TEST = \"\", \"\", 1] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = memcmp("abc", "cba", 3)) == (nb2 = ft_memcmp("abc", "cba", 3)))
			printf("ft_memcmp.c [TEST = \"abc\", \"cba\", 3] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_memcmp.c [TEST = \"abc\", \"cba\"], 3 :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);

		if ((nb1 = memcmp("cba", "abc", 3)) == (nb2 = ft_memcmp("cba", "abc", 3)))
			printf("ft_memcmp.c [TEST = \"cba\", \"abc\", 3] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_memcmp.c [TEST = \"cba\", \"abc\", 3] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);

		if ((nb1 = memcmp("cba", "cba0", 4)) == (nb2 = ft_memcmp("cba", "cba0", 4)))
			printf("ft_memcmp.c [TEST = \"cba\", \"cba0\", 4] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_memcmp.c [TEST = \"cba\", \"cba0\", 4] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = memcmp("abcd", "abc", 4)) == (nb2 = ft_memcmp("abcd", "abc", 4)))
			printf("ft_memcmp.c [TEST = \"abcd\", \"abc\", 4] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_memcmp.c [TEST = \"abcd\", \"abc\", 4] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = memcmp("abcd", "abc", 3)) == (nb2 = ft_memcmp("abcd", "abc", 3)))
			printf("ft_memcmp.c [TEST = \"abcd\", \"abc\", 3] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_memcmp.c [TEST = \"abcd\", \"abc\", 3] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = memcmp("abc", "abcd", 3)) == (nb2 = ft_memcmp("abc", "abcd", 3)))
			printf("ft_memcmp.c [TEST = \"abc\", \"abcd\", 3] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_memcmp.c [TEST = \"abc\", \"abcd\", 3] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		usleep(TIME);

	}

	if (FT_STRCMP == true)
	{
		int nb1;
		int nb2;
		printf("\n\033[33m\t\tFT_STRCMP\033[0m\n");
		if ((nb1 = ft_strcmp("", "")) == (nb2 = 0))
			printf("ft_strcmp.c [TEST = \"\", \"\"] :  \033[32m\t\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"\", \"\"] :  \033[31m\t\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = ft_strcmp("abc", "cba")) < 0)
			printf("ft_strcmp.c [TEST = \"abc\", \"cba\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"abc\", \"cba\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value [A negatif number]\n", nb1);
		if ((nb1 = ft_strcmp("cba", "abc")) > 0)
			printf("ft_strcmp.c [TEST = \"cba\", \"abc\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"cba\", \"abc\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value [A positif number\n", nb1);
		if ((nb1 = ft_strcmp("cba", "cba0")) < 0)
			printf("ft_strcmp.c [TEST = \"cba\", \"cba0\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"cba\", \"cba0\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value [A negatif number]\n", nb1);
		if ((nb1 = ft_strcmp("abcd", "abc")) > 0)
			printf("ft_strcmp.c [TEST = \"abcd\", \"abc\"] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strcmp.c [TEST = \"abcd\", \"abc\"] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value [A positif number\n", nb1);
		usleep(TIME);
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
			printf("ft_strlcat.c [TEST = \"\\0\\0\\0\\0B\\0\", \"TEST\", 4] :  \033[31m Wrong\033[0m\n");
			if (strcmp(str1, str2) != 0)
				printf("Your value %s, Good value %s\n", str2, str1);
			if (ret1 != ret2)
				printf("Your return %d, Good return %d\n", ret2, ret1);
		}
		bzero(str1, 20);
		bzero(str2, 20);
		strcpy(str1, str4);
		strcpy(str2, str4);
		if ((ret1 = strlcat(str1, str3, 4)) == (ret2 = ft_strlcat(str2, str3, 4)) && strcmp(str1, str2) == 0)
			printf("ft_strlcat.c [TEST = \"TE\" \"TEST\", 4] :  \t\033[32m Correcte\033[0m\n");
		else
		{
			printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 4] :  \t\033[31m Wrong\033[0m\n");
			if (strcmp(str1, str2) != 0)
				printf("Your value %s, Good value %s\n", str2, str1);
			if (ret1 != ret2)
				printf("Your return %d, Good return %d\n", ret2, ret1);
		}
		bzero(str1, 20);
		bzero(str2, 20);
		strcpy(str1, str4);
		strcpy(str2, str4);
		if ((ret1 = strlcat(str1, str3, 1)) == (ret2 = ft_strlcat(str2, str3, 1)) && strcmp(str1, str2) == 0)
			printf("ft_strlcat.c [TEST = \"TE\" \"TEST\", 1] :  \t\033[32m Correcte\033[0m\n");
		else
		{
			printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 1] :  \t\033[31m Wrong\033[0m\n");
			if (strcmp(str1, str2) != 0)
				printf("Your value %s, Good value %s\n", str2, str1);
			if (ret1 != ret2)
				printf("Your return %d, Good return %d\n", ret2, ret1);
		}
		bzero(str1, 20);
		bzero(str2, 20);
		strcpy(str1, str4);
		strcpy(str2, str4);
		if ((ret1 = strlcat(str1, str3, 9)) == (ret2 = ft_strlcat(str2, str3, 9)) && strcmp(str1, str2) == 0)
			printf("ft_strlcat.c [TEST = \"TE\" \"TEST\", 9] :  \t\033[32m Correcte\033[0m\n");
		else
		{
			printf("ft_strlcat.c [TEST = \"TE\", \"TEST\", 9] :  \t\033[31m Wrong\033[0m\n");
			if (strcmp(str1, str2) != 0)
				printf("Your value %s, Good value %s\n", str2, str1);
			if (ret1 != ret2)
				printf("Your return %d, Good return %d\n", ret2, ret1);
		}
		usleep(TIME);
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
		usleep(TIME);
	}
	if (FT_STRNCMP == true)
	{
		int nb1;
		int nb2;
		printf("\n\033[33m\t\tFT_STRNCMP\033[0m\n");
		if ((nb1 = strncmp("", "", 1)) == (nb2 = ft_strncmp("", "", 1)))
			printf("ft_strncmp.c [TEST = \"\", \"\", 1] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_strncmp.c [TEST = \"\", \"\", 1] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);


		if ((nb1 = strncmp("abc", "cba", 3)) == (nb2 = ft_strncmp("abc", "cba", 3)))
			printf("ft_strncmp.c [TEST = \"abc\", \"cba\", 3] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_strncmp.c [TEST = \"abc\", \"cba\"], 3 :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);

		if ((nb1 = strncmp("cba", "abc", 3)) == (nb2 = ft_strncmp("cba", "abc", 3)))
			printf("ft_strncmp.c [TEST = \"cba\", \"abc\", 3] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_strncmp.c [TEST = \"cba\", \"abc\", 3] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);

		if ((nb1 = strncmp("cba", "cba0", 4)) == (nb2 = ft_strncmp("cba", "cba0", 4)))
			printf("ft_strncmp.c [TEST = \"cba\", \"cba0\", 4] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_strncmp.c [TEST = \"cba\", \"cba0\", 4] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = strncmp("abcd", "abc", 4)) == (nb2 = ft_strncmp("abcd", "abc", 4)))
			printf("ft_strncmp.c [TEST = \"abcd\", \"abc\", 4] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_strncmp.c [TEST = \"abcd\", \"abc\", 4] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = strncmp("abcd", "abc", 3)) == (nb2 = ft_strncmp("abcd", "abc", 3)))
			printf("ft_strncmp.c [TEST = \"abcd\", \"abc\", 3] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_strncmp.c [TEST = \"abcd\", \"abc\", 3] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		if ((nb1 = strncmp("abc", "abcd", 3)) == (nb2 = ft_strncmp("abc", "abcd", 3)))
			printf("ft_strncmp.c [TEST = \"abc\", \"abcd\", 3] :  \033[32m\t Correcte\033[0m\n");
		else
			printf("ft_strncmp.c [TEST = \"abc\", \"abcd\", 3] :  \033[31m\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
		usleep(TIME);

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
		usleep(TIME);
	}
	if (FT_TOLOWER == true)
	{
		int nb1;
		int nb2;
		int i = -301;
		int error = false;
		printf("\n\033[33m\t\tFT_TOLOWER\033[0m\n");
		printf("TESTED VALUE ARE BEETWEEN -300 & 300\n");

		while (++i < 300)
		{
			if ((nb1 = tolower(i)) != (nb2 = ft_tolower(i)))
			{
				printf("ft_tolower.c [TEST = '%d'] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", i, nb2, nb1);
				error = true;
			}

		}
		if (error == false)
			printf("ft_tolower.c [TEST = -300 to 300] :  \033[32m\t\t Correcte\033[0m\n");
		usleep(TIME);
	}
	if (FT_TOUPPER == true)
	{
		int nb1;
		int nb2;
		int i = -301;
		int error = false;
		printf("\n\033[33m\t\tFT_TOUPPER\033[0m\n");
		printf("TESTED VALUE ARE BEETWEEN -300 & 300\n");

		while (++i < 300)
		{
			if ((nb1 = toupper(i)) != (nb2 = ft_toupper(i)))
			{
				printf("ft_toupper.c [TEST = '%d'] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", i, nb2, nb1);
				error = true;
			}

		}
		if (error == false)
			printf("ft_toupper.c [TEST = -300 to 300] :  \033[32m\t\t Correcte\033[0m\n");
		usleep(TIME);
	}



	printf("\n\033[31m--------------PARTIE SUPPLEMENTAIRE--------------\033[0m\n");

	if (FT_ITOA == true)
	{
		char *str;
		int nb2;
		int nb1;
		int i = 0;
		int error = false;

		srand(time(NULL));
		printf("\n\033[33m\t\tFT_ITOA\033[0m\n");

		if ((nb2 = atoi(str = ft_itoa(-2147483648))) == -2147483648)
			printf("ft_itoa.c [TEST = -2147483648] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_itoa.c [TEST = -2147483648] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, -2147483648);
		free(str);
		if ((nb2 = atoi(str = ft_itoa(0))) == 0)
			printf("ft_itoa.c [TEST = 0] :  \033[32m\t\t\t Correcte\033[0m\n");
		else
			printf("ft_itoa.c [TEST = 0] :  \033[31m\t\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, 0);
		free(str);
		if ((nb2 = atoi(str = ft_itoa(2147483647))) == 2147483647)
			printf("ft_itoa.c [TEST = 2147483647] :  \033[32m\t\t Correcte\033[0m\n");
		else
			printf("ft_itoa.c [TEST = 2147483647] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, -2147483647);
		free(str);

		while (i < 1000000)
		{
			nb1 = -2000000000 + rand() % 1000000000;
			if ((nb2 = atoi(str = ft_itoa(nb1))) != nb1)
			{
				printf("ft_itoa.c [TEST = negative values] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
				error = true;
				free(str);
				break;
			}
			++i;
			free(str);
		}
		if (error == false)
			printf("ft_itoa.c [TEST = negative values] :  \033[32m\t\t Correcte\033[0m\n");
		i = 0;
		error = false;
		while (i < 1000000)
		{
			nb1 = 1000000000 + rand() % 1000000000;
			if ((nb2 = atoi(str = ft_itoa(nb1))) != nb1)
			{
				printf("ft_itoa.c [TEST = positif values] :  \033[31m\t\t Wrong\033[0m\nYour value %d, Good value %d\n", nb2, nb1);
				error = true;
				free(str);
				break;
			}
			++i;
			free(str);
		}
		if (error == false)
			printf("ft_itoa.c [TEST = positif values] :  \033[32m\t\t Correcte\033[0m\n");
	}
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
		usleep(TIME);
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
		usleep(TIME);
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
		usleep(TIME);
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
		usleep(TIME);
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
		usleep(TIME);
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
		usleep(TIME);
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
		usleep(TIME);
	}
}
