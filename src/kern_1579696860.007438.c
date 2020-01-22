#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(920, 360, "zeros");
	double **D = create_two_dim_double(540, 840, "zeros");
	double **C = create_two_dim_double(420, 540, "zeros");
	double ***B = create_three_dim_double(890, 150, 800, "zeros");
	double **E = create_two_dim_double(190, 280, "zeros");

	for (int d = 5; d < 797; d++)
	  for (int c = 5; c < 149; c++)
	    for (int b = 4; b < 888; b++)
	      for (int a = 4; a < 888; a++)
	      {
	        
	       A[a][b]=0.456;
	       A[a-4][b-5]=0.133;
	        
	       B[a][b][c]=0.862;
	       B[a-2][b-5][c-5]=0.849;
	        
	       double var_a=B[a][b][c]*0.436;
	       double var_b=B[a+2][b+1][c+3]*0.626;
	      }

    return 0;
}