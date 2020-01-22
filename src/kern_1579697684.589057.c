#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *C = create_one_dim_double(390, "random");
	double ***B = create_three_dim_double(440, 190, 720, "random");
	double *D = create_one_dim_double(190, "random");
	double *A = create_one_dim_double(120, "random");

	for (int b = 3; b < 190; b++)
	  for (int a = 5; a < 190; a++)
	  {
	    
	     C[a]=C[a-5]+0.929;
	    
	     D[a]=0.357;
	     float  var_a=D[a]*0.36;
	    
	     float  var_b=C[a]+0.965;
	    
	     B[a][b][a]=0.435;
	     B[a-2][b-3][a-4]=0.704;
	    
	     double var_d=D[a]-0.46;
	     double var_e=D[a-5]+0.218;
	  }

    return 0;
}