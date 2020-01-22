#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(50, 330, "ones");
	double **C = create_two_dim_double(800, 290, "ones");
	double **A = create_two_dim_double(850, 70, "ones");

	for (int a = 5; a < 850; a++)
	{
	  
	    A[a][a]=0.228;
	    A[a][a-5]=0.967;
	}

    return 0;
}