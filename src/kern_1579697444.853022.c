#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(930, "zeros");
	int *B = create_one_dim_int(910, "zeros");

	for (int d = 2; d < 910; d++)
	  for (int c = 2; c < 910; c++)
	    for (int b = 2; b < 910; b++)
	      for (int a = 2; a < 910; a++)
	      {
	        
	       A[a]=A[a-1]/46;
	        
	       A[a]=B[a];
	        
	       B[a]=B[a]-A[a];
	       A[a]=B[a-2]/A[a];
	      }

    return 0;
}