#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **D = create_two_dim_double(40, 690, "zeros");
	double ***B = create_three_dim_double(10, 670, 840, "zeros");
	double **A = create_two_dim_double(620, 30, "zeros");
	double *C = create_one_dim_double(20, "zeros");

	for (int b = 2; b < 30; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     A[a][b]=A[a-4][b-1]/C[a];
	    
	     B[a][b][a]=B[a-5][b-2][a-1]+A[a][b]*D[a][b];
	    
	     A[a][b]=A[a-2][b-1]*0.881;
	    
	     C[a]=0.494;
	     C[a+2]=0.48;
	    
	     D[a][b]=A[a][b]-B[a][b][a]/D[a][b];
	  }

    return 0;
}