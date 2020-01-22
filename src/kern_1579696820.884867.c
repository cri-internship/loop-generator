#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(550, 340, 930, "ones");
	float ***B = create_three_dim_float(530, 760, 830, "ones");

	for (int a = 3; a < 530; a++)
	{
	  
	    B[a][a][a]=B[a-2][a-3][a-1]/0.835;
	  
	    B[a][a][a]=B[a-3][a-2][a-3]-0.749;
	  
	    B[a][a][a]=B[a][a-2][a-2]+0.792;
	  
	    A[a][a][a]=A[a][a][a+4]/B[a][a][a];
	}

    return 0;
}