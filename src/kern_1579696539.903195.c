#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(100, 600, 950, "zeros");
	double *E = create_one_dim_double(510, "zeros");
	double *B = create_one_dim_double(190, "zeros");
	double *A = create_one_dim_double(600, "zeros");
	double **D = create_two_dim_double(690, 90, "zeros");

	for (int b = 5; b < 190; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     B[a]=B[a-1]/0.326;
	    
	     B[a]=B[a-5]*D[a][b]/C[a][b][a]-A[a]+E[a];
	    
	     B[a]=B[a-4]*A[a]-C[a][b][a];
	    
	     A[a]=B[a]+B[a]-E[a]/C[a][b][a];
	     A[a-4]=E[a];
	    
	     double var_a=A[a]*0.457;
	     double var_b=A[a]/0.333;
	  }

    return 0;
}