#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(510, "ones");
	int **B = create_two_dim_int(770, 760, "ones");

	for (int b = 0; b < 760; b++)
	  for (int a = 5; a < 505; a++)
	  {
	    
	     A[a]=A[a-5]*B[a][b];
	    
	     B[a][b]=B[a-2][b]*A[a];
	    
	     A[a]=B[a][b];
	  }

    return 0;
}