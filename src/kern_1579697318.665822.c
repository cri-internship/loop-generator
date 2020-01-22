#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(890, "random");
	double *C = create_one_dim_double(950, "random");
	double *B = create_one_dim_double(830, "random");

	for (int c = 3; c < 829; c++)
	  for (int b = 3; b < 829; b++)
	    for (int a = 3; a < 829; a++)
	    {
	      
	      A[a]=A[a-3]-0.543;
	      
	      B[a]=0.445;
	      float  var_a=B[a]*0.778;
	      
	      A[a]=A[a-1]+0.518;
	      
	      C[a]=A[a];
	      A[a]=C[a]+B[a];
	      
	      B[a]=B[a+1]-0.686;
	    }

    return 0;
}