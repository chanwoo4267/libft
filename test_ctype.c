/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chanwopa <chanwopa@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:08:32 by chanwopa          #+#    #+#             */
/*   Updated: 2022/11/09 17:28:37 by chanwopa         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "string.h"
#include "ctype.h"
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"

int	main(void)
{
	printf("------- test for ft_isalpha ------\n");
	printf("input case : char 'a'\n");
	printf("original : %d\n", isalpha('a'));
	printf("ftfunct  : %d\n", ft_isalpha('a'));
	printf("input case : char 'Z'\n");
	printf("original : %d\n", isalpha('Z'));
	printf("ftfunct  : %d\n", ft_isalpha('Z'));
	printf("input case : char '3'\n");
	printf("original : %d\n", isalpha('3'));
	printf("ftfunct  : %d\n", ft_isalpha('3'));
	printf("input case : ascii value 25\n");
	printf("original : %d\n", isalpha(25));
	printf("ftfunct  : %d\n", ft_isalpha(25));

	printf("------- test for ft_isdigit ------\n");
	printf("input case : char 'a'\n");
	printf("original : %d\n", isdigit('a'));
	printf("ftfunct  : %d\n", ft_isdigit('a'));
	printf("input case : char 'Z'\n");
	printf("original : %d\n", isdigit('Z'));
	printf("ftfunct  : %d\n", ft_isdigit('Z'));
	printf("input case : char '3'\n");
	printf("original : %d\n", isdigit('3'));
	printf("ftfunct  : %d\n", ft_isdigit('3'));
	printf("input case : ascii value 25\n");
	printf("original : %d\n", isdigit(25));
	printf("ftfunct  : %d\n", ft_isdigit(25));

	printf("------- test for ft_isalnum ------\n");
	printf("input case : char 'a'\n");
	printf("original : %d\n", isalnum('a'));
	printf("ftfunct  : %d\n", ft_isalnum('a'));
	printf("input case : char 'Z'\n");
	printf("original : %d\n", isalnum('Z'));
	printf("ftfunct  : %d\n", ft_isalnum('Z'));
	printf("input case : char '3'\n");
	printf("original : %d\n", isalnum('3'));
	printf("ftfunct  : %d\n", ft_isalnum('3'));
	printf("input case : ascii value 25\n");
	printf("original : %d\n", isalnum(25));
	printf("ftfunct  : %d\n", ft_isalnum(25));

	printf("------- test for ft_isascii ------\n");
	printf("input case : char 'a'\n");
	printf("original : %d\n", isascii('a'));
	printf("ftfunct  : %d\n", ft_isascii('a'));
	printf("input case : char 'Z'\n");
	printf("original : %d\n", isascii('Z'));
	printf("ftfunct  : %d\n", ft_isascii('Z'));
	printf("input case : char '3'\n");
	printf("original : %d\n", isascii('3'));
	printf("ftfunct  : %d\n", ft_isascii('3'));
	printf("input case : ascii value 25\n");
	printf("original : %d\n", isascii(25));
	printf("ftfunct  : %d\n", ft_isascii(25));
	printf("input case : ascii value -1\n");
	printf("original : %d\n", isascii(-1));
	printf("ftfunct  : %d\n", ft_isascii(-1));
	printf("input case : ascii value 350\n");
	printf("original : %d\n", isascii(350));
	printf("ftfunct  : %d\n", ft_isascii(350));

	printf("------- test for ft_isprint ------\n");
	printf("input case : char 'a'\n");
	printf("original : %d\n", isprint('a'));
	printf("ftfunct  : %d\n", ft_isprint('a'));
	printf("input case : char 'Z'\n");
	printf("original : %d\n", isprint('Z'));
	printf("ftfunct  : %d\n", ft_isprint('Z'));
	printf("input case : char '3'\n");
	printf("original : %d\n", isprint('3'));
	printf("ftfunct  : %d\n", ft_isprint('3'));
	printf("input case : ascii value 25\n");
	printf("original : %d\n", isprint(25));
	printf("ftfunct  : %d\n", ft_isprint(25));
	printf("input case : ascii value -1\n");
	printf("original : %d\n", isascii(-1));
	printf("ftfunct  : %d\n", ft_isascii(-1));
	printf("input case : ascii value 350\n");
	printf("original : %d\n", isascii(350));
	printf("ftfunct  : %d\n", ft_isascii(350));
}