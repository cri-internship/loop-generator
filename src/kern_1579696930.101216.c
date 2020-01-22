#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **A = create_two_dim_double(330, 430, "random");
	double **B = create_two_dim_double(570, 660, "random");

	for (int b = 3; b < 426; b++)
	  for (int a = 1; a < 325; a++)
	  {
	    
	     A[a][b]=A[a-1][b-1]+0.295;
	    
	     A[a][b]=A[a][b-3]+B[a][b];
	    
	     A[a][b]=A[a+5][b+4]/B[a][b];
	    
	     double var_a=A[a][b]+0.227;
	     double var_b=A[a+1][b+2]+0.828;
	  }

    return 0;
}