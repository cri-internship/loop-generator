#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(970, 450, 760, "random");
	float *B = create_one_dim_float(180, "random");
	float ***D = create_three_dim_float(630, 300, 190, "random");
	float **C = create_two_dim_float(30, 690, "random");

	for (int c = 3; c < 760; c++)
	  for (int b = 5; b < 450; b++)
	    for (int a = 5; a < 180; a++)
	    {
	      
	      B[a]=A[a][b][c]-C[a][b];
	      C[a][b]=B[a]+D[a][b][c]/D[a][b][c]-A[a][b][c];
	      
	      A[a][b][c]=A[a-2][b-5][c]-0.887;
	      
	      A[a][b][c]=B[a]*B[a];
	      
	      B[a]=A[a][b][c]*D[a][b][c]-0.434;
	      A[a][b][c]=A[a-5][b-5][c-3]/B[a]+C[a][b]*D[a][b][c];
	    }

    return 0;
}