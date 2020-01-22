#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double ***D = create_three_dim_double(950, 910, 510, "ones");
	double **A = create_two_dim_double(570, 70, "ones");
	double **C = create_two_dim_double(940, 470, "ones");
	double **B = create_two_dim_double(340, 640, "ones");
	double **E = create_two_dim_double(620, 190, "ones");

	for (int b = 5; b < 188; b++)
	  for (int a = 1; a < 618; a++)
	  {
	    
	     E[a][b]=E[a-1][b-5]*A[a][b]-B[a][b];
	    
	     E[a][b]=0.078;
	  }

    return 0;
}