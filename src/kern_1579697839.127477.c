#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(400, "random");
	double ***C = create_three_dim_double(550, 20, 920, "random");
	double ***B = create_three_dim_double(10, 110, 540, "random");

	for (int c = 5; c < 535; c++)
	  for (int b = 3; b < 20; b++)
	    for (int a = 5; a < 5; a++)
	    {
	      
	      A[a]=A[a+2]+B[a][b][c]*C[a][b][c];
	      
	      A[a]=B[a][b][c]*C[a][b][c];
	      
	      A[a]=0.563;
	      
	      double var_b=C[a][b][c]-0.848;
	      double var_c=C[a-5][b-1][c-5]/0.421;
	      
	      double var_d=B[a][b][c]*0.041;
	      double var_e=B[a+5][b][c+5]-0.289;
	      
	      A[a]=B[a][b][c]*0.151+C[a][b][c];
	      C[a][b][c]=B[a-3][b-3][c-4]+A[a]/C[a][b][c];
	    }

    return 0;
}