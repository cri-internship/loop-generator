#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *B = create_one_dim_int(670, "zeros");
	int ***A = create_three_dim_int(930, 170, 920, "zeros");

	for (int b = 3; b < 169; b++)
	  for (int a = 4; a < 669; a++)
	  {
	    
	     A[a][b][a]=A[a][b-3][a-3]-5;
	    
	     A[a][b][a]=A[a][b-1][a-3]+41;
	    
	     A[a][b][a]=A[a-4][b-2][a-4]+9;
	    
	     A[a][b][a]=A[a+2][b+1][a+1]+48;
	    
	     int var_a=B[a]/34;
	     int var_b=B[a]/48;
	    
	     int var_c=B[a]*8;
	     int var_d=B[a+1]/14;
	  }

    return 0;
}