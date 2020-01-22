#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(780, 820, "zeros");
	int *B = create_one_dim_int(280, "zeros");

	for (int c = 0; c < 815; c++)
	  for (int b = 5; b < 275; b++)
	    for (int a = 5; a < 275; a++)
	    {
	      
	      B[a]=A[a][b];
	      A[a][b]=B[a]-A[a][b];
	      
	      A[a][b]=A[a+1][b+4]-36;
	      
	      B[a]=B[a+5]-21;
	    }

    return 0;
}