#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(380, 230, 180, "random");
	float ***C = create_three_dim_float(130, 830, 980, "random");
	float ***B = create_three_dim_float(620, 490, 90, "random");
	float *D = create_one_dim_float(470, "random");

	for (int c = 0; c < 86; c++)
	  for (int b = 0; b < 488; b++)
	    for (int a = 0; a < 620; a++)
	    {
	      
	      B[a][b][c]=0.999;
	      B[a][b+2][c+4]=0.116;
	    }

    return 0;
}