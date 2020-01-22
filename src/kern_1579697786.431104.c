#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***B = create_three_dim_float(740, 70, 430, "ones");
	float ***D = create_three_dim_float(680, 30, 580, "ones");
	float **C = create_two_dim_float(130, 830, "ones");
	float ***A = create_three_dim_float(550, 830, 170, "ones");

	for (int a = 5; a < 675; a++)
	{
	  
	    D[a][a][a]=D[a+5][a+2][a+5]/A[a][a][a]-C[a][a]+B[a][a][a];
	  
	    D[a][a][a]=0.599;
	}

    return 0;
}