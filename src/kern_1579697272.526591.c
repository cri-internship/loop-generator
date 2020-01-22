#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(320, "zeros");
	double ***A = create_three_dim_double(930, 470, 720, "zeros");

	for (int b = 0; b < 467; b++)
	  for (int a = 0; a < 320; a++)
	  {
	    
	     B[a]=0.103;
	     float  var_a=B[a]/0.469;
	    
	     B[a]=A[a][b][a];
	    
	     A[a][b][a]=0.212;
	     A[a+2][b][a]=0.731;
	    
	     double var_b=A[a][b][a]*0.665;
	     double var_c=A[a+5][b+3][a+3]+0.823;
	    
	     double var_d=A[a][b][a]-0.447;
	     double var_e=A[a][b+3][a]/0.561;
	  }

    return 0;
}