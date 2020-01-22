#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(980, 650, 880, "ones");
	double ***E = create_three_dim_double(240, 130, 730, "ones");
	double *C = create_one_dim_double(670, "ones");
	double *B = create_one_dim_double(340, "ones");
	double **A = create_two_dim_double(270, 430, "ones");

	for (int d = 5; d < 725; d++)
	  for (int c = 2; c < 126; c++)
	    for (int b = 5; b < 236; b++)
	      for (int a = 5; a < 236; a++)
	      {
	        
	       D[a][b][c]=D[a][b-2][c-5]-B[a];
	        
	       E[a][b][c]=E[a+4][b+4][c+5]*0.542;
	        
	       E[a][b][c]=E[a][b][c]/C[a];
	       B[a]=E[a-5][b-2][c-5]/D[a][b][c];
	        
	       double var_a=A[a][b]+0.733;
	       double var_b=A[a+2][b+5]*0.707;
	      }

    return 0;
}