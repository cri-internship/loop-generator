#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *E = create_one_dim_int(460, "ones");
	int ***A = create_three_dim_int(700, 930, 490, "ones");
	int ***C = create_three_dim_int(20, 1000, 410, "ones");
	int ***D = create_three_dim_int(410, 190, 280, "ones");
	int **B = create_two_dim_int(170, 800, "ones");

	for (int b = 0; b < 185; b++)
	  for (int a = 0; a < 18; a++)
	  {
	    
	     D[a][b][a]=D[a+2][b+3][a+1]+A[a][b][a]-B[a][b]/E[a];
	    
	     C[a][b][a]=C[a][b][a+2]-D[a][b][a]*B[a][b]+E[a];
	    
	     D[a][b][a]=D[a+1][b+5][a+4]-41;
	    
	     int var_a=B[a][b]+10;
	     int var_b=B[a][b+3]/46;
	    
	     int var_c=E[a]+9;
	     int var_d=E[a+4]+49;
	  }

    return 0;
}