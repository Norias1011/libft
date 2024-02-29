# libft
libft at 42 with the following functions :

- isalpha : check if there is an alphabetic character

- isdigit : check if there is a digit (0 to 9)

- isalnum : check if there is an alphanumeric character (equivalent to isalpha || is digit)

- isascii : check if the value fits into the ASCII character set

- isprint : check for any printable character including space

- strlen : calculate the size of a string

- memset : "void *memset(void *s, int c, size_t n)" fills the first n bytes of the memory area pointed by s with the constant byte c

- bzero : "void bzero(void *s, size_t n)" sets the first n bytes of the area starting at s to zero

- memcpy : "void *memcpy(void *dest, const void *src, size_t n)" copies n bytes from memory area src to memory area dest. The memory areas must not overlap.

- memmove : "void *memmove(void *dest, const void *src, size_t n)" copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.

- strlcpy : copy and concatenate strings respectively. They take the full size of the buffer and guarantee to NUL-terminate the result (as long as size is larger than 0). Src must ne NUL-terminated.

- strlcat : same as strlcpy except that dst need to have at least one byte free. For strlcat both src and dst must ne NUL-terminated.

- toupper : converts the letter c to upper case if possible.

- tolower : converts the letter c to lower case if possible.

- strchr : returns a pointer to the first occurence of the character c in the string s. It return a pointer to the matched character of NULL if the character is not found. 

- strrchr : returns a pointer to the last occurrence of the character c in the string s. It return a pointer to the matched character of NULL if the character is not found. 

- strncmp : compares two strings s1 and s2. it returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2. 

- memchr : scan memory for a character. Scans the initial n bytes of the nenory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char. 

- memcmp : compare memory areas. Return an integer less than, equal to, or greater than zero if the first n bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.

- strnstr : Locate a substring in a string. The strnstr() function locates the first	occurrence of the  null-terminated  string little in the string big, where not more than len characters are searched. Characters that appear after a `\0' character are not searched.

- atoi : Convert a string to an integer. The atoi() function converts the initial portion of the string pointed to by nptr to int. 

- calloc : The calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free().

- strdup : Duplicate a string. The strdup() function returns a pointer to a new string which is a duplicate of the string s. Memory for the new string is obtained with malloc(3), and can be freed with free(3).

- substr : Alloue (avec malloc(3)) et retourne une chaîne de caractères issue de la chaîne ’s’. Cette nouvelle chaîne commence à l’index ’start’ et a pour taille maximale ’len’.
 
- strjoin : Alloue (avec malloc(3)) et retourne une nouvelle chaîne, résultat de la concaténation de s1 et s2.

- strtrim : Alloue (avec malloc(3)) et retourne une copie de la chaîne ’s1’, sans les caractères spécifiés dans ’set’ au début et à la fin de la chaîne de
caractères.

- split : Alloue (avec malloc(3)) et retourne un tableau de chaînes de caractères obtenu en séparant ’s’ à l’aide du caractère ’c’, utilisé comme délimiteur. Le tableau doit être terminé par NULL.

- itoa : Alloue (avec malloc(3)) et retourne une chaîne de caractères représentant l’entier ’n’ reçu en argument. Les nombres négatifs doivent être gérés.

- strmapi : Applique la fonction ’f’ à chaque caractère de la chaîne de caractères passée en argument pour créer une nouvelle chaîne de caractères (avec malloc(3)) résultant des applications successives de ’f’.

- striteri : Applique la fonction ’f’ à chaque caractère de la chaîne de caractères transmise comme argument, et en passant son index comme premier argument. Chaque caractère est transmis par adresse à ’f’ afin d’être modifié si nécessaire.

- putchar : Écrit le caractère ’c’ sur le descripteur de fichier donné.

- putstr : Écrit la chaîne de caractères ’s’ sur le descripteur de fichier donné.

- putendl : Écrit La chaîne de caractères ’s’ sur le descripteur de fichier donné suivie d’un retour à la ligne.

- putnbr : Écrit l’entier ’n’ sur le descripteur de fichier donné.
