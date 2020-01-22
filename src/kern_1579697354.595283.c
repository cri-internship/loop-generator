#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(340, 310, "random");
	double **A = create_two_dim_double(450, 870, "random");
	double *D = create_one_dim_double(410, "random");
	double **B = create_two_dim_double(580, 580, "random");

	for (int b = 0; b < 306; b++)
	  for (int a = 3; a < 336; a++)
	  {
	    
	     A[a][b]=A[a+2][b+1]+0.382;
	    
	     C[a][b]=B[a][b]/D[a];
	     C[a+4][b+4]=A[a][b]/D[a]-A[a][b];
	    
	     C[a][b]=0.385;
	    
	     A[a][b]=C[a][b]*D[a];
	    
	     D[a]=0.843/C[a][b]-B[a][b];
	     D[a-3]=A[a][b]/B[a][b];
	    
	     double var_a=D[a]/0.055;
	     double var_b=D[a+3]/0.393;
	    
	     B[a][b]=D[a]+B[a][b]/0.37;
	  }

    return 0;
}