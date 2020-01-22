#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(910, 90, 220, "zeros");
	double ***B = create_three_dim_double(990, 550, 200, "zeros");
	double **A = create_two_dim_double(460, 780, "zeros");

	for (int d = 5; d < 197; d++)
	  for (int c = 4; c < 90; c++)
	    for (int b = 5; b < 458; b++)
	      for (int a = 5; a < 458; a++)
	      {
	        
	       A[a][b]=A[a-5][b-3]+C[a][b][c]/B[a][b][c];
	        
	       C[a][b][c]=C[a-2][b][c-5]+0.504;
	        
	       A[a][b]=A[a+2][b+2]*C[a][b][c]-B[a][b][c];
	        
	       double var_a=C[a][b][c]*0.894;
	       double var_b=C[a+3][b][c+1]-0.261;
	        
	       double var_c=B[a][b][c]+0.996;
	       double var_d=B[a+5][b+4][c+3]/0.855;
	        
	       A[a][b]=A[a][b]+C[a][b][c]/B[a][b][c];
	       B[a][b][c]=A[a-1][b-4]-C[a][b][c]*B[a][b][c];
	        
	       C[a][b][c]=A[a][b]+C[a][b][c]*B[a][b][c];
	       B[a][b][c]=A[a+1][b+1]+0.31;
	      }

    return 0;
}