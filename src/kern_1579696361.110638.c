#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(130, 130, "random");
	int **C = create_two_dim_int(390, 850, "random");
	int *A = create_one_dim_int(100, "random");

	for (int c = 0; c < 845; c++)
	  for (int b = 2; b < 99; b++)
	    for (int a = 2; a < 99; a++)
	    {
	      
	      A[a]=A[a+1]/40;
	      
	      C[a][b]=C[a][b+5]*A[a]-B[a][b];
	      
	      A[a]=A[a]-C[a][b]*18;
	      B[a][b]=A[a-2]-B[a][b]+C[a][b];
	    }

    return 0;
}