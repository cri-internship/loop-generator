#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(730, 920, "zeros");
	double **A = create_two_dim_double(50, 770, "zeros");
	double **C = create_two_dim_double(530, 830, "zeros");
	double **D = create_two_dim_double(200, 900, "zeros");

	for (int b = 2; b < 770; b++)
	  for (int a = 0; a < 50; a++)
	  {
	    
	     B[a][b]=A[a][b]+B[a][b]/C[a][b];
	     A[a][b]=D[a][b];
	    
	     C[a][b]=C[a+2][b+4]-A[a][b]/A[a][b]+B[a][b];
	    
	     C[a][b]=C[a+1][b]*0.463;
	    
	     B[a][b]=C[a][b]-A[a][b]+D[a][b];
	    
	     double var_a=C[a][b]+0.848;
	     double var_b=C[a][b-2]-0.008;
	    
	     C[a][b]=B[a][b]-D[a][b]*C[a][b]/0.422;
	     A[a][b]=B[a+3][b+5]*0.338;
	    
	     double var_c=D[a][b]+0.004;
	     double var_d=D[a+5][b+1]*0.786;
	  }

    return 0;
}