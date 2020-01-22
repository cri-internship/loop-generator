#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(480, 960, "random");
	int *D = create_one_dim_int(210, "random");
	int *B = create_one_dim_int(920, "random");
	int **C = create_two_dim_int(540, 480, "random");

	for (int c = 5; c < 476; c++)
	  for (int b = 5; b < 540; b++)
	    for (int a = 5; a < 540; a++)
	    {
	      
	      C[a][b]=C[a-5][b-5]-A[a][b]*D[a]/B[a];
	      
	      B[a]=B[a+4]-19;
	      
	      D[a]=C[a][b]*B[a]/D[a];
	      A[a][b]=C[a][b+4]-D[a]+B[a];
	    }

    return 0;
}