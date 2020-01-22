#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(720, "zeros");
	double *D = create_one_dim_double(780, "zeros");
	double *C = create_one_dim_double(470, "zeros");
	double *B = create_one_dim_double(910, "zeros");

	for (int b = 5; b < 470; b++)
	  for (int a = 5; a < 470; a++)
	  {
	    
	     C[a]=C[a-4]+A[a]-B[a]*D[a];
	    
	     D[a]=D[a-2]*0.193;
	    
	     D[a]=C[a]-B[a];
	  }

    return 0;
}