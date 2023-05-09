/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the substring in the string,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	char *h = haystack;
	char *n = needle;

	/* Check if the current substring matches the needle */
	while (*n != '\0' && *h == *n)
	{
	h++;
	n++;
	}

	/* If we reached the end of the needle, we found a match */
	if (*n == '\0')
	{
	return (haystack);
	}

	/* Otherwise, keep searching in the haystack */
	haystack++;
	}

    /*
     * If we reached the end of the haystack without
     * finding a match, return NULL
     */
	return (0);
}
