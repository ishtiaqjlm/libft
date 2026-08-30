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
    int	fd;
	ft_putchar_fd('A', 1);
	write(1, "\n", 1);
	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	ft_putchar_fd('B', fd);
	close(fd);
	return (0);

}
