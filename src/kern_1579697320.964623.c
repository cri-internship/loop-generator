#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(150, 440, "ones");
	double **B = create_two_dim_double(570, 570, "ones");
	double ***D = create_three_dim_double(150, 180, 530, "ones");
	double ***A = create_three_dim_double(260, 560, 440, "ones");

	for (int d = 2; d < 435; d++)
	  for (int c = 5; c < 437; c++)
	    for (int b = 4; b < 147; b++)
	      for (int a = 4; a < 147; a++)
	      {
	        
	       C[a][b]=C[a-4][b-5]-0.382;
	        
	       A[a][b][c]=A[a+1][b+2][c+5]-B[a][b]+C[a][b]/D[a][b][c];
	        
	       A[a][b][c]=0.99;
	        
	       D[a][b][c]=C[a][b]-A[a][b][c]*0.191/B[a][b];
	       C[a][b]=C[a+3][b+3]-B[a][b]+A[a][b][c]/D[a][b][c];
	        
	       double var_a=A[a][b][c]+0.212;
	       double var_b=A[a+5][b+2][c+1]*0.054;
	      }

    return 0;
}