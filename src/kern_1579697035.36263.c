#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(170, "random");
	int *B = create_one_dim_int(840, "random");

	for (int b = 1; b < 166; b++)
	  for (int a = 1; a < 166; a++)
	  {
	    
	     A[a]=A[a+1]-B[a];
	    
	     B[a]=A[a];
	     B[a-1]=A[a];
	    
	     A[a]=B[a];
	  }

    return 0;
}