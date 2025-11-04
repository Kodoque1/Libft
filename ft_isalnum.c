int ft_isalnum(int c)
{
    return ('a' <= c && 'z' >= c) || ('0' <= c && '9' >= c)  || ('A' <= c && 'Z' >= c);
}