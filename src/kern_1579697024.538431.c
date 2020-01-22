#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(20, 680, 110, "random");
	double ***B = create_three_dim_double(20, 730, 460, "random");

	for (int b = 4; b < 680; b++)
	  for (int a = 5; a < 20; a++)
	  {
	    
	     B[a][b][a]=0.214;
	     B[a-2][b][a-5]=0.319;
	    
	     A[a][b][a]=0.107;
	     A[a-5][b-4][a-3]=0.677;
	    
	     double var_a=A[a][b][a]+0.512;
	     double var_b=A[a-2][b-3][a]+0.476;
	    
	     B[a][b][a]=A[a][b][a]-0.768;
	     A[a][b][a]=A[a][b][a-4]+B[a][b][a];
	  }

    return 0;
}