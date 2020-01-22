#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(60, 360, "ones");
	int *A = create_one_dim_int(850, "ones");

	for (int c = 0; c < 355; c++)
	  for (int b = 5; b < 59; b++)
	    for (int a = 5; a < 59; a++)
	    {
	      
	      A[a]=A[a-2]-B[a][b];
	      
	      A[a]=A[a+3]*B[a][b];
	      
	      B[a][b]=B[a+1][b+5]+A[a];
	      
	      A[a]=A[a+2]-18;
	      
	      int var_a=A[a]+2;
	      int var_b=A[a-5]*35;
	      
	      A[a]=A[a]/25;
	      B[a][b]=A[a-3]+B[a][b];
	    }

    return 0;
}