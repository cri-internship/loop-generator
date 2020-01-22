#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(370, "random");
	int *B = create_one_dim_int(400, "random");

	for (int d = 1; d < 368; d++)
	  for (int c = 1; c < 368; c++)
	    for (int b = 1; b < 368; b++)
	      for (int a = 1; a < 368; a++)
	      {
	        
	       A[a]=A[a+2]+42;
	        
	       A[a]=B[a]*A[a];
	       B[a]=B[a-1]/A[a];
	        
	       A[a]=B[a]-26;
	      }

    return 0;
}