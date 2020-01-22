#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(650, 920, 850, "ones");
	int ***A = create_three_dim_int(80, 920, 210, "ones");
	int **C = create_two_dim_int(20, 920, "ones");

	for (int b = 2; b < 915; b++)
	  for (int a = 5; a < 15; a++)
	  {
	    
	     B[a][b][a]=15;
	     float  var_a=B[a][b][a]/27;
	    
	     A[a][b][a]=A[a-5][b-2][a-5]+34;
	    
	     A[a][b][a]=A[a+3][b][a+1]+41;
	    
	     C[a][b]=C[a+5][b]/B[a][b][a];
	    
	     A[a][b][a]=A[a+4][b+5][a+2]*C[a][b];
	  }

    return 0;
}