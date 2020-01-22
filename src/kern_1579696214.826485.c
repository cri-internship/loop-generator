#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(560, "random");
	int *B = create_one_dim_int(340, "random");
	int *A = create_one_dim_int(810, "random");

	for (int d = 0; d < 560; d++)
	  for (int c = 0; c < 560; c++)
	    for (int b = 0; b < 560; b++)
	      for (int a = 0; a < 560; a++)
	      {
	        
	       B[a]=C[a]/7;
	       A[a]=C[a]/A[a]+A[a];
	      }

    return 0;
}