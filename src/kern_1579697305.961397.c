#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***C = create_three_dim_float(430, 390, 540, "ones");
	float **A = create_two_dim_float(910, 150, "ones");
	float **D = create_two_dim_float(280, 710, "ones");
	float ***B = create_three_dim_float(460, 680, 520, "ones");

	for (int d = 0; d < 538; d++)
	  for (int c = 2; c < 388; c++)
	    for (int b = 3; b < 280; b++)
	      for (int a = 3; a < 280; a++)
	      {
	        
	       D[a][b]=D[a-2][b-2]/C[a][b][c]-B[a][b][c];
	        
	       D[a][b]=D[a-3][b-2]-0.703;
	        
	       float var_a=C[a][b][c]/0.749;
	       float var_b=C[a+2][b+2][c+2]+0.397;
	      }

    return 0;
}