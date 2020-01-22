#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(560, 510, 610, "random");
	float **C = create_two_dim_float(130, 830, "random");
	float *B = create_one_dim_float(250, "random");
	float ***D = create_three_dim_float(520, 190, 300, "random");

	for (int d = 2; d < 830; d++)
	  for (int c = 5; c < 130; c++)
	    for (int b = 5; b < 130; b++)
	      for (int a = 5; a < 130; a++)
	      {
	        
	       B[a]=B[a-4]*0.069;
	        
	       B[a]=0.225;
	        
	       C[a][b]=0.418;
	       C[a-5][b]=0.349;
	        
	       float var_b=B[a]+0.38;
	       float var_c=B[a+4]/0.471;
	        
	       D[a][b][c]=C[a][b]-0.583;
	       C[a][b]=C[a-5][b-2]*0.651+D[a][b][c];
	      }

    return 0;
}