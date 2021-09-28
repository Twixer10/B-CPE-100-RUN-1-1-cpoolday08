/*                                                                                                                                                                                                                                           
** EPITECH PROJECT, 2020                                                                                                                                                                                                                     
** CONCAT PARAMS                                                                                                                                                                                                                             
** File description:                                                                                                                                                                                                                         
** NO DESCRIPTION                                                                                                                                                                                                                            
*/

#include "./include/my.h"
#include <stdlib.h>

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int len = 0;
    char *c = malloc(sizeof(char) * (argc + 1));
     
    while (i < argc) {
        while (argv[i][j] != '\0') {
            c[len] = argv[i][j];
            len = len + 1;
            j = j + 1;
        }
        c[len] = '\n';
        len = len + 1;
        j = 0;
        i = i + 1;
	
    }
    c[len] = '\0';
    return (c);
}
