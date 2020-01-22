#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(230, 930, 190, "random");
	int ***A = create_three_dim_int(280, 270, 110, "random");
	int *B = create_one_dim_int(40, "random");

	for (int b = 3; b < 265; b++)
	  for (int a = 5; a < 230; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-3][a-2]*B[a]+A[a][b][a];
	    
	     C[a][b][a]=C[a][b-1][a-5]*6;
	    
	     A[a][b][a]=A[a-3][b-3][a]*C[a][b][a];
	    
	     A[a][b][a]=A[a+2][b+5][a+1]/B[a]*43;
	    
	     A[a][b][a]=A[a+4][b+5][a+5]+35;
	  }

    return 0;
}