#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(510, 410, "zeros");
	double *B = create_one_dim_double(310, "zeros");

	for (int b = 0; b < 406; b++)
	  for (int a = 2; a < 305; a++)
	  {
	    
	     B[a]=B[a+5]*A[a][b];
	    
	     A[a][b]=A[a+1][b]+0.139;
	    
	     A[a][b]=A[a+3][b+4]-B[a];
	    
	     B[a]=A[a][b];
	    
	     B[a]=A[a][b]-0.929;
	     A[a][b]=A[a-2][b]*B[a];
	    
	     double var_a=B[a]-0.647;
	     double var_b=B[a-1]*0.533;
	    
	     B[a]=A[a][b]-0.546;
	     A[a][b]=A[a+2][b+1]/B[a];
	  }

    return 0;
}