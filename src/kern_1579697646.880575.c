#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(380, 90, "zeros");
	double **D = create_two_dim_double(140, 130, "zeros");
	double ***C = create_three_dim_double(290, 960, 380, "zeros");
	double **B = create_two_dim_double(30, 340, "zeros");
	double *E = create_one_dim_double(690, "zeros");

	for (int b = 5; b < 87; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-5][a-5]+D[a][b]-A[a][b]*E[a];
	    
	     E[a]=E[a-1]-C[a][b][a]+B[a][b]*D[a][b]/A[a][b];
	    
	     E[a]=E[a+2]+D[a][b];
	    
	     B[a][b]=B[a][b+1]+D[a][b]/E[a]*C[a][b][a]-A[a][b];
	    
	     A[a][b]=0.309;
	     A[a+2][b+3]=0.181;
	    
	     double var_a=C[a][b][a]*0.313;
	     double var_b=C[a-4][b-5][a-2]*0.61;
	    
	     A[a][b]=E[a]+B[a][b];
	  }

    return 0;
}