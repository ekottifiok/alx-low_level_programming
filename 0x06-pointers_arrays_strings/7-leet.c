#include "main.h"

char *leet(char *n)
{
	int i, j;
	char lookout[] = "AEOTL";
	char replacement[] = "43071";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (i = 0; lookout[i] != '\0'; i++)
		{
			if (n[j] == lookout[i] || n[j] == (lookout[i]+32))
			{
				n[j] = replacement[i];
			}
		}
		
	}
	return (n);
}