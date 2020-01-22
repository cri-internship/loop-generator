#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(280, 940, 330, "random");
	double ***A = create_three_dim_double(220, 230, 260, "random");

	for (int c = 0; c < 330; c++)
	  for (int b = 3; b < 940; b++)
	    for (int a = 3; a < 280; a++)
	    {
	      
	      B[a][b][c]=B[a][b-2][c]/0.994;
	      
	      double var_a=B[a][b][c]*0.048;
	      double var_b=B[a-3][b-3][c]+0.509;
	    }

    return 0;
}