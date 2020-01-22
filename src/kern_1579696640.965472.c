#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(470, 310, "random");
	double *B = create_one_dim_double(490, "random");
	double *A = create_one_dim_double(440, "random");
	double **C = create_two_dim_double(180, 320, "random");

	for (int b = 2; b < 309; b++)
	  for (int a = 3; a < 180; a++)
	  {
	    
	     C[a][b]=C[a][b-2]*0.944;
	    
	     D[a][b]=D[a-3][b]+B[a];
	    
	     B[a]=C[a][b]*A[a]+D[a][b];
	     B[a-2]=A[a];
	    
	     A[a]=B[a]*C[a][b];
	     D[a][b]=B[a]-A[a]/D[a][b]+0.801;
	    
	     double var_a=D[a][b]+0.162;
	     double var_b=D[a+3][b+1]*0.434;
	  }

    return 0;
}