#include <string.h>
#include <stdio.h>

#define ARRAY_SIZE 12

// int 			strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	const char	*test_strings1[ARRAY_SIZE] =
	{
		"",
		"Hello, World!",
		"   leading spaces",
		"",
		"trailing spaces   ",
		"\0\1\2\3\4\5\6\7\10\11\12\13\14\15\16\17\20\21\22\23\24\25\26\27\30\31\32\33\34\35\36\37\40\41\42"
		"Line1\nLine2\nLine3",
		"Tab\tSeparated\tValues",
		"String with bell\aand backspace\bchars",
		"Null\0Inside",
		"Unterminated string test",
		"Special chars !@#$%^&*()_+-=[]{};:'\",.<>?/\\|",
	};

	const char	*test_strings2[ARRAY_SIZE] =
	{
		"",
		"Hello, World!",
		"   leading spaces",
		"",
		"trailing spaces   ",
		"\0\1\2\3\4\5\6\7\10\11\12\13\14\15\16\17\20\21\22\23\24\25\26\27\30\31\32\33\34\35\36\37\40\41\42"
		"Line1\nLine2\nLine3",
		"Tab\tSeparated\tValues",
		"String with bell\aand backspace\bchars",
		"Null\0Inside",
		"Unterminated string test",
		"Special chars !@#$%^&*()_+-=[]{};:'\",.<>?/\\|",
	};

	static int	test_values[ARRAY_SIZE] =
	{
		0,
		1,
		-1,
		42,
		-42,
		12345,
		-12345,
		2147483647,
		-2147483648,
		1000000000,
		32767,
		-32768,
	};

	int			result1 = 0;
	int			result2 = 0;

	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		for (int j = 0; j < ARRAY_SIZE - 1; j++)
		{
			for (int k = 0; k < ARRAY_SIZE - 1; k++)
			{
				//printf("i : %d | j : %d | k : %d\t", i, j, k);
				//printf("s1 : %s | s2 : %s | n : %d\t", test_strings1[i], test_strings2[j], test_values[k]);
				result1 = strncmp(test_strings1[i], test_strings2[j], test_values[k]);
				//result2 = ft_strncmp(test_strings1[i], test_strings2[j], test_values[k]);
				if (result1 != result2) { printf("ERROR\n"); }
			}
		}
	}
}
