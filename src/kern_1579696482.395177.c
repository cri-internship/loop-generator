#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(520, 590, "ones");
	double **A = create_two_dim_double(820, 110, "ones");

	for (int b = 5; b < 105; b++)
	  for (int a = 2; a < 515; a++)
	  {
	    
	     B[a][b]=B[a][b+1]/0.216;
	    
	     B[a][b]=B[a+5][b+1]-0.832;
	    
	     A[a][b]=B[a][b];
	     A[a][b-4]=B[a][b];
	    
	     A[a][b]=0.779;
	    
	     double var_a=A[a][b]*0.0;
	     double var_b=A[a+4][b+1]-0.266;
	  }

    return 0;
}