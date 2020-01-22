#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***D = create_three_dim_float(160, 420, 740, "random");
	float **C = create_two_dim_float(420, 1000, "random");
	float *A = create_one_dim_float(570, "random");
	float *B = create_one_dim_float(820, "random");

	for (int c = 0; c < 739; c++)
	  for (int b = 2; b < 419; b++)
	    for (int a = 2; a < 155; a++)
	    {
	      
	      C[a][b]=C[a-2][b-2]/0.976;
	      
	      C[a][b]=C[a+2][b]+B[a]/A[a];
	      
	      C[a][b]=D[a][b][c]*C[a][b];
	      D[a][b][c]=D[a+5][b+1][c+1]-C[a][b]*A[a]/B[a];
	      
	      float var_a=C[a][b]+0.58;
	      float var_b=C[a+5][b+2]*0.397;
	    }

    return 0;
}