#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(700, "ones");
	int *C = create_one_dim_int(60, "ones");
	int **B = create_two_dim_int(260, 140, "ones");

	for (int c = 1; c < 138; c++)
	  for (int b = 5; b < 256; b++)
	    for (int a = 5; a < 256; a++)
	    {
	      
	      B[a][b]=B[a-5][b-1]-27;
	      
	      B[a][b]=B[a+4][b+2]*C[a]-7;
	    }

    return 0;
}