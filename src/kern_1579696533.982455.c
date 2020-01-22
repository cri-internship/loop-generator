#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(910, "random");
	double ***A = create_three_dim_double(520, 700, 900, "random");

	for (int b = 1; b < 697; b++)
	  for (int a = 5; a < 515; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b][a-2]-B[a];
	    
	     A[a][b][a]=A[a-5][b-1][a-2]+0.158;
	    
	     A[a][b][a]=A[a-5][b-1][a-1]*B[a];
	    
	     A[a][b][a]=A[a+5][b+2][a+3]-B[a];
	    
	     B[a]=B[a]/A[a][b][a];
	     A[a][b][a]=B[a+4]*0.312;
	  }

    return 0;
}