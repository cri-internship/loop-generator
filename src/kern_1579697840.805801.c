#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(690, 50, 20, "zeros");
	double **B = create_two_dim_double(90, 390, "zeros");
	double **D = create_two_dim_double(660, 650, "zeros");
	double *E = create_one_dim_double(270, "zeros");
	double **A = create_two_dim_double(190, 100, "zeros");

	for (int b = 5; b < 48; b++)
	  for (int a = 5; a < 88; a++)
	  {
	    
	     C[a][b][a]=C[a][b-5][a-5]+0.065;
	    
	     C[a][b][a]=0.57;
	    
	     E[a]=0.711;
	     E[a+1]=0.158;
	    
	     C[a][b][a]=B[a][b]*A[a][b];
	     D[a][b]=B[a+2][b+4]/C[a][b][a]-D[a][b];
	    
	     A[a][b]=E[a]*B[a][b]-B[a][b]+D[a][b];
	     B[a][b]=E[a+3]/A[a][b]-D[a][b]+C[a][b][a]*B[a][b];
	    
	     double var_a=A[a][b]+0.991;
	     double var_b=A[a-4][b]-0.521;
	  }

    return 0;
}