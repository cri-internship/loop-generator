#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(900, 280, "zeros");
	double ***D = create_three_dim_double(980, 410, 620, "zeros");
	double *B = create_one_dim_double(910, "zeros");
	double **C = create_two_dim_double(360, 680, "zeros");

	for (int b = 5; b < 280; b++)
	  for (int a = 4; a < 360; a++)
	  {
	    
	     C[a][b]=C[a-1][b-3]/D[a][b][a];
	    
	     D[a][b][a]=D[a-2][b-3][a-3]*0.043;
	    
	     D[a][b][a]=D[a+5][b+2][a+4]-A[a][b]/C[a][b];
	    
	     B[a]=B[a+5]+D[a][b][a];
	    
	     B[a]=C[a][b]*A[a][b]-D[a][b][a];
	    
	     double var_a=A[a][b]*0.552;
	     double var_b=A[a-4][b-5]*0.367;
	  }

    return 0;
}