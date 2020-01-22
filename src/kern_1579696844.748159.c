#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(60, 910, 750, "random");
	double **B = create_two_dim_double(960, 620, "random");
	double ***C = create_three_dim_double(20, 840, 300, "random");
	double *A = create_one_dim_double(130, "random");

	for (int c = 5; c < 300; c++)
	  for (int b = 4; b < 620; b++)
	    for (int a = 5; a < 20; a++)
	    {
	      
	      D[a][b][c]=D[a-3][b-4][c-1]/0.733;
	      
	      C[a][b][c]=C[a-5][b-2][c-5]/A[a]-D[a][b][c];
	      
	      B[a][b]=B[a+4][b]/C[a][b][c]+0.975;
	      
	      A[a]=B[a][b]+C[a][b][c]/B[a][b];
	      A[a]=C[a][b][c]*D[a][b][c];
	      
	      D[a][b][c]=C[a][b][c]-0.456;
	      C[a][b][c]=C[a-1][b-4][c-1]/B[a][b]+D[a][b][c];
	      
	      A[a]=B[a][b]+D[a][b][c]/C[a][b][c];
	      B[a][b]=B[a-5][b-1]*D[a][b][c];
	      
	      A[a]=C[a][b][c]/B[a][b]*D[a][b][c]+A[a];
	      D[a][b][c]=C[a-3][b-3][c]*D[a][b][c]+A[a];
	    }

    return 0;
}