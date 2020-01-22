#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "zeros");
	double **B = create_two_dim_double(230, 990, "zeros");
	double *E = create_one_dim_double(400, "zeros");
	double *C = create_one_dim_double(560, "zeros");
	double *D = create_one_dim_double(240, "zeros");

	for (int b = 2; b < 990; b++)
	  for (int a = 5; a < 230; a++)
	  {
	    
	     B[a][b]=B[a][b-2]+0.385;
	    
	     A[a]=A[a-3]-0.639;
	    
	     A[a]=A[a+5]-0.357+D[a];
	    
	     D[a]=0.329;
	     D[a+1]=0.61;
	    
	     C[a]=B[a][b];
	     C[a-5]=A[a]/D[a]*B[a][b];
	    
	     double var_a=A[a]*0.668;
	     double var_b=A[a+4]*0.971;
	  }

    return 0;
}