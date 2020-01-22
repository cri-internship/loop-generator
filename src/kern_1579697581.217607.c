#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(900, 960, 290, "zeros");
	int ***B = create_three_dim_int(110, 190, 870, "zeros");
	int **C = create_two_dim_int(420, 640, "zeros");

	for (int b = 4; b < 640; b++)
	  for (int a = 1; a < 420; a++)
	  {
	    
	     A[a][b][a]=A[a][b-3][a-1]-41;
	    
	     int var_a=A[a][b][a]-42;
	     int var_b=A[a+3][b][a+2]*9;
	    
	     int var_c=C[a][b]-41;
	     int var_d=C[a-1][b-4]*47;
	  }

    return 0;
}