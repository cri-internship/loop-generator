#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **D = create_two_dim_int(300, 240, "random");
	int **C = create_two_dim_int(730, 190, "random");
	int *B = create_one_dim_int(770, "random");
	int *A = create_one_dim_int(290, "random");

	for (int c = 2; c < 290; c++)
	  for (int b = 2; b < 290; b++)
	    for (int a = 2; a < 290; a++)
	    {
	      
	      B[a]=B[a+1]*7;
	      
	      int var_a=A[a]+20;
	      int var_b=A[a-2]/10;
	      
	      A[a]=A[a]+B[a]-C[a][b]/D[a][b];
	    }

    return 0;
}