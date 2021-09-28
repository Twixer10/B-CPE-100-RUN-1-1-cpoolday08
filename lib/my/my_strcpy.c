/*                                                                                                                                                                                                                                           
** EPITECH PROJECT, 2020                                                                                                                                                                                                                     
** MY_STRCPY                                                                                                                                                                                                                                 
** File description:                                                                                                                                                                                                                         
** No Description                                                                                                                                                                                                                            
*/
char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    
    while(src[i]) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}
