#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float *C = create_one_dim_float(890, "zeros");
	float ***B = create_three_dim_float(180, 830, 650, "zeros");
	float ***D = create_three_dim_float(560, 80, 240, "zeros");
	float **E = create_two_dim_float(840, 880, "zeros");
	float **A = create_two_dim_float(900, 240, "zeros");

	for (int b = 3; b < 80; b++)
	  for (int a = 4; a < 175; a++)
	  {
	    
	     B[a][b][a]=B[a+1][b+3][a+1]/0.286;
	    
	     D[a][b][a]=0.832;
	     D[a-4][b-3][a-4]=0.423;
	    
	     A[a][b]=0.275;
	     A[a+5][b]=0.456;
	    
	     float var_a=B[a][b][a]/0.975;
	     float var_b=B[a+5][b+4][a+3]*0.577;
	  }

    return 0;
}