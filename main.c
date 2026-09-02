#include <stdio.h>
#include <stdint.h>
#include <fcntl.h>
#include "libft.h"
char	to_upper_even(unsigned int i, char c)
{
		if (i % 2 == 0 && c >= 'a' && c <= 'z')
			return (c - 32);
		return (c);
}
char	add_one(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}
void	to_upper(unsigned int i, char *c)
{
	(void)i;
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}
void	del_content(void *content)
{
	free(content);
}
int	main(void)
{
/*
	char	src[] = "Hello";
	char	dst[10];
	size_t	ret;

	ret = ft_strlcpy(dst, src, 0);

	printf("return = %zu\n", ret);
*/
	/*
	char destination[20] = "Hello, ";
    	const char *source = "World!";
    	size_t total_length;

    	total_length = ft_strlcat(destination, source, sizeof(destination));
    	printf("Concatenated string: %s\n", destination);
    	printf("Total length: %zu\n", total_length);
	*/
	/*
	char myStr[] = "Hello World";
	//char *myPtr = ft_strchr(myStr, 'o');
	char *myPtr = ft_strrchr(myStr, 'o');
	if (myPtr != NULL) {
  		printf("%s", myPtr);
	}*/
	/*
	char myStr1[] = "ABCD";
	char myStr2[] = "ABCE";
	int cmp = ft_strncmp(myStr1, myStr2, 4);
	if (cmp > 0) {
  		printf("%s is greater than %s\n", myStr1, myStr2);
	} else if (cmp < 0) {
  		printf("%s is greater than %s\n", myStr2, myStr1);
	} else {
  		printf("%s is equal to %s\n", myStr1, myStr2);
	}*/
	/*
	char *ptr = ft_strnstr("hello", "llo", 3);
	printf("cmp is  %s\n",ptr);
	*/
	/*
	char str[] = "   -12345";
    	int num;
    	num = atoi(str);
    	printf("The integer value is: %d\n", num);
	*/
    /*
	char	**result;
	int		i;
	result = ft_split("  hello  world  ", ' ');
	i = 0;
	while (result[i])
	{
		printf("[%s]\n", result[i]);
		i++;
	}
	while (i >=0)
	{
		free(result[i]);
		i--;
	}
	free(result);
	*/
	/*
	void	*p;

	p = ft_calloc(SIZE_MAX, 2);
	if (!p)
		printf("NULL\n");
	else
	{
		printf("allocation succeeded\n");
		free(p);
	}
	*/
/*
    char	*result;

	result = ft_strtrim("  hello  ", " ");
	printf("[%s]\n", result);
	free(result);

	result = ft_strtrim("xxhelloxx", "x");
	printf("[%s]\n", result);
	free(result);

	result = ft_strtrim("!!--hello--!!", "!-");
	printf("[%s]\n", result);
	free(result);

	result = ft_strtrim("-----", "-");
	printf("[%s]\n", result);
	free(result);

	result = ft_strtrim("", " ");
	printf("[%s]\n", result);
	free(result);

	result = ft_strtrim("hello", "");
	printf("[%s]\n", result);
	free(result);

	result = ft_strtrim("xxhelloxxworldxx", "x");
printf("[%s]\n", result);
free(result);

result = ft_strtrim("   hello", " ");
printf("[%s]\n", result);
free(result);
*/
/*
char	*result;

	result = ft_substr("Hello World", 0, 5);
	printf("1: [%s]\n", result);
	free(result);

	result = ft_substr("Hello World", 6, 5);
	printf("2: [%s]\n", result);
	free(result);

	result = ft_substr("Hello World", 0, 20);
	printf("3: [%s]\n", result);
	free(result);

	result = ft_substr("Hello World", 20, 5);
	printf("4: [%s]\n", result);
	free(result);

	result = ft_substr("Hello World", 5, 0);
	printf("5: [%s]\n", result);
	free(result);

	result = ft_substr("", 0, 5);
	printf("6: [%s]\n", result);
	free(result);

	result = ft_substr("Hello", 2, 2);
	printf("7: [%s]\n", result);
	free(result);

	result = ft_substr("Hello", 2, 100);
	printf("8: [%s]\n", result);
	free(result);
*/
/*
char	*result;

	result = ft_strjoin("Hello ", "World");
	printf("1: [%s]\n", result);
	free(result);

	result = ft_strjoin("", "World");
	printf("2: [%s]\n", result);
	free(result);

	result = ft_strjoin("Hello", "");
	printf("3: [%s]\n", result);
	free(result);

	result = ft_strjoin("", "");
	printf("4: [%s]\n", result);
	free(result);

	result = ft_strjoin("Hello", " World!");
	printf("5: [%s]\n", result);
	free(result);

	result = ft_strjoin("42", " Prague");
	printf("6: [%s]\n", result);
	free(result);

	result = ft_strjoin("aaaa", "bbbb");
	printf("7: [%s]\n", result);
	free(result);
	*/
	/*
	char	*result;
	result = ft_itoa(0);
	printf("1: [%s]\n", result);
	free(result);

	result = ft_itoa(42);
	printf("2: [%s]\n", result);
	free(result);

	result = ft_itoa(-42);
	printf("3: [%s]\n", result);
	free(result);

	result = ft_itoa(123456);
	printf("4: [%s]\n", result);
	free(result);

	result = ft_itoa(-123456);
	printf("5: [%s]\n", result);
	free(result);

	result = ft_itoa(2147483647);
	printf("6: [%s]\n", result);
	free(result);

	result = ft_itoa(-2147483648);
	printf("7: [%s]\n", result);
	free(result);
	*/
	/*
	char	*result;
	result = ft_strmapi("hello world", to_upper_even);
	result = ft_strmapi("abcxyz", add_one);
	printf("[%s]\n", result);
	free(result);
	*/
    /*
	char	str[] = "hello";
	ft_striteri(str, to_upper);
	printf("%s\n", str);
	*/
	/*
    int	fd;
	ft_putchar_fd('A', 1);
	write(1, "\n", 1);
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('B', fd);
	close(fd);*/
	/*
	ft_putstr_fd("Hello", 1);
	write(1, "\n", 1);
	*/
	/*
	int	fd;
	ft_putendl_fd("Hello", 1);
	ft_putendl_fd("42 Prague", 1);
	ft_putendl_fd("", 1);
	ft_putendl_fd(NULL, 1);
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putendl_fd("Hello File", fd);
	ft_putendl_fd("Second Line", fd);
	close(fd);
	*/
	/*int	fd;
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(123456, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-123456, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putnbr_fd(42, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);
	close(fd);*/
	/*
	char	*str;
	t_list	*node;
	str = "Hello";
	node = ft_lstnew(str);
	if (!node)
		return (1);
	printf("content: %s\n", (char *)node->content);
	printf("next: %p\n", (void *)node->next);
	free(node);*/
	/*
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	list = NULL;
	node1 = ft_lstnew("World");
	node2 = ft_lstnew("42");
	node3 = ft_lstnew("Hello");
	ft_lstadd_front(&list, node1);
	printf("1: %s\n", (char *)list->content);
	ft_lstadd_front(&list, node2);
	printf("2: %s -> %s\n",
		(char *)list->content,
		(char *)list->next->content);
	ft_lstadd_front(&list, node3);
	printf("3: %s -> %s -> %s\n",
		(char *)list->content,
		(char *)list->next->content,
		(char *)list->next->next->content);
	ft_lstadd_front(&list, NULL);
	ft_lstadd_front(NULL, node1);
	while (list)
	{
		t_list	*tmp = list;
		list = list->next;
		free(tmp);
	}
	*/
	/*
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	list = NULL;
	printf("1: %d\n", ft_lstsize(list));
	node1 = ft_lstnew("Hello");
	list = node1;
	printf("2: %d\n", ft_lstsize(list));
	node2 = ft_lstnew("World");
	node3 = ft_lstnew("42");
	node1->next = node2;
	node2->next = node3;
	printf("3: %d\n", ft_lstsize(list));
	printf("4: %d\n", ft_lstsize(NULL));
	free(node3);
	free(node2);
	free(node1);*/
	/*
	t_list	*list;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;
	list = NULL;
	last = ft_lstlast(list);
	printf("1: %p\n", (void *)last);
	list = ft_lstnew("Hello");
	last = ft_lstlast(list);
	printf("2: %s\n", (char *)last->content);
	node2 = ft_lstnew("World");
	node3 = ft_lstnew("42");
	list->next = node2;
	node2->next = node3;
	last = ft_lstlast(list);
	printf("3: %s\n", (char *)last->content);
	printf("4: %p == %p\n", (void *)last, (void *)node3);
	free(node3);
	free(node2);
	free(list);
	*/
	/*
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*last;
	list = NULL;
	node1 = ft_lstnew("Hello");
	ft_lstadd_back(&list, node1);
	printf("1: %s\n", (char *)list->content);
	node2 = ft_lstnew("World");
	ft_lstadd_back(&list, node2);
	printf("2: %s -> %s\n",
		(char *)list->content,
		(char *)list->next->content);
	node3 = ft_lstnew("42");
	ft_lstadd_back(&list, node3);
	printf("3: %s -> %s -> %s\n",
		(char *)list->content,
		(char *)list->next->content,
		(char *)list->next->next->content);
	last = ft_lstlast(list);
	printf("4: %s == %s\n",
		(char *)last->content,
		(char *)node3->content);
	free(node3);
	free(node2);
	free(node1);
	*/
	/*
	t_list	*node;
	char	*content;
	content = malloc(10);
	node = ft_lstnew(content);
	printf("1: node created = %p\n", (void *)node);
	ft_lstdelone(node, del_content);
	printf("1: node deleted\n");
	ft_lstdelone(NULL, del_content);
	printf("2: NULL node handled\n");
	node = ft_lstnew("Hello");
	printf("3: before deletion = %s\n", (char *)node->content);
	ft_lstdelone(node, NULL);
	printf("3: node deleted with NULL del\n");
	*/
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	list = NULL;
	ft_lstclear(&list, del_content);
	printf("1: empty list = %p\n", (void *)list);
	node1 = ft_lstnew(malloc(10));
	list = node1;
	ft_lstclear(&list, del_content);
	printf("2: one node = %p\n", (void *)list);
	node1 = ft_lstnew(malloc(10));
	node2 = ft_lstnew(malloc(10));
	node3 = ft_lstnew(malloc(10));
	node1->next = node2;
	node2->next = node3;
	list = node1;
	printf("3: before clear = %d nodes\n", ft_lstsize(list));
	ft_lstclear(&list, del_content);
	printf("3: after clear = %p\n", (void *)list);
	ft_lstclear(NULL, del_content);
	printf("4: NULL lst handled\n");
	return (0);
}
