#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(260, 680, "ones");
	int *A = create_one_dim_int(550, "ones");

	for (int d = 0; d < 546; d++)
	  for (int c = 0; c < 546; c++)
	    for (int b = 0; b < 546; b++)
	      for (int a = 0; a < 546; a++)
	      {
	        
	       A[a]=B[a][b];
	       A[a+4]=B[a][b];
	      }

    return 0;
}