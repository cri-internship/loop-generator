#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(70, "ones");
	int *C = create_one_dim_int(450, "ones");
	int *A = create_one_dim_int(250, "ones");

	for (int d = 4; d < 70; d++)
	  for (int c = 4; c < 70; c++)
	    for (int b = 4; b < 70; b++)
	      for (int a = 4; a < 70; a++)
	      {
	        
	       A[a]=A[a-4]-C[a];
	        
	       A[a]=15;
	        
	       C[a]=C[a]/A[a];
	       A[a]=C[a+5]*B[a];
	        
	       B[a]=B[a]+C[a]/A[a];
	       B[a]=B[a-1]-C[a]*A[a];
	      }

    return 0;
}