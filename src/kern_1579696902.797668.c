#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(870, "ones");
	int **A = create_two_dim_int(970, 120, "ones");
	int ***C = create_three_dim_int(80, 370, 920, "ones");

	for (int b = 5; b < 120; b++)
	  for (int a = 5; a < 80; a++)
	  {
	    
	     A[a][b]=A[a][b-5]/B[a]-9;
	    
	     B[a]=B[a+2]-14;
	    
	     B[a]=C[a][b][a]+A[a][b];
	     A[a][b]=C[a-5][b-2][a-5]/B[a];
	    
	     C[a][b][a]=B[a]+A[a][b]-18;
	     B[a]=B[a-3]+C[a][b][a]/44;
	    
	     A[a][b]=A[a][b]/C[a][b][a];
	     B[a]=A[a-2][b-1]+28;
	  }

    return 0;
}