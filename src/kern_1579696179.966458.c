#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(60, 190, "zeros");
	int **B = create_two_dim_int(830, 300, "zeros");
	int ***D = create_three_dim_int(840, 510, 960, "zeros");
	int *A = create_one_dim_int(950, "zeros");

	for (int b = 4; b < 190; b++)
	  for (int a = 5; a < 60; a++)
	  {
	    
	     C[a][b]=C[a-2][b-3]*17;
	    
	     D[a][b][a]=D[a][b-4][a-5]+39;
	    
	     D[a][b][a]=D[a+2][b+5][a+5]+8;
	    
	     A[a]=14;
	     A[a-3]=16;
	    
	     int var_a=A[a]+1;
	     int var_b=A[a-3]-13;
	  }

    return 0;
}