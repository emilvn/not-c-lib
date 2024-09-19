int not_strlen(const char *s)
{
    const char *p = s;
    int len = 0;
    while(*p != '\0'){
        p++;
        len++;
    }
    return len;
}

int not_strcmp(const char *s1, const char *s2) 
{
    const char *p1 = s1;
    const char *p2 = s2;
    while(*p1 != '\0'){
        if(*p1 != *p2) {
            return *p1 - *p2;
        }
        p1++;
        p2++;
    }
    return 0;
}
 
int not_strncmp(const char *s1, const char *s2, int n) 
{
    const char *p1 = s1;
    const char *p2 = s2;
    int i = 0;
    while(*p1 != '\0' && i < n){
        if(*p1 != *p2){
            return *p1 - *p2;
        }
        p1++;
        p2++;
        i++;
    }
    return 0;
}

char* not_strcpy(char* dest, const char* src)
{
    const char *psrc = src;
    char *pdest = dest;
    while(*psrc != '\0'){
        *pdest = *psrc;
        pdest++;
        psrc++;
    }
    *pdest = '\0';
    return dest;
}

char* not_strncpy(char* dest, const char* src, int n)
{
    int i = 0;
    const char *psrc = src;
    char *pdest = dest;
    while(*psrc != '\0' && i < n){
        *pdest = *psrc;
        pdest++;
        psrc++;
        i++;
    }
    *pdest = '\0';
    return dest;
}

char* not_strcat(char *dest, const char *src)
{
    int dest_len = not_strlen(dest);
    const char *psrc = src;
    int i = dest_len;
    while(*psrc != '\0'){
        dest[i] = *psrc;
        psrc++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char* not_strncat(char *dest, const char *src, int n)
{
    int dest_len = not_strlen(dest);
    const char *psrc = src;
    int i = dest_len;
    int j = 0;
    while(*psrc != '\0' && j < n){
        dest[i] = *psrc;
        psrc++;
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

void not_strreverse(char *str)
{
    int first = 0;
    int last = not_strlen(str) - 1;
    char tmp;

    while ( first < last){
        tmp = str[first];
        str[first] = str[last];
        str[last] = tmp;

        first++;
        last--;
    }
}