/**
 * _isupper - checks for uppercase character
 * Return - 1 if successful, 0 otherwise
 */

int _isupper(int c)
{
  char c;

  if (c > 64 && c < 91)
    {
      return 1;
    }
  else{
    return 0;
  }

}
