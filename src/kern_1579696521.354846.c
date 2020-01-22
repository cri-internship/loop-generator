#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(160, 30, 120, "random");
	double ***A = create_three_dim_double(370, 250, 870, "random");
	double ***C = create_three_dim_double(330, 460, 380, "random");
	double ***B = create_three_dim_double(950, 780, 750, "random");

	for (int b = 3; b < 30; b++)
	  for (int a = 3; a < 160; a++)
	  {
	    
	     D[a][b][a]=D[a-3][b-3][a-2]-0.132/C[a][b][a]+A[a][b][a];
	    
	     A[a][b][a]=A[a+4][b+2][a+1]*0.24;
	    
	     A[a][b][a]=0.321;
	    
	     double var_a=B[a][b][a]/0.868;
	     double var_b=B[a+1][b][a+3]+0.458;
	  }

    return 0;
}