#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(340, 430, "ones");
	double **D = create_two_dim_double(540, 430, "ones");
	double ***A = create_three_dim_double(630, 890, 600, "ones");
	double **C = create_two_dim_double(550, 140, "ones");

	for (int a = 5; a < 340; a++)
	{
	  
	    B[a][a]=0.902;
	    B[a-5][a-5]=0.484;
	}

    return 0;
}