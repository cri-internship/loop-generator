#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(590, 280, 990, "random");
	double ***C = create_three_dim_double(710, 980, 630, "random");
	double *A = create_one_dim_double(580, "random");
	double **D = create_two_dim_double(570, 80, "random");

	for (int c = 0; c < 627; c++)
	  for (int b = 5; b < 280; b++)
	    for (int a = 2; a < 577; a++)
	    {
	      
	      B[a][b][c]=B[a-1][b-5][c]*D[a][b]+A[a];
	      
	      C[a][b][c]=C[a+3][b+2][c+3]/0.956;
	      
	      A[a]=0.944;
	      A[a+3]=0.125;
	      
	      C[a][b][c]=A[a]*B[a][b][c]+C[a][b][c]/D[a][b];
	      A[a]=A[a-2]+C[a][b][c];
	    }

    return 0;
}