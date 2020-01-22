#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(70, 700, 740, "random");
	double **D = create_two_dim_double(490, 530, "random");
	double *A = create_one_dim_double(850, "random");
	double *B = create_one_dim_double(480, "random");
	double ***C = create_three_dim_double(110, 990, 420, "random");

	for (int d = 4; d < 420; d++)
	  for (int c = 4; c < 526; c++)
	    for (int b = 4; b < 70; b++)
	      for (int a = 4; a < 70; a++)
	      {
	        
	       B[a]=B[a-4]-0.264;
	        
	       C[a][b][c]=C[a][b-4][c-2]+D[a][b]-B[a]/E[a][b][c];
	        
	       D[a][b]=D[a][b+4]*C[a][b][c]+A[a]/E[a][b][c]-C[a][b][c];
	        
	       C[a][b][c]=E[a][b][c]+B[a]*C[a][b][c]-D[a][b];
	       E[a][b][c]=E[a-1][b-3][c-4]-A[a];
	        
	       double var_a=E[a][b][c]*0.087;
	       double var_b=E[a][b-2][c-4]/0.891;
	        
	       double var_c=B[a]+0.923;
	       double var_d=B[a+2]-0.366;
	      }

    return 0;
}