Algorithm:

1-Create a function int _printf() with const char* and ‘…’ as its parameters. 
(‘. . .’ enables the function to receive any number of arguments).

2-Initialize a pointer of type va_list to work with variable arguments. Pass the pointer to va_start.

3-Process the passed string with a delimiter as ‘%’ or ‘\0’, and store it in a token string.

4-For every token starting with ‘%’ check if its next characters are a format specifier defined in format.

5-Pass the token string and value retrieved from va_arg() to putprin() in order to print the required value to the console.

6-Once the whole string is processed, end the va_arg pointer.

7- Return the number of characters printed.
