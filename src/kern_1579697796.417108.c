#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(330, 540, 420, "zeros");
	int **A = create_two_dim_int(120, 290, "zeros");

	for (int b = 4; b < 288; b++)
	  for (int a = 2; a < 118; a++)
	  {
	    
	     A[a][b]=A[a+2][b+2]+25;
	    
	     A[a][b]=B[a][b][a];
	    
	     int var_a=A[a][b]*6;
	     int var_b=A[a-2][b-4]+19;
	  }

    return 0;
}