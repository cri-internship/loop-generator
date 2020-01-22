#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(840, "random");
	double ***C = create_three_dim_double(270, 700, 640, "random");
	double *A = create_one_dim_double(80, "random");

	for (int c = 3; c < 636; c++)
	  for (int b = 4; b < 699; b++)
	    for (int a = 4; a < 80; a++)
	    {
	      
	      C[a][b][c]=C[a+5][b+1][c+4]*B[a]-A[a];
	      
	      C[a][b][c]=C[a+4][b][c+4]/B[a]+A[a];
	      
	      B[a]=0.737;
	      B[a+3]=0.787;
	      
	      A[a]=C[a][b][c];
	      A[a-3]=C[a][b][c];
	      
	      A[a]=B[a]/C[a][b][c];
	      C[a][b][c]=B[a+3]-C[a][b][c];
	      
	      B[a]=C[a][b][c]-0.309+A[a];
	      A[a]=C[a-4][b-4][c-3]-A[a]+B[a];
	      
	      double var_a=C[a][b][c]-0.884;
	      double var_b=C[a+4][b+1][c+4]*0.35;
	    }

    return 0;
}