#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(940, "random");
	int ***B = create_three_dim_int(100, 930, 390, "random");

	for (int b = 1; b < 927; b++)
	  for (int a = 5; a < 98; a++)
	  {
	    
	     B[a][b][a]=B[a-5][b-1][a-1]+47;
	    
	     A[a]=A[a-5]/41;
	    
	     B[a][b][a]=B[a][b+3][a+2]*A[a];
	  }

    return 0;
}