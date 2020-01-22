#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***C = create_three_dim_double(930, 570, 320, "ones");
	double ***B = create_three_dim_double(330, 500, 160, "ones");
	double *A = create_one_dim_double(250, "ones");

	for (int b = 4; b < 500; b++)
	  for (int a = 4; a < 246; a++)
	  {
	    
	     A[a]=A[a-4]+0.902;
	    
	     A[a]=A[a+4]+0.059;
	    
	     B[a][b][a]=C[a][b][a];
	     B[a-4][b-4][a-3]=A[a];
	    
	     double var_a=C[a][b][a]/0.138;
	     double var_b=C[a-2][b-1][a-1]*0.847;
	    
	     double var_c=B[a][b][a]/0.383;
	     double var_d=B[a][b-4][a-4]+0.029;
	    
	     double var_e=A[a]/0.409;
	     double var_f=A[a+2]+0.292;
	  }

    return 0;
}