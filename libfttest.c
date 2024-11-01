#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n",ft_strnstr(NULL,"ilias",0));
	printf("%zu\n",ft_strlcat(NULL,"ilias",0));
	printf("%d\n",ft_strncmp(NULL,"ilias",0));
	printf("%zu\n",ft_strlcpy(NULL,"ilias",0));
	ft_calloc(10000000000000000,1000000000000000);
}
