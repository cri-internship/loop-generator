#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(540, 50, "random");
	int *A = create_one_dim_int(450, "random");

	for (int c = 4; c < 47; c++)
	  for (int b = 4; b < 445; b++)
	    for (int a = 4; a < 445; a++)
	    {
	      
	      B[a][b]=B[a-2][b-3]*12;
	      
	      B[a][b]=B[a-4][b-4]/37;
	      
	      A[a]=A[a+4]*37;
	      
	      B[a][b]=B[a][b+3]*1;
	      
	      A[a]=B[a][b];
	      
	      int var_a=A[a]/4;
	      int var_b=A[a+1]-10;
	    }

    return 0;
}