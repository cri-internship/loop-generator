#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(560, 190, "zeros");
	double *A = create_one_dim_double(770, "zeros");

	for (int b = 2; b < 190; b++)
	  for (int a = 2; a < 555; a++)
	  {
	    
	     A[a]=A[a-2]+0.36;
	    
	     A[a]=A[a+5]-B[a][b];
	    
	     B[a][b]=0.673;
	     B[a-1][b-2]=0.406;
	    
	     A[a]=B[a][b]+0.205;
	     B[a][b]=B[a+5][b]-A[a];
	    
	     double var_a=A[a]/0.622;
	  }

    return 0;
}