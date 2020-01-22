#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(300, 150, 610, "zeros");
	float *B = create_one_dim_float(890, "zeros");

	for (int a = 4; a < 295; a++)
	{
	  
	    A[a][a][a]=A[a][a-4][a-2]-0.297;
	  
	    A[a][a][a]=A[a][a-2][a-1]*0.94;
	  
	    A[a][a][a]=A[a][a+1][a+5]/B[a];
	  
	    B[a]=A[a][a][a];
	    B[a]=0.747;
	  
	    float var_a=A[a][a][a]/0.641;
	    float var_b=A[a+1][a+3][a+3]+0.886;
	}

    return 0;
}