#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(160, 170, 640, "zeros");
	double ***B = create_three_dim_double(250, 930, 400, "zeros");

	for (int c = 0; c < 636; c++)
	  for (int b = 0; b < 168; b++)
	    for (int a = 0; a < 155; a++)
	    {
	      
	      A[a][b][c]=0.595;
	      A[a+5][b+2][c+4]=0.08;
	      
	      A[a][b][c]=0.644;
	    }

    return 0;
}