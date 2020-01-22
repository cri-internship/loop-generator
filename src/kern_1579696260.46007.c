#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(520, "zeros");
	float **A = create_two_dim_float(960, 50, "zeros");
	float **B = create_two_dim_float(640, 660, "zeros");
	float ***D = create_three_dim_float(270, 870, 330, "zeros");

	for (int d = 0; d < 326; d++)
	  for (int c = 2; c < 660; c++)
	    for (int b = 5; b < 270; b++)
	      for (int a = 5; a < 270; a++)
	      {
	        
	       C[a]=C[a-5]+D[a][b][c];
	        
	       D[a][b][c]=0.434;
	       D[a][b+4][c+4]=0.237;
	        
	       float var_a=B[a][b]-0.684;
	       float var_b=B[a-1][b-2]+0.324;
	        
	       float var_c=C[a]+0.863;
	       float var_d=C[a-2]/0.73;
	      }

    return 0;
}