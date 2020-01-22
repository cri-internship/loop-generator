#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **E = create_two_dim_double(870, 230, "zeros");
	double *D = create_one_dim_double(470, "zeros");
	double **C = create_two_dim_double(240, 660, "zeros");
	double *B = create_one_dim_double(980, "zeros");
	double *A = create_one_dim_double(940, "zeros");

	for (int b = 0; b < 226; b++)
	  for (int a = 0; a < 866; a++)
	  {
	    
	     E[a][b]=0.848;
	     E[a+4][b+4]=0.034;
	  }

    return 0;
}