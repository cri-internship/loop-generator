#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(330, 600, 180, "ones");
	double ***B = create_three_dim_double(770, 360, 20, "ones");
	double **C = create_two_dim_double(200, 320, "ones");

	for (int c = 5; c < 19; c++)
	  for (int b = 5; b < 320; b++)
	    for (int a = 5; a < 200; a++)
	    {
	      
	      A[a][b][c]=A[a][b][c-5]/0.479;
	      
	      A[a][b][c]=A[a-5][b-3][c-1]+B[a][b][c]-C[a][b];
	      
	      B[a][b][c]=B[a-1][b-5][c-5]+0.943;
	      
	      C[a][b]=0.71+A[a][b][c];
	      C[a-3][b-2]=A[a][b][c]-0.227;
	      
	      B[a][b][c]=B[a][b][c]-A[a][b][c]+C[a][b];
	      A[a][b][c]=B[a+2][b+3][c+1]-C[a][b]*0.291;
	      
	      C[a][b]=A[a][b][c]-0.376;
	      C[a][b]=A[a+4][b+3][c+1]+B[a][b][c]-C[a][b];
	      
	      double var_a=B[a][b][c]*0.739;
	      double var_b=B[a][b-4][c-5]*0.609;
	    }

    return 0;
}