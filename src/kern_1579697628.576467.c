#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **D = create_two_dim_float(170, 910, "random");
	float *A = create_one_dim_float(90, "random");
	float ***B = create_three_dim_float(10, 280, 490, "random");
	float ***C = create_three_dim_float(780, 710, 330, "random");

	for (int c = 0; c < 327; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 4; a < 10; a++)
	    {
	      
	      B[a][b][c]=B[a-4][b-4][c]-0.371;
	      
	      C[a][b][c]=C[a-2][b-5][c]*0.506;
	      
	      C[a][b][c]=0.261;
	      
	      D[a][b]=A[a]-C[a][b][c]/0.954;
	      B[a][b][c]=A[a-4]+B[a][b][c]-B[a][b][c]/D[a][b];
	      
	      C[a][b][c]=D[a][b]+A[a]/A[a]-B[a][b][c];
	      A[a]=D[a+2][b]+B[a][b][c];
	    }

    return 0;
}