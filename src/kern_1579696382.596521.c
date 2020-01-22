#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(680, 410, "ones");
	double **A = create_two_dim_double(360, 260, "ones");
	double *D = create_one_dim_double(90, "ones");
	double *C = create_one_dim_double(700, "ones");

	for (int b = 5; b < 260; b++)
	  for (int a = 5; a < 90; a++)
	  {
	    
	     C[a]=C[a-1]-0.412*A[a][b];
	    
	     B[a][b]=B[a-2][b-3]+D[a]*C[a]/D[a];
	    
	     A[a][b]=A[a][b-2]/D[a]-B[a][b];
	    
	     double var_a=D[a]*0.853;
	     double var_b=D[a-3]*0.377;
	    
	     C[a]=B[a][b]+C[a]*D[a]/A[a][b];
	     B[a][b]=B[a-2][b-5]/A[a][b]*D[a]+C[a];
	    
	     double var_c=C[a]-0.549;
	     double var_d=C[a-5]/0.018;
	  }

    return 0;
}