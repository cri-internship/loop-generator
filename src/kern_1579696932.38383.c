#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(270, "random");
	int **B = create_two_dim_int(310, 490, "random");

	for (int c = 0; c < 489; c++)
	  for (int b = 3; b < 267; b++)
	    for (int a = 3; a < 267; a++)
	    {
	      
	      A[a]=A[a-3]-46;
	      
	      A[a]=A[a+2]+B[a][b];
	      
	      B[a][b]=B[a+4][b+1]-A[a];
	      
	      B[a][b]=B[a+4][b]/A[a];
	      
	      A[a]=A[a+3]*37;
	      
	      int var_a=B[a][b]-29;
	      int var_b=B[a+5][b]-7;
	      
	      A[a]=A[a]+B[a][b];
	      B[a][b]=A[a-1]/B[a][b];
	    }

    return 0;
}