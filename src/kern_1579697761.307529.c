#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(120, 460, 490, "zeros");
	double ***A = create_three_dim_double(90, 890, 870, "zeros");

	for (int b = 1; b < 460; b++)
	  for (int a = 3; a < 87; a++)
	  {
	    
	     B[a][b][a]=B[a-3][b-1][a]-0.204;
	    
	     A[a][b][a]=0.66;
	     A[a+3][b][a+3]=B[a][b][a];
	  }

    return 0;
}