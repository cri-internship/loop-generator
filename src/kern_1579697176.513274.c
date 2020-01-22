#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(240, 980, 110, "random");
	double ***D = create_three_dim_double(900, 160, 10, "random");
	double *C = create_one_dim_double(200, "random");
	double ***B = create_three_dim_double(190, 110, 860, "random");

	for (int c = 0; c < 9; c++)
	  for (int b = 0; b < 156; b++)
	    for (int a = 3; a < 200; a++)
	    {
	      
	      C[a]=C[a-3]-0.109;
	      
	      D[a][b][c]=D[a+3][b+4][c+1]+0.054;
	    }

    return 0;
}