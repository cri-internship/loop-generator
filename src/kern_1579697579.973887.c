#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(720, "ones");
	double *A = create_one_dim_double(300, "ones");

	for (int d = 2; d < 720; d++)
	  for (int c = 2; c < 720; c++)
	    for (int b = 2; b < 720; b++)
	      for (int a = 2; a < 720; a++)
	      {
	        
	       B[a]=B[a]+A[a];
	       A[a]=B[a-2]-A[a];
	      }

    return 0;
}