#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(620, 930, 240, "zeros");
	double ***B = create_three_dim_double(50, 900, 160, "zeros");
	double *D = create_one_dim_double(940, "zeros");
	double *C = create_one_dim_double(470, "zeros");

	for (int c = 0; c < 158; c++)
	  for (int b = 0; b < 899; b++)
	    for (int a = 0; a < 47; a++)
	    {
	      
	      B[a][b][c]=0.681;
	      B[a+3][b+1][c+2]=0.34;
	    }

    return 0;
}