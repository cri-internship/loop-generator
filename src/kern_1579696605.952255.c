#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(910, 240, "random");
	int **A = create_two_dim_int(870, 80, "random");

	for (int c = 4; c < 80; c++)
	  for (int b = 5; b < 870; b++)
	    for (int a = 5; a < 870; a++)
	    {
	      
	      A[a][b]=A[a-1][b-2]-2;
	      
	      B[a][b]=B[a-5][b]+30;
	      
	      B[a][b]=B[a+1][b+1]*A[a][b];
	      
	      A[a][b]=14;
	      
	      A[a][b]=B[a][b]/A[a][b];
	      B[a][b]=B[a-5][b-3]/A[a][b];
	      
	      int var_a=A[a][b]*27;
	      int var_b=A[a-2][b-1]+31;
	    }

    return 0;
}