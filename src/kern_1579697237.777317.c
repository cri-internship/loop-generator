#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(30, "random");
	double **A = create_two_dim_double(680, 850, "random");

	for (int b = 1; b < 846; b++)
	  for (int a = 5; a < 26; a++)
	  {
	    
	     B[a]=B[a-5]*0.785;
	    
	     B[a]=0.577;
	    
	     B[a]=B[a+4]/A[a][b];
	    
	     A[a][b]=0.22;
	     A[a-3][b-1]=0.541;
	    
	     A[a][b]=B[a];
	    
	     double var_b=B[a]/0.076;
	     double var_c=B[a-4]*0.496;
	    
	     double var_d=A[a][b]*0.839;
	     double var_e=A[a-1][b-1]+0.978;
	  }

    return 0;
}