#include <string.h>
#include <stdio.h>

#define ARRAY_SIZE 10

// int				memcmp(const void *s1, const void *s2, size_t n);

int					main(void)
{
	const char*		test_strings1[ARRAY_SIZE] =
	{
		"",
		"Hello, World!",
		"   leading spaces",
		"trailing spaces   ",
		"\0\1\2\3\4\5\6\7\10\11\12\13\14\15\16\17\20\21\22\23\24\25\26\27\30\31\32\33\34\35\36\37\40\41\42"
		"Line1\nLine2\nLine3",
		"Tab\tSeparated\tValues",
		"String with bell\aand backspace\bchars",
		"Hidden\0String",
		"Special chars !@#$%^&*()_+-=[]{};:'\",.<>?/\\|",
	};

	const char*		test_strings2[ARRAY_SIZE] =
	{
		"",
		"Hello, World!",
		"   leading spaces",
		"trailing spaces   ",
		"\0\1\2\3\4\5\6\7\10\11\12\13\14\15\16\17\20\21\22\23\24\25\26\27\30\31\32\33\34\35\36\37\40\41\42"
		"Line1\nLine2\nLine3",
		"Tab\tSeparated\tValues",
		"String with bell\aand backspace\bchars",
		"Hidden\0String",
		"Special chars !@#$%^&*()_+-=[]{};:'\",.<>?/\\|",
	};

	static size_t	test_values[ARRAY_SIZE] =
	{
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
		1,
	};

	int				result1 = 0;
	int				result2 = 0;

	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		for (int j = 0; j < ARRAY_SIZE - 1; j++)
		{
			for (int k = 0; k < ARRAY_SIZE - 1; k++)
			{
				printf("i : %d | j : %d | k : %zu => ", i, j, k);
				printf("s1 : %s | s2 : %s | n : %zu => ", test_strings1[i], test_strings2[j], test_values[k]);
				result1 = memcmp(test_strings1[i], test_strings2[j], test_values[k]);
				//result2 = ft_strncmp(test_strings1[i], test_strings2[j], test_values[k]);
				//if (result1 != result2) { printf("ERROR\n"); }
				printf("result1 : %d\n", result1);
			}
		}
	}
}
