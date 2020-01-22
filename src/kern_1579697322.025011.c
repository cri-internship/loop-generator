#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float **A = create_two_dim_float(900, 620, "random");
	float ***B = create_three_dim_float(470, 160, 340, "random");
	float ***C = create_three_dim_float(880, 900, 40, "random");

	for (int a = 5; a < 470; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-5][a-3]-0.766;
	  
	    C[a][a][a]=C[a][a+2][a+2]-0.905;
	}

    return 0;
}