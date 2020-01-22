#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(270, 260, 240, "random");
	double ***B = create_three_dim_double(330, 290, 140, "random");

	for (int b = 4; b < 258; b++)
	  for (int a = 3; a < 265; a++)
	  {
	    
	     B[a][b][a]=B[a-2][b-3][a]+0.936;
	    
	     A[a][b][a]=A[a-2][b][a-1]*0.09;
	    
	     A[a][b][a]=A[a+5][b+2][a+4]/0.784;
	    
	     double var_a=B[a][b][a]-0.724;
	     double var_b=B[a-2][b-4][a-3]*0.37;
	    
	     B[a][b][a]=B[a][b][a]/A[a][b][a];
	     A[a][b][a]=B[a+4][b+1][a+1]+A[a][b][a];
	  }

    return 0;
}