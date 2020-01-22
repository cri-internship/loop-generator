#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(510, 580, 720, "ones");

	for (int c = 0; c < 718; c++)
	  for (int b = 0; b < 575; b++)
	    for (int a = 0; a < 507; a++)
	    {
	      
	      A[a][b][c]=A[a+1][b+3][c+1]*0.764;
	      
	      A[a][b][c]=0.189;
	    }

    return 0;
}