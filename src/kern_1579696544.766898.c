#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(100, "random");
	int *B = create_one_dim_int(810, "random");

	for (int b = 2; b < 95; b++)
	  for (int a = 2; a < 95; a++)
	  {
	    
	     A[a]=A[a-2]+29;
	    
	     B[a]=B[a+2]+A[a];
	    
	     A[a]=A[a+5]*48;
	    
	     B[a]=A[a];
	  }

    return 0;
}