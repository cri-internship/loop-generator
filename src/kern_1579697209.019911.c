#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(350, 500, 700, "random");
	double ***B = create_three_dim_double(480, 540, 650, "random");
	double *C = create_one_dim_double(290, "random");

	for (int b = 3; b < 499; b++)
	  for (int a = 3; a < 288; a++)
	  {
	    
	     A[a][b][a]=0.391;
	     A[a][b+1][a+5]=0.418;
	    
	     double var_a=B[a][b][a]+0.749;
	     double var_b=B[a-1][b-3][a-3]*0.913;
	    
	     double var_c=C[a]*0.553;
	     double var_d=C[a+2]*0.034;
	  }

    return 0;
}