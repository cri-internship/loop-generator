#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(750, 610, 990, "zeros");
	int ***B = create_three_dim_int(420, 140, 330, "zeros");
	int *A = create_one_dim_int(590, "zeros");

	for (int b = 5; b < 140; b++)
	  for (int a = 5; a < 416; a++)
	  {
	    
	     C[a][b][a]=C[a-2][b-2][a-3]+4;
	    
	     B[a][b][a]=B[a-3][b-5][a-1]/16;
	    
	     A[a]=A[a+5]/B[a][b][a];
	    
	     B[a][b][a]=B[a+4][b][a+4]-42;
	    
	     C[a][b][a]=31;
	    
	     A[a]=3;
	  }

    return 0;
}