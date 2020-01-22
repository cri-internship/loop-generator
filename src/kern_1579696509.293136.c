#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(130, "zeros");
	int *B = create_one_dim_int(630, "zeros");
	int *A = create_one_dim_int(310, "zeros");

	for (int d = 5; d < 130; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       C[a]=C[a-1]*B[a]/A[a];
	        
	       int var_a=A[a]/43;
	       A[a]=22;
	        
	       B[a]=30*C[a];
	       B[a+1]=A[a]*C[a];
	        
	       B[a]=B[a]+A[a]*C[a];
	       C[a]=B[a-5]/38+C[a];
	      }

    return 0;
}