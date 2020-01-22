#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **C = create_two_dim_float(150, 240, "random");
	float ***A = create_three_dim_float(810, 800, 330, "random");
	float ***B = create_three_dim_float(620, 20, 120, "random");

	for (int b = 0; b < 20; b++)
	  for (int a = 0; a < 148; a++)
	  {
	    
	     C[a][b]=C[a+2][b+3]-0.94;
	    
	     A[a][b][a]=A[a][b+2][a+1]+C[a][b];
	    
	     C[a][b]=C[a][b+4]+A[a][b][a]-0.19;
	    
	     float var_a=B[a][b][a]-0.013;
	     float var_b=B[a+5][b][a+4]/0.63;
	  }

    return 0;
}