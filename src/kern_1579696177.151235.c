#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(820, 140, "random");

	for (int b = 3; b < 135; b++)
	  for (int a = 5; a < 815; a++)
	  {
	    
	     double var_a=A[a][b]+0.422;
	     A[a][b]=0.909;
	    
	     A[a][b]=A[a+5][b+5]/0.907;
	    
	     A[a][b]=A[a+3][b+5]-0.21;
	    
	     double var_b=A[a][b]*0.493;
	     double var_c=A[a-2][b-3]+0.65;
	  }

    return 0;
}