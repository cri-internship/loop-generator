#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(130, 260, 780, "random");
	float ***C = create_three_dim_float(210, 610, 510, "random");
	float **A = create_two_dim_float(720, 170, "random");

	for (int b = 5; b < 170; b++)
	  for (int a = 5; a < 206; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-4][a-3]/0.068;
	    
	     C[a][b][a]=C[a+1][b+3][a+4]-0.964;
	    
	     float var_a=A[a][b]-0.021;
	     float var_b=A[a-4][b-4]*0.282;
	    
	     float var_c=A[a][b]+0.666;
	     float var_d=A[a-5][b-5]-0.114;
	  }

    return 0;
}