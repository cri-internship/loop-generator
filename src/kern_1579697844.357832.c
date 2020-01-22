#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	float ***A = create_three_dim_float(840, 390, 950, "ones");
	float **B = create_two_dim_float(360, 350, "ones");

	for (int b = 0; b < 349; b++)
	  for (int a = 0; a < 355; a++)
	  {
	    
	     A[a][b][a]=B[a][b]+A[a][b][a];
	     B[a][b]=B[a+5][b+1]-A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]-0.144;
	     A[a][b][a]=A[a+2][b+4][a+3]/B[a][b];
	  }

    return 0;
}