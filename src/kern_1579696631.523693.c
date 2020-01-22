#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(780, 870, 160, "zeros");
	int *C = create_one_dim_int(310, "zeros");
	int **B = create_two_dim_int(610, 960, "zeros");
	int **A = create_two_dim_int(360, 660, "zeros");

	for (int b = 5; b < 660; b++)
	  for (int a = 4; a < 310; a++)
	  {
	    
	     B[a][b]=B[a+3][b+5]/24-D[a][b][a]*C[a];
	    
	     D[a][b][a]=41;
	     D[a][b+4][a]=13;
	    
	     B[a][b]=39;
	    
	     C[a]=B[a][b];
	     C[a-4]=A[a][b]*B[a][b]+D[a][b][a];
	    
	     int var_a=A[a][b]*4;
	     int var_b=A[a-3][b]*14;
	    
	     int var_c=B[a][b]-28;
	     int var_d=B[a-1][b-5]/40;
	  }

    return 0;
}