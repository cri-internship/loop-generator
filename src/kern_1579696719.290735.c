#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(760, 750, "ones");
	float *A = create_one_dim_float(130, "ones");

	for (int d = 5; d < 746; d++)
	  for (int c = 5; c < 126; c++)
	    for (int b = 5; b < 126; b++)
	      for (int a = 5; a < 126; a++)
	      {
	        
	       B[a][b]=B[a-5][b-3]+A[a];
	        
	       A[a]=A[a+4]-0.271;
	        
	       B[a][b]=B[a+3][b+4]/A[a];
	        
	       B[a][b]=B[a+5][b]*0.863;
	      }

    return 0;
}