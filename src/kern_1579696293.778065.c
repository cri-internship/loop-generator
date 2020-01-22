#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(50, 270, "random");
	int *B = create_one_dim_int(210, "random");

	for (int c = 1; c < 265; c++)
	  for (int b = 2; b < 47; b++)
	    for (int a = 2; a < 47; a++)
	    {
	      
	      A[a][b]=A[a-2][b-1]/B[a];
	      
	      A[a][b]=A[a+3][b+5]-B[a];
	      
	      B[a]=B[a+4]*A[a][b];
	      
	      B[a]=A[a][b];
	      
	      B[a]=A[a][b]+B[a];
	      A[a][b]=A[a+2][b]*B[a];
	    }

    return 0;
}