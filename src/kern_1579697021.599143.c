#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *A = create_one_dim_int(420, "random");
	int **B = create_two_dim_int(960, 290, "random");

	for (int c = 1; c < 289; c++)
	  for (int b = 0; b < 955; b++)
	    for (int a = 0; a < 955; a++)
	    {
	      
	      B[a][b]=49;
	      float  var_a=B[a][b]/11;
	      
	      B[a][b]=B[a+5][b+1]*A[a];
	      
	      B[a][b]=B[a+2][b]+40;
	      
	      int var_b=B[a][b]+28;
	      int var_c=B[a+4][b]*12;
	    }

    return 0;
}