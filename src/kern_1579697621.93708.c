#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(670, 680, 900, "random");
	float ***C = create_three_dim_float(90, 520, 200, "random");
	float ***B = create_three_dim_float(450, 140, 460, "random");

	for (int a = 5; a < 445; a++)
	{
	  
	    A[a][a][a]=A[a-2][a][a]+B[a][a][a];
	  
	    A[a][a][a]=A[a+4][a+2][a+1]*0.264;
	  
	    B[a][a][a]=B[a+5][a][a]*0.976;
	}

    return 0;
}