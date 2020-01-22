#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(30, "ones");
	double *D = create_one_dim_double(680, "ones");
	double **B = create_two_dim_double(170, 970, "ones");
	double **C = create_two_dim_double(470, 930, "ones");

	for (int b = 5; b < 927; b++)
	  for (int a = 5; a < 170; a++)
	  {
	    
	     B[a][b]=B[a-2][b-3]/0.65;
	    
	     C[a][b]=C[a-5][b-5]+0.452;
	    
	     C[a][b]=C[a][b+3]/0.845;
	    
	     D[a]=C[a][b];
	     D[a]=B[a][b]*A[a]/A[a];
	    
	     double var_a=C[a][b]-0.672;
	     double var_b=C[a-3][b-3]-0.064;
	  }

    return 0;
}