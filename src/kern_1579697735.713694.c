#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(390, "random");
	double **B = create_two_dim_double(310, 410, "random");
	double **A = create_two_dim_double(990, 80, "random");
	double *D = create_one_dim_double(1000, "random");
	double **E = create_two_dim_double(30, 510, "random");

	for (int b = 2; b < 76; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     A[a][b]=A[a+4][b+4]/0.339+E[a][b]-D[a];
	    
	     B[a][b]=B[a+2][b]-0.027;
	    
	     D[a]=0.96;
	     D[a]=0.274;
	    
	     C[a]=0.687;
	     C[a+4]=0.053;
	    
	     double var_a=A[a][b]*0.095;
	     double var_b=A[a-5][b-2]+0.404;
	    
	     B[a][b]=E[a][b]/C[a]+A[a][b];
	     A[a][b]=E[a-2][b]/D[a]+B[a][b]-A[a][b]*0.975;
	  }

    return 0;
}