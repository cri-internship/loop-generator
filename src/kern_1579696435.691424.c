#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(570, 210, 630, "random");
	double ***A = create_three_dim_double(20, 850, 360, "random");
	double ***C = create_three_dim_double(850, 340, 320, "random");

	for (int a = 5; a < 20; a++)
	{
	  
	    A[a][a][a]=A[a-2][a-5][a-3]+0.383;
	  
	    B[a][a][a]=C[a][a][a]/A[a][a][a];
	    B[a+4][a+4][a+4]=0.256;
	}

    return 0;
}