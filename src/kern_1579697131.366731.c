#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(650, "ones");
	int **B = create_two_dim_int(340, 730, "ones");

	for (int c = 0; c < 645; c++)
	  for (int b = 0; b < 645; b++)
	    for (int a = 0; a < 645; a++)
	    {
	      
	      A[a]=B[a][b];
	      B[a][b]=A[a]-47;
	      
	      A[a]=B[a][b];
	    }

    return 0;
}