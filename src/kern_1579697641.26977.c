#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(250, 730, "zeros");
	int **A = create_two_dim_int(870, 80, "zeros");
	int ***C = create_three_dim_int(640, 110, 890, "zeros");
	int *D = create_one_dim_int(320, "zeros");

	for (int b = 5; b < 76; b++)
	  for (int a = 4; a < 635; a++)
	  {
	    
	     C[a][b][a]=C[a-4][b-5][a]-B[a][b];
	    
	     A[a][b]=A[a-4][b-5]/47;
	    
	     A[a][b]=A[a+3][b+4]+29;
	    
	     C[a][b][a]=C[a+3][b][a+5]/15;
	    
	     A[a][b]=A[a+5][b+1]/16;
	    
	     int var_a=C[a][b][a]+9;
	     int var_b=C[a][b-1][a]+12;
	    
	     int var_c=C[a][b][a]/7;
	     int var_d=C[a][b-1][a-2]*27;
	  }

    return 0;
}