#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(740, 390, 40, "random");

	for (int a = 5; a < 735; a++)
	{
	  
	    A[a][a][a]=A[a+5][a+1][a+1]+0.407;
	  
	    A[a][a][a]=0.058;
	}

    return 0;
}