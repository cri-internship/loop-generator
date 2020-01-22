#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(510, 210, "zeros");
	double *C = create_one_dim_double(120, "zeros");
	double **A = create_two_dim_double(890, 140, "zeros");
	double **D = create_two_dim_double(340, 490, "zeros");
	double *E = create_one_dim_double(830, "zeros");

	for (int b = 1; b < 137; b++)
	  for (int a = 4; a < 119; a++)
	  {
	    
	     A[a][b]=A[a-1][b-1]/D[a][b]-E[a];
	    
	     D[a][b]=D[a][b+5]-0.145;
	    
	     C[a]=C[a+1]+0.179;
	    
	     double var_a=E[a]-0.154;
	     E[a]=0.938;
	    
	     A[a][b]=C[a]/B[a][b];
	    
	     D[a][b]=C[a]+A[a][b]-0.764;
	     E[a]=C[a-4]*B[a][b]/A[a][b];
	    
	     C[a]=E[a]/0.945;
	     B[a][b]=E[a+5]/0.493+C[a];
	  }

    return 0;
}