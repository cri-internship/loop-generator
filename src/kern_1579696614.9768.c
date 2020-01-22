#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(520, 900, 970, "ones");
	int ***C = create_three_dim_int(750, 560, 80, "ones");
	int **B = create_two_dim_int(840, 690, "ones");

	for (int b = 4; b < 690; b++)
	  for (int a = 5; a < 515; a++)
	  {
	    
	     A[a][b][a]=A[a-5][b][a-2]*37;
	    
	     B[a][b]=B[a-3][b-4]-C[a][b][a];
	    
	     A[a][b][a]=A[a+5][b+1][a+2]+B[a][b]-C[a][b][a];
	    
	     int var_a=B[a][b]+33;
	     int var_b=B[a-5][b-4]*8;
	  }

    return 0;
}