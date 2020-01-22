#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(850, 170, "random");
	double *A = create_one_dim_double(10, "random");

	for (int b = 1; b < 168; b++)
	  for (int a = 0; a < 7; a++)
	  {
	    
	     A[a]=A[a+3]*0.507;
	    
	     B[a][b]=B[a][b+2]*A[a];
	    
	     A[a]=A[a+1]+0.751;
	    
	     B[a][b]=0.559;
	    
	     double var_a=A[a]-0.594;
	  }

    return 0;
}