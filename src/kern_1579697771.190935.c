#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(880, 970, "ones");
	int ***B = create_three_dim_int(150, 560, 500, "ones");
	int ***C = create_three_dim_int(790, 550, 380, "ones");

	for (int b = 0; b < 545; b++)
	  for (int a = 1; a < 146; a++)
	  {
	    
	     C[a][b][a]=C[a][b][a+5]*46;
	    
	     B[a][b][a]=A[a][b]+C[a][b][a];
	     B[a+4][b][a+2]=A[a][b];
	    
	     B[a][b][a]=B[a][b][a]-A[a][b];
	     A[a][b]=B[a+4][b+4][a+1]-A[a][b]/10;
	    
	     int var_a=C[a][b][a]-28;
	     int var_b=C[a+1][b+5][a+1]+37;
	    
	     C[a][b][a]=A[a][b]-B[a][b][a]/C[a][b][a];
	     A[a][b]=A[a-1][b]+B[a][b][a];
	  }

    return 0;
}