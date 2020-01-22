#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(240, 120, 110, "random");
	int *A = create_one_dim_int(470, "random");

	for (int c = 0; c < 109; c++)
	  for (int b = 0; b < 118; b++)
	    for (int a = 5; a < 237; a++)
	    {
	      
	      B[a][b][c]=A[a];
	      B[a+3][b+2][c+1]=A[a];
	      
	      int var_a=A[a]+26;
	      int var_b=A[a-5]-7;
	    }

    return 0;
}