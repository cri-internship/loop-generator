#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(260, 130, 30, "ones");
	double ***E = create_three_dim_double(830, 820, 710, "ones");
	double ***D = create_three_dim_double(490, 770, 340, "ones");
	double **C = create_two_dim_double(140, 480, "ones");
	double ***A = create_three_dim_double(490, 870, 660, "ones");

	for (int b = 4; b < 480; b++)
	  for (int a = 5; a < 140; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b-3][a-4]/0.681-D[a][b][a];
	    
	     C[a][b]=0.968;
	     C[a-2][b-4]=0.167;
	  }

    return 0;
}