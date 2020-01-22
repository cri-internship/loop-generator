#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(290, 230, "zeros");
	double **A = create_two_dim_double(110, 570, "zeros");
	double **C = create_two_dim_double(740, 610, "zeros");
	double ***B = create_three_dim_double(180, 310, 150, "zeros");

	for (int d = 4; d < 145; d++)
	  for (int c = 3; c < 310; c++)
	    for (int b = 2; b < 109; b++)
	      for (int a = 2; a < 109; a++)
	      {
	        
	       B[a][b][c]=B[a-2][b-3][c-4]-D[a][b];
	        
	       B[a][b][c]=B[a+5][b][c+5]-0.733;
	        
	       A[a][b]=A[a+1][b+3]-C[a][b]/0.032+B[a][b][c];
	      }

    return 0;
}