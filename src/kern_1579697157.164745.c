#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *A = create_one_dim_double(50, "ones");
	double ***D = create_three_dim_double(120, 360, 90, "ones");
	double **C = create_two_dim_double(300, 630, "ones");
	double ***B = create_three_dim_double(820, 410, 330, "ones");

	for (int d = 0; d < 328; d++)
	  for (int c = 0; c < 406; c++)
	    for (int b = 2; b < 48; b++)
	      for (int a = 2; a < 48; a++)
	      {
	        
	       A[a]=A[a-2]-0.956;
	        
	       B[a][b][c]=B[a+5][b+4][c+2]-D[a][b][c]*A[a]/C[a][b];
	        
	       double var_a=A[a]+0.104;
	       double var_b=A[a+2]-0.865;
	      }

    return 0;
}