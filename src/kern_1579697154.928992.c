#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***B = create_three_dim_double(520, 40, 250, "random");
	double *C = create_one_dim_double(740, "random");
	double **A = create_two_dim_double(500, 40, "random");

	for (int b = 2; b < 37; b++)
	  for (int a = 5; a < 500; a++)
	  {
	    
	     C[a]=C[a-4]/0.992;
	    
	     B[a][b][a]=B[a+4][b][a+5]/0.676-A[a][b];
	    
	     B[a][b][a]=0.564;
	    
	     A[a][b]=0.133;
	     A[a-2][b-2]=0.497;
	    
	     B[a][b][a]=B[a][b][a]/C[a]*A[a][b];
	     A[a][b]=B[a+3][b+3][a]+A[a][b];
	  }

    return 0;
}