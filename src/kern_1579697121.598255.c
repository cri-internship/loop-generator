#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(570, 750, "random");
	double ***A = create_three_dim_double(100, 710, 200, "random");
	double ***C = create_three_dim_double(520, 700, 60, "random");

	for (int d = 3; d < 60; d++)
	  for (int c = 5; c < 700; c++)
	    for (int b = 4; b < 95; b++)
	      for (int a = 4; a < 95; a++)
	      {
	        
	       C[a][b][c]=C[a-3][b-5][c-3]*0.28;
	        
	       A[a][b][c]=A[a][b+5][c]*0.66;
	        
	       A[a][b][c]=0.552;
	        
	       B[a][b]=A[a][b][c];
	       B[a+5][b+5]=A[a][b][c];
	        
	       double var_a=A[a][b][c]+0.646;
	       double var_b=A[a+2][b+3][c+3]*0.489;
	        
	       B[a][b]=A[a][b][c]/B[a][b]+C[a][b][c];
	       C[a][b][c]=A[a-4][b-4][c-1]/B[a][b]-C[a][b][c];
	      }

    return 0;
}