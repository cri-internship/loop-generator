#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(60, 610, 620, "zeros");
	double ***D = create_three_dim_double(210, 580, 870, "zeros");
	double ***B = create_three_dim_double(550, 540, 760, "zeros");
	double ***C = create_three_dim_double(520, 630, 440, "zeros");

	for (int a = 0; a < 515; a++)
	{
	  
	    C[a][a][a]=C[a+5][a+3][a]/0.783;
	}

    return 0;
}