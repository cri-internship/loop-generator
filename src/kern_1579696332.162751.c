#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(220, "random");
	double ***D = create_three_dim_double(470, 900, 260, "random");
	double *C = create_one_dim_double(660, "random");
	double **A = create_two_dim_double(10, 870, "random");

	for (int b = 4; b < 870; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     D[a][b][a]=D[a-4][b-1][a-2]*C[a]+B[a]/A[a][b];
	    
	     D[a][b][a]=D[a+3][b+3][a+4]-B[a];
	    
	     A[a][b]=0.077;
	     A[a-3][b-4]=B[a];
	    
	     C[a]=D[a][b][a]*A[a][b];
	     C[a]=A[a][b];
	    
	     B[a]=D[a][b][a]-C[a];
	     B[a-5]=A[a][b]+D[a][b][a]*C[a];
	    
	     double var_a=B[a]*0.449;
	     double var_b=B[a+1]-0.823;
	  }

    return 0;
}