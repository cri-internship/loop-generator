#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***A = create_three_dim_int(620, 570, 560, "random");
	int **B = create_two_dim_int(700, 860, "random");
	int ***C = create_three_dim_int(40, 980, 20, "random");

	for (int b = 4; b < 569; b++)
	  for (int a = 5; a < 40; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b-2][a-2]-31;
	    
	     A[a][b][a]=A[a+2][b+1][a+5]*B[a][b]-C[a][b][a];
	    
	     B[a][b]=20;
	     B[a+3][b+3]=8;
	    
	     B[a][b]=A[a][b][a];
	    
	     int var_a=B[a][b]/43;
	     int var_b=B[a+5][b+1]/28;
	  }

    return 0;
}