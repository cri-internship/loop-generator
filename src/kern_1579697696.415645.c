#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(940, 240, 990, "ones");
	int ***B = create_three_dim_int(40, 740, 680, "ones");
	int ***C = create_three_dim_int(440, 990, 120, "ones");

	for (int b = 3; b < 240; b++)
	  for (int a = 5; a < 35; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-1][a-3]+A[a][b][a]-B[a][b][a];
	    
	     B[a][b][a]=C[a][b][a]-C[a][b][a];
	     B[a+1][b+1][a+5]=A[a][b][a]/C[a][b][a];
	    
	     B[a][b][a]=A[a][b][a]+B[a][b][a]/23;
	     C[a][b][a]=A[a-3][b-3][a-3]-B[a][b][a]*13;
	    
	     A[a][b][a]=C[a][b][a]/B[a][b][a];
	     B[a][b][a]=C[a][b][a+2]/A[a][b][a]*B[a][b][a];
	  }

    return 0;
}