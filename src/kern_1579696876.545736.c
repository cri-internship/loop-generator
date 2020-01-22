#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***A = create_three_dim_double(810, 60, 560, "random");
	double *B = create_one_dim_double(520, "random");

	for (int b = 3; b < 60; b++)
	  for (int a = 3; a < 518; a++)
	  {
	    
	     A[a][b][a]=A[a-3][b][a-1]+0.748;
	    
	     B[a]=B[a]+A[a][b][a];
	     B[a]=0.348;
	    
	     A[a][b][a]=A[a][b][a+5]*0.612;
	    
	     B[a]=B[a+2]*0.22;
	    
	     double var_a=B[a]+0.16;
	     B[a]=0.446;
	    
	     double var_b=B[a]-0.447;
	     B[a]=0.842;
	    
	     double var_c=A[a][b][a]/0.592;
	     double var_d=A[a-1][b-3][a-1]+0.066;
	  }

    return 0;
}