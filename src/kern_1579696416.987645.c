#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(790, 290, "ones");
	double ***B = create_three_dim_double(890, 990, 220, "ones");
	double **D = create_two_dim_double(830, 400, "ones");
	double *A = create_one_dim_double(820, "ones");
	double **C = create_two_dim_double(400, 790, "ones");

	for (int b = 3; b < 290; b++)
	  for (int a = 3; a < 400; a++)
	  {
	    
	     C[a][b]=C[a-1][b-2]*A[a];
	    
	     B[a][b][a]=B[a+1][b][a+1]+C[a][b]-E[a][b];
	    
	     E[a][b]=D[a][b]-B[a][b][a]*B[a][b][a]+D[a][b];
	     E[a-3][b-3]=C[a][b]*D[a][b]-B[a][b][a]/A[a];
	    
	     double var_a=D[a][b]/0.069;
	     double var_b=D[a+2][b+1]/0.569;
	  }

    return 0;
}