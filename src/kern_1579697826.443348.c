#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(880, 650, "ones");
	double **A = create_two_dim_double(570, 100, "ones");
	double ***C = create_three_dim_double(700, 730, 1000, "ones");

	for (int b = 2; b < 99; b++)
	  for (int a = 3; a < 565; a++)
	  {
	    
	     A[a][b]=C[a][b][a];
	     A[a+5][b+1]=B[a][b]*B[a][b];
	    
	     B[a][b]=0.184;
	     B[a-3][b-2]=0.049;
	  }

    return 0;
}