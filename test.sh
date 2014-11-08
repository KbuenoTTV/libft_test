#!/bin/sh


## TEST PUTSTR ##

if [ $1 -eq 1 ]
then

gcc .main_putstr.c libft.a -o putstr

./putstr > fichier

echo "TEST" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putstr.c :\t\t\t\t\t\033[32m Correcte\033[0m"
else
echo "ft_putstr.c :\t\t\t\t\t\033[31m Wrong\033[0m"
fi
rm fichier
rm fichier_test
rm toto
rm putstr
fi

## TEST PUTCHAR ##

if [ $1 -eq 2 ]
then

gcc .main_putchar.c libft.a -o putchar

./putchar > fichier

echo "C" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putchar.c :\t\t\t\t\t\033[32m Correcte\033[0m"
else
echo "ft_putchar.c :\t\t\t\t\t\033[31m Wrong\033[0m"
fi
rm fichier
rm fichier_test
rm toto
rm putchar
fi

## TEST PUTNBR 1 ##

if [ $1 -eq 3 ]
then

gcc .main_putnbr.c libft.a -o putnbr

./putnbr 1 > fichier

echo "0" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putnbr.c [TEST = 0] :\t\t\t\033[32m Correcte\033[0m"
else
echo "ft_putnbr.c [TEST = 0] :\t\t\t\033[31m Wrong\033[0m"
fi
rm fichier
rm fichier_test
rm toto
rm putnbr
fi

## TEST PUTNBR 2 ##

if [ $1 -eq 4 ]
then

gcc .main_putnbr.c libft.a -o putnbr

./putnbr 2 > fichier

echo "-2147483648" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putnbr.c [TEST = -2147483648] :\t\t\033[32m Correcte\033[0m"
else
echo "ft_putnbr.c [TEST = -2147483648] :\t\t\033[31m Wrong\033[0m"
fi
rm fichier
rm fichier_test
rm toto
rm putnbr
fi

## TEST PUTNBR 3 ##

if [ $1 -eq 5 ]
then

gcc .main_putnbr.c libft.a -o putnbr

./putnbr 3 > fichier

echo "2147483647" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putnbr.c [TEST = 2147483647] :\t\t\033[32m Correcte\033[0m"
else
echo "ft_putnbr.c [TEST = 2147483647] :\t\t\033[31m Wrong\033[0m"
fi
rm fichier
rm fichier_test
rm toto
rm putnbr
fi

## TEST PUTENDL ##

if [ $1 -eq 6 ]
then

gcc .main_putendl.c libft.a -o putendl

./putendl 3 > fichier

echo "HELLO WORLD" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putendl.c :\t\t\t\t\t\033[32m Correcte\033[0m"
else
echo "ft_putendl.c :\t\t\t\t\t\033[31m Wrong\033[0m"
fi
rm fichier
rm fichier_test
rm toto
rm putendl
fi

## TEST PUTSTR_FD ##

if [ $1 -eq 7 ]
then

gcc .main_putstr_fd.c libft.a -o putstr_fd

./putstr_fd

echo "TEST" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putstr_fd.c :\t\t\t\t\033[32m Correcte\033[0m"
else
echo "ft_putstr_fd.c :\t\t\t\t\033[31m Wrong\033[0m"
fi
rm -f fichier
rm fichier_test
rm toto
rm putstr_fd
fi

## TEST PUTCHAR_FD ##

if [ $1 -eq 8 ]
then

gcc .main_putchar.c libft.a -o putchar_fd

./putchar_fd > fichier

echo "C" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putchar_fd.c :\t\t\t\t\033[32m Correcte\033[0m"
else
echo "ft_putchar_fd.c :\t\t\t\t\033[31m Wrong\033[0m"
fi
rm -f fichier
rm fichier_test
rm toto
rm putchar_fd
fi

## TEST PUTNBR_FD 1 ##

if [ $1 -eq 9 ]
then

gcc .main_putnbr_fd.c libft.a -o putnbr_fd

./putnbr_fd 1

echo "0" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putnbr_fd.c [TEST = 0]: \t\t\t\033[32m Correcte\033[0m"
else
echo "ft_putnbr_fd.c [TEST = 0]: \t\t\t\033[31m Wrong\033[0m"
fi
rm -f fichier
rm fichier_test
rm toto
rm putnbr_fd
fi

## TEST PUTNBR_FD 2 ##

if [ $1 -eq 10 ]
then

gcc .main_putnbr_fd.c libft.a -o putnbr_fd

./putnbr_fd 2

echo "-2147483648" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putnbr_fd.c [TEST = -2147483648] :\t\t\033[32m Correcte\033[0m"
else
echo "ft_putnbr_fd.c [TEST = -2147483648] :\t\t\033[31m Wrong\033[0m"
fi
rm -f fichier
rm fichier_test
rm toto
rm putnbr_fd
fi

## TEST PUTNBR_FD 3 ##

if [ $1 -eq 11 ]
then

gcc .main_putnbr_fd.c libft.a -o putnbr_fd

./putnbr_fd 3

echo "2147483647" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putnbr_fd.c [TEST = 2147483647] :\t\t\033[32m Correcte\033[0m"
else
echo "ft_putnbr_fd.c [TEST = 2147483647] :\t\t\033[31m Wrong\033[0m"
fi
rm -f fichier
rm fichier_test
rm toto
rm putnbr_fd
fi

## TEST PUTENDL ##

if [ $1 -eq 12 ]
then

gcc .main_putendl_fd.c libft.a -o putendl_fd

./putendl_fd > fichier

echo "HELLO WORLD" > fichier_test

if diff fichier fichier_test > toto
then
echo "ft_putendl_fd.c :\t\t\t\t\033[32m Correcte\033[0m"
else
echo "ft_putendl_fd.c :\t\t\t\t\033[31m Wrong\033[0m"
fi
rm fichier
rm fichier_test
rm toto
rm putendl_fd
fi

