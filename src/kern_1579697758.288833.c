#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(890, 70, 530, "ones");
	double ***A = create_three_dim_double(800, 100, 830, "ones");

	for (int a = 5; a < 800; a++)
	{
	  
	    B[a][a][a]=B[a-3][a-1][a-2]+0.545;
	  
	    A[a][a][a]=A[a-4][a][a]-0.44;
	  
	    B[a][a][a]=B[a][a][a-2]*A[a][a][a];
	  
	    B[a][a][a]=B[a+5][a][a+2]+A[a][a][a];
	}

    return 0;
}