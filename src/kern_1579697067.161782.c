#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(850, 530, 320, "zeros");
	int ***A = create_three_dim_int(110, 490, 60, "zeros");
	int **D = create_two_dim_int(770, 790, "zeros");
	int ***C = create_three_dim_int(20, 530, 410, "zeros");

	for (int b = 4; b < 490; b++)
	  for (int a = 5; a < 17; a++)
	  {
	    
	     A[a][b][a]=A[a-1][b-3][a-4]+35/B[a][b][a];
	    
	     B[a][b][a]=B[a-2][b-4][a-5]+23;
	    
	     D[a][b]=D[a][b+3]*31;
	    
	     D[a][b]=D[a+2][b+1]/47;
	    
	     C[a][b][a]=C[a+3][b][a+3]-28;
	    
	     B[a][b][a]=B[a+4][b+4][a]/42;
	    
	     D[a][b]=A[a][b][a]+D[a][b];
	     C[a][b][a]=A[a+1][b][a+4]-B[a][b][a]+D[a][b];
	  }

    return 0;
}