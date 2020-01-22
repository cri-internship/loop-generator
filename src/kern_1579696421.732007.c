#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **C = create_two_dim_double(250, 330, "random");
	double **A = create_two_dim_double(370, 800, "random");
	double ***B = create_three_dim_double(200, 60, 880, "random");

	for (int b = 2; b < 60; b++)
	  for (int a = 5; a < 200; a++)
	  {
	    
	     A[a][b]=A[a-1][b-2]-0.481;
	    
	     B[a][b][a]=0.614;
	     B[a][b-1][a-2]=0.445;
	    
	     double var_a=B[a][b][a]*0.325;
	     double var_b=B[a-5][b-2][a]/0.148;
	    
	     double var_c=A[a][b]/0.639;
	     double var_d=A[a+2][b+2]+0.061;
	  }

    return 0;
}