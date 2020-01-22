#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(270, 10, "random");
	double **B = create_two_dim_double(410, 50, "random");
	double *D = create_one_dim_double(630, "random");
	double *C = create_one_dim_double(110, "random");

	for (int b = 5; b < 5; b++)
	  for (int a = 3; a < 110; a++)
	  {
	    
	     A[a][b]=A[a-1][b-5]-0.477;
	    
	     C[a]=C[a-3]-0.429;
	    
	     A[a][b]=0.021;
	    
	     B[a][b]=C[a];
	     B[a][b-2]=D[a]/A[a][b]*A[a][b];
	  }

    return 0;
}