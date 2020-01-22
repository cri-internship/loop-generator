#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***E = create_three_dim_double(620, 350, 310, "random");
	double *A = create_one_dim_double(550, "random");
	double ***D = create_three_dim_double(730, 80, 540, "random");
	double ***C = create_three_dim_double(890, 450, 400, "random");
	double *B = create_one_dim_double(960, "random");

	for (int d = 1; d < 306; d++)
	  for (int c = 4; c < 80; c++)
	    for (int b = 5; b < 617; b++)
	      for (int a = 5; a < 617; a++)
	      {
	        
	       B[a]=B[a-1]/0.621;
	        
	       E[a][b][c]=E[a+3][b][c+4]-0.126*B[a]+A[a];
	        
	       D[a][b][c]=E[a][b][c]-C[a][b][c]+C[a][b][c]*A[a];
	       D[a-5][b-4][c]=E[a][b][c]/B[a]*C[a][b][c];
	        
	       E[a][b][c]=0.438;
	        
	       double var_a=B[a]/0.364;
	       double var_b=B[a-4]-0.753;
	      }

    return 0;
}