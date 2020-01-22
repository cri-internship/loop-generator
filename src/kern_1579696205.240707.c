#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(900, 540, "random");
	double **B = create_two_dim_double(900, 850, "random");

	for (int b = 4; b < 537; b++)
	  for (int a = 4; a < 896; a++)
	  {
	    
	     B[a][b]=B[a-4][b-4]/A[a][b];
	    
	     A[a][b]=A[a+1][b+3]*B[a][b];
	    
	     B[a][b]=B[a+2][b]/A[a][b];
	    
	     double var_a=A[a][b]*0.949;
	     double var_b=A[a+4][b+3]+0.404;
	    
	     A[a][b]=B[a][b]/A[a][b];
	     B[a][b]=B[a][b-1]*0.83;
	    
	     double var_c=B[a][b]+0.8;
	     double var_d=B[a][b+4]+0.683;
	  }

    return 0;
}