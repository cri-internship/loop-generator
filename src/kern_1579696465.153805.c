#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(550, 720, "random");
	double *B = create_one_dim_double(430, "random");
	double ***C = create_three_dim_double(30, 220, 170, "random");
	double ***D = create_three_dim_double(770, 760, 640, "random");

	for (int b = 5; b < 220; b++)
	  for (int a = 5; a < 30; a++)
	  {
	    
	     C[a][b][a]=C[a-3][b][a-4]/A[a][b]-0.882;
	    
	     A[a][b]=A[a-1][b-2]-D[a][b][a]+C[a][b][a]/D[a][b][a];
	    
	     D[a][b][a]=0.337;
	     D[a-5][b-4][a-4]=0.336;
	    
	     double var_a=C[a][b][a]+0.299;
	     double var_b=C[a-4][b-5][a]*0.005;
	    
	     B[a]=D[a][b][a]+B[a]-A[a][b];
	     C[a][b][a]=D[a-4][b][a-1]+C[a][b][a]*A[a][b];
	  }

    return 0;
}