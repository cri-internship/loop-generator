#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(570, 650, 390, "zeros");
	double *D = create_one_dim_double(690, "zeros");
	double ***C = create_three_dim_double(750, 220, 220, "zeros");
	double ***A = create_three_dim_double(190, 700, 860, "zeros");

	for (int a = 0; a < 187; a++)
	{
	  
	    A[a][a][a]=A[a+3][a+3][a+1]-0.876;
	}

    return 0;
}