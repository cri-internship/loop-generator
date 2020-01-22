#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(730, 490, 60, "random");
	double *B = create_one_dim_double(580, "random");
	double *D = create_one_dim_double(700, "random");
	double *C = create_one_dim_double(100, "random");
	double ***E = create_three_dim_double(50, 420, 240, "random");

	for (int c = 4; c < 240; c++)
	  for (int b = 3; b < 420; b++)
	    for (int a = 2; a < 50; a++)
	    {
	      
	      E[a][b][c]=E[a-2][b-2][c-4]-0.413;
	      
	      E[a][b][c]=E[a-2][b-3][c-4]-0.345;
	    }

    return 0;
}