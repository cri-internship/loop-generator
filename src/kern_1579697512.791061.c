#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(970, 860, "ones");
	double **B = create_two_dim_double(230, 800, "ones");
	double **C = create_two_dim_double(1000, 710, "ones");
	double *D = create_one_dim_double(440, "ones");

	for (int b = 4; b < 706; b++)
	  for (int a = 4; a < 230; a++)
	  {
	    
	     B[a][b]=B[a-4][b-4]/0.568;
	    
	     D[a]=0.499;
	     float  var_a=D[a]-0.182;
	    
	     A[a][b]=B[a][b]/0.698*C[a][b];
	     A[a-4][b-1]=0.407*D[a];
	    
	     C[a][b]=A[a][b]/A[a][b];
	     C[a+3][b+4]=B[a][b]-D[a];
	    
	     C[a][b]=0.775;
	    
	     double var_b=C[a][b]/0.051;
	     double var_c=C[a+2][b]-0.149;
	    
	     A[a][b]=B[a][b]-D[a]/0.294+A[a][b];
	     B[a][b]=B[a-4][b-3]+D[a]-A[a][b];
	  }

    return 0;
}