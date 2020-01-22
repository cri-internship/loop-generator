#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	double *B = create_one_dim_double(10, "random");
	double ***A = create_three_dim_double(480, 950, 170, "random");

	for (int b = 3; b < 946; b++)
	  for (int a = 5; a < 10; a++)
	  {
	    
	     A[a][b][a]=A[a-4][b-3][a-2]*0.097;
	    
	     A[a][b][a]=A[a-1][b-2][a-5]+B[a];
	    
	     B[a]=B[a-3]-0.988;
	    
	     A[a][b][a]=A[a][b+4][a+5]/B[a];
	    
	     A[a][b][a]=A[a+2][b][a+1]+0.153;
	    
	     A[a][b][a]=A[a+4][b][a+3]-B[a];
	  }

    return 0;
}