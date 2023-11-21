char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_str;
    unsigned int o;

    if (!s || !f)
        return (NULL);
    new_str = malloc (sizeof(char) * (ft_strlen(s) + 1));
    if (!new_str)
        return (NULL);
    o = 0;
    while (s)
    {
        new_str[o] = f(o, s[o]);
        o++;
    }
    new_str[o] = 0;
    return (new_str);
}
