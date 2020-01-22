#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(940, 920, 960, "random");
	float ***A = create_three_dim_float(170, 370, 450, "random");
	float ***C = create_three_dim_float(300, 630, 290, "random");

	for (int a = 5; a < 165; a++)
	{
	  
	    A[a][a][a]=C[a][a][a];
	    A[a-3][a][a-5]=0.902;
	  
	    B[a][a][a]=A[a][a][a]+A[a][a][a];
	    B[a+1][a][a+5]=0.554*A[a][a][a];
	  
	    float var_a=A[a][a][a]*0.816;
	    float var_b=A[a][a+2][a+5]+0.278;
	}

    return 0;
}