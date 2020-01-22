#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(750, "ones");
	int *D = create_one_dim_int(260, "ones");
	int *A = create_one_dim_int(460, "ones");
	int *C = create_one_dim_int(280, "ones");

	for (int d = 2; d < 260; d++)
	  for (int c = 2; c < 260; c++)
	    for (int b = 2; b < 260; b++)
	      for (int a = 2; a < 260; a++)
	      {
	        
	       B[a]=B[a-2]*D[a]/C[a];
	        
	       C[a]=B[a]*A[a]+A[a];
	       C[a]=C[a]/A[a];
	        
	       A[a]=33;
	       A[a+3]=40;
	        
	       D[a]=D[a]-B[a];
	       B[a]=D[a]/C[a]*B[a];
	      }

    return 0;
}