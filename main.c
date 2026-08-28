#include <stdio.h>
#include "libft.h"

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
	return (0);
}
