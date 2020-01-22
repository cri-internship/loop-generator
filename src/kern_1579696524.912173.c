#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(590, "ones");
	double **C = create_two_dim_double(390, 830, "ones");
	double *D = create_one_dim_double(970, "ones");
	double ***B = create_three_dim_double(830, 540, 500, "ones");

	for (int c = 4; c < 500; c++)
	  for (int b = 5; b < 540; b++)
	    for (int a = 3; a < 590; a++)
	    {
	      
	      B[a][b][c]=B[a-3][b-5][c-2]+D[a];
	      
	      B[a][b][c]=B[a-1][b-3][c-4]/A[a]-0.284;
	      
	      A[a]=0.169/C[a][b]-D[a];
	      D[a]=A[a]-D[a];
	      
	      A[a]=A[a-2]*0.996;
	    }

    return 0;
}