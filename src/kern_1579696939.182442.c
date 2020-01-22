#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **B = create_two_dim_float(460, 380, "zeros");
	float ***A = create_three_dim_float(700, 980, 210, "zeros");
	float **C = create_two_dim_float(130, 550, "zeros");
	float *E = create_one_dim_float(450, "zeros");
	float ***D = create_three_dim_float(640, 30, 320, "zeros");

	for (int d = 2; d < 320; d++)
	  for (int c = 5; c < 30; c++)
	    for (int b = 0; b < 447; b++)
	      for (int a = 0; a < 447; a++)
	      {
	        
	       float var_a=E[a]+0.288;
	       E[a]=0.335;
	        
	       D[a][b][c]=0.415;
	       D[a][b-5][c-2]=0.131;
	        
	       E[a]=C[a][b];
	        
	       float var_b=B[a][b]-0.67;
	       float var_c=B[a][b+4]/0.373;
	      }

    return 0;
}