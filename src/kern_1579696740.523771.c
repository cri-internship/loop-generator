#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double **B = create_two_dim_double(370, 390, "ones");
	double ***A = create_three_dim_double(70, 1000, 290, "ones");
	double ***C = create_three_dim_double(340, 240, 60, "ones");

	for (int b = 0; b < 999; b++)
	  for (int a = 0; a < 66; a++)
	  {
	    
	     A[a][b][a]=C[a][b][a]/B[a][b];
	     A[a+4][b+1][a+4]=C[a][b][a];
	  }

    return 0;
}