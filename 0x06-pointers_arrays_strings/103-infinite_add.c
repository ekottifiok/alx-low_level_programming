/**
 * infinite_add - adds numbers in an array
 * @n1: first number
 * @n2: second l number
 * @r: result stored here
 * @size_r: how many values of r is needed
 * Return: The values found
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

  int i, buffer, j, k, l, m, value, prev_value, position = 0;


  r[0] = '0';
  for (i = 0; n1[i] != '\0' && n2[i] != '\0'; i++, position++)
  {
    j = n1[i] - '0';
    k = n2[i] - '0';
    buffer = j + k;
    if (buffer < 10)
    {
      r[position] = buffer + '0';
      continue;
    }
    
    if (i == 0)
    {
      r[i] = 1 + '0';
      position++;
      r[position] = (buffer % 10) + '0';
      continue;
    }
    prev_value = r[position - 1] - '0';
    if (prev_value == 9)
    {
      for (m = position - 1; m > 0; m--)
      {
        value = r[m] - '0';
        r[m] = ((value + 1) % 10) + '0';
        if (value < 9)
        {
          break;
        }
      }
      r[position] = (buffer % 10) + '0';
      continue;
    }
    
    r[position-1] = (prev_value + 1) + '0';
    r[position] = (buffer % 10) + '0';
    continue;
  }
  r[position] = '\0';
  if (r[i])
    return (r);
  else
    return (0);
}