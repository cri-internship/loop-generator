#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(380, 270, 110, "random");
	double **D = create_two_dim_double(700, 440, "random");
	double ***A = create_three_dim_double(650, 540, 510, "random");
	double *C = create_one_dim_double(240, "random");

	for (int c = 2; c < 105; c++)
	  for (int b = 0; b < 270; b++)
	    for (int a = 5; a < 376; a++)
	    {
	      
	      B[a][b][c]=B[a+1][b][c+1]+0.514;
	      
	      B[a][b][c]=0.582;
	    }

    return 0;
}