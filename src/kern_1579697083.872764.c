#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(120, "ones");
	double *B = create_one_dim_double(320, "ones");
	double **C = create_two_dim_double(1000, 170, "ones");
	double ***D = create_three_dim_double(850, 560, 980, "ones");

	for (int c = 5; c < 977; c++)
	  for (int b = 4; b < 556; b++)
	    for (int a = 4; a < 320; a++)
	    {
	      
	      D[a][b][c]=0.194;
	      D[a+5][b+3][c+3]=0.365;
	      
	      double var_a=D[a][b][c]*0.863;
	      double var_b=D[a+4][b+4][c+2]/0.892;
	      
	      A[a]=B[a]*0.458;
	      C[a][b]=B[a-2]+C[a][b]*D[a][b][c];
	      
	      B[a]=D[a][b][c]-B[a];
	      D[a][b][c]=D[a-4][b-4][c-5]/C[a][b]+B[a]-A[a];
	    }

    return 0;
}