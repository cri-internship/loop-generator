#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(150, "ones");
	double **A = create_two_dim_double(950, 60, "ones");
	double **C = create_two_dim_double(900, 440, "ones");
	double ***D = create_three_dim_double(670, 50, 980, "ones");

	for (int c = 2; c < 976; c++)
	  for (int b = 5; b < 48; b++)
	    for (int a = 4; a < 149; a++)
	    {
	      
	      B[a]=B[a-4]-0.783;
	      
	      D[a][b][c]=D[a+4][b+2][c+4]*0.229;
	      
	      A[a][b]=A[a+3][b+4]*B[a]/C[a][b];
	      
	      A[a][b]=0.721;
	      
	      double var_a=B[a]*0.412;
	      double var_b=B[a+1]*0.521;
	      
	      A[a][b]=D[a][b][c]/A[a][b]+B[a]*C[a][b];
	      C[a][b]=D[a-3][b-5][c-2]/B[a]-0.656;
	    }

    return 0;
}