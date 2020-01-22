#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(1000, "random");
	double *C = create_one_dim_double(460, "random");
	double *B = create_one_dim_double(670, "random");
	double *A = create_one_dim_double(50, "random");

	for (int b = 2; b < 50; b++)
	  for (int a = 2; a < 50; a++)
	  {
	    
	     A[a]=A[a-2]*0.706;
	    
	     B[a]=B[a+1]-0.686;
	    
	     C[a]=C[a+2]/D[a]*A[a];
	    
	     C[a]=C[a+3]-B[a]+B[a];
	    
	     A[a]=C[a]-D[a]+A[a];
	     D[a]=C[a]-A[a]/D[a]+0.443;
	  }

    return 0;
}