#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(620, 960, 900, "ones");
	float **D = create_two_dim_float(730, 90, "ones");
	float **A = create_two_dim_float(850, 560, "ones");
	float *E = create_one_dim_float(980, "ones");
	float ***C = create_three_dim_float(890, 760, 790, "ones");

	for (int c = 5; c < 786; c++)
	  for (int b = 1; b < 90; b++)
	    for (int a = 5; a < 615; a++)
	    {
	      
	      A[a][b]=A[a-5][b-1]*0.94;
	      
	      C[a][b][c]=C[a-3][b-1][c-5]+D[a][b];
	      
	      E[a]=E[a+3]*A[a][b]/C[a][b][c]-C[a][b][c]+0.107;
	      
	      B[a][b][c]=B[a+5][b+3][c+1]*E[a];
	      
	      D[a][b]=C[a][b][c]-E[a];
	      D[a-3][b-1]=B[a][b][c]*0.91;
	      
	      float var_a=C[a][b][c]-0.672;
	      float var_b=C[a][b][c+4]*0.989;
	      
	      float var_c=B[a][b][c]-0.773;
	      float var_d=B[a+1][b+5][c+1]*0.853;
	    }

    return 0;
}