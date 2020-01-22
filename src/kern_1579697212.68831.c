#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *D = create_one_dim_double(980, "ones");
	double *E = create_one_dim_double(550, "ones");
	double *A = create_one_dim_double(600, "ones");
	double **B = create_two_dim_double(10, 770, "ones");
	double **C = create_two_dim_double(60, 100, "ones");

	for (int b = 2; b < 98; b++)
	  for (int a = 4; a < 9; a++)
	  {
	    
	     A[a]=A[a-3]/0.463;
	    
	     double var_a=E[a]/0.961;
	     E[a]=0.243;
	    
	     C[a][b]=C[a+4][b+1]*0.626/A[a]-E[a]+D[a];
	    
	     B[a][b]=B[a+1][b+1]+0.454;
	    
	     C[a][b]=E[a]-A[a]/0.925;
	  }

    return 0;
}