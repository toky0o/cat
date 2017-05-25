#include <stdio.h>

int main ( int argc, char *argv[] )
{
    if ( argc != 2 ) /* argc should be 2 for correct execution */
    {
        /* usage: cat filename */
        printf( "usage: %s filename\n", argv[0] );
    }
    else
    {
        // open the file for reading
        FILE *file = fopen( argv[1], "r" );

        /* fopen returns 0, the NULL pointer, on failure */
        if ( file == 0 )
        {
            printf( "Could not open file\n" );
        }
        else
        {
            int x;
            /* read one character at a time from file, stopping at EOF, which
               indicates the end of the file. */
            while  ( ( x = fgetc( file ) ) != EOF )
            {
                printf( "%c", x );
            }
            fclose( file );
        }
    }
}
