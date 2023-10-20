/* ************************************************************************** */
/*                                                                            */
/*                                           ::::::::::::::::  :::::::        */
/*   libft.h                                ::::::::::::::::  :::: ::::       */
/*                                               :+++:       :++:   :++:      */
/*   By: tamehri <tamehri@42.ta>                :+++:       :+++#####+++:     */
/*                                             +###+       :++#########++:    */
/*   Created: 2023/10/01 00:00:00 by tamehri  #+++#       #++#         #++#   */
/*   Updated: 2023/10/01 00:00:00 by tamehri #####       ####           #.ta  */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_header.h"

int main()
{
	char	str[] = "     +---++62546x2";
	char	s1[] = "abcdefghijklmnopabdc";
	char	s2[] = "abcd";
	printf("Hello World!\n");
	printf("%d\n", ft_atoi(str));
	printf("%d\n", ft_strlen(str));
	printf("%d\t%d\n", ft_isalpha('D'), ft_isalpha('9'));
	printf("%d\t%d\n", ft_isdigit('8'), ft_isdigit('i'));
	printf("%d\t%d\n", ft_isalnum('D'), ft_isalnum('\t'));
	printf("%d\t%d\n", ft_isascii('D'), ft_isalpha(129));
	printf("%d\t%d\n", ft_isprint('D'), ft_isprint(31));
	printf("%c\t%c\n", ft_toupper('c'), ft_toupper('c'));
	printf("%c\t%c\n", ft_tolower('c'), ft_tolower('c'));
	printf("%s\n", ft_substr(s1, 5, 27));
	printf("%s\n", ft_strjoin(s1, s2));
	printf("%s\n", ft_strtrim(s1, s2));
	printf("%s\n", ft_itoa(7265));



	t_list	*list1 = NULL;
	t_list	*list2 = NULL;
	t_list	*list3 = NULL;
	t_list	*list4 = NULL;

	list1 = (t_list *)malloc(sizeof(t_list));
	list2 = (t_list *)malloc(sizeof(t_list));
	list3 = (t_list *)malloc(sizeof(t_list));
	list4 = (t_list *)malloc(sizeof(t_list));

	if (!list1 || !list2 || !list3 || !list4) {printf("malloc error");}

	list1->content = (void *)1;
	list2->content = (void *)1;
	list3->content = (void *)1;
	list4->content = (void *)1;

	list1->next = list2;
	list2->next = list3;
	list3->next = list4;
	list4->next = NULL;
}
