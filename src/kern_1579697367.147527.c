#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(200, 740, 650, "random");
	double **C = create_two_dim_double(940, 140, "random");
	double *A = create_one_dim_double(880, "random");
	double *B = create_one_dim_double(280, "random");
	double *D = create_one_dim_double(480, "random");

	for (int b = 3; b < 277; b++)
	  for (int a = 3; a < 277; a++)
	  {
	    
	     B[a]=B[a-2]+0.689;
	    
	     D[a]=D[a+5]/A[a]*C[a][b];
	    
	     B[a]=B[a+3]-0.416;
	    
	     A[a]=B[a]+E[a][b][a]-0.811;
	     C[a][b]=B[a-3]+C[a][b];
	    
	     double var_a=A[a]*0.927;
	     double var_b=A[a+4]-0.171;
	  }

    return 0;
}