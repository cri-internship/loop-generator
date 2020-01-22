#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(610, 190, 460, "ones");

	for (int c = 3; c < 460; c++)
	  for (int b = 5; b < 190; b++)
	    for (int a = 5; a < 610; a++)
	    {
	      
	      A[a][b][c]=A[a-5][b-5][c-3]-0.632;
	      
	      A[a][b][c]=0.405;
	    }

    return 0;
}