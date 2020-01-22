#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(610, 370, "ones");
	double *B = create_one_dim_double(100, "ones");

	for (int b = 2; b < 365; b++)
	  for (int a = 3; a < 95; a++)
	  {
	    
	     B[a]=B[a-1]-0.499;
	    
	     A[a][b]=A[a+2][b+2]-0.103;
	    
	     A[a][b]=A[a][b+5]+B[a];
	    
	     B[a]=0.593;
	    
	     A[a][b]=A[a][b]*0.794;
	     B[a]=A[a+3][b]/0.763;
	    
	     double var_a=A[a][b]*0.236;
	     double var_b=A[a-3][b-2]*0.803;
	  }

    return 0;
}