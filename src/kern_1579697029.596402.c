#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(340, 350, 380, "random");
	double ***C = create_three_dim_double(330, 330, 350, "random");
	double *A = create_one_dim_double(920, "random");

	for (int d = 5; d < 375; d++)
	  for (int c = 1; c < 345; c++)
	    for (int b = 2; b < 337; b++)
	      for (int a = 2; a < 337; a++)
	      {
	        
	       B[a][b][c]=B[a][b-1][c-4]*0.366;
	        
	       A[a]=A[a-2]+0.393;
	        
	       B[a][b][c]=B[a+3][b+5][c+4]*C[a][b][c];
	        
	       double var_a=B[a][b][c]*0.369;
	       double var_b=B[a][b-1][c-2]+0.876;
	        
	       double var_c=B[a][b][c]*0.527;
	       double var_d=B[a][b][c+5]/0.233;
	        
	       B[a][b][c]=B[a][b][c]/C[a][b][c];
	       C[a][b][c]=B[a-1][b][c-5]*C[a][b][c]+A[a];
	      }

    return 0;
}