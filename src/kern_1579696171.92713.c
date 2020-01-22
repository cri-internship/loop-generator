#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(350, 650, "zeros");
	int ***B = create_three_dim_int(560, 990, 750, "zeros");

	for (int b = 3; b < 645; b++)
	  for (int a = 5; a < 345; a++)
	  {
	    
	     B[a][b][a]=B[a-1][b-3][a-1]-22;
	    
	     A[a][b]=A[a+5][b+5]*25;
	    
	     B[a][b][a]=B[a][b+5][a]-12;
	    
	     A[a][b]=B[a][b][a];
	    
	     int var_a=B[a][b][a]/37;
	     int var_b=B[a-1][b-3][a-2]*45;
	  }

    return 0;
}