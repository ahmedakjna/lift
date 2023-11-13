#include "libft.h"
#include "stdio.h"
#include "string.h"


// int main(void)
// {
//     char *s = "Hello";
//     char *result1 = ft_strchr(s, 'l' + 256);
//     char *result2 = strchr(s, 'l' + 256);

//     printf("My result: %s\n", result1);
//     printf("Original Result: %s\n", result2);
//     return (0);
// }

int main()
{
    char *str = "....saeed....almaz";
    char **substrings = ft_split(str, '.');

    for (int i = 0; substrings[i] != NULL; i++)
    {
        printf("Substring %d: %s\n", i + 1, substrings[i]);
    }

    free(substrings);

    return 0;
}