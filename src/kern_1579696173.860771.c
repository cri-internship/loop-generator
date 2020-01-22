#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **A = create_two_dim_int(670, 720, "ones");
	int *C = create_one_dim_int(1000, "ones");
	int ***B = create_three_dim_int(300, 750, 940, "ones");
	int *D = create_one_dim_int(520, "ones");

	for (int b = 4; b < 720; b++)
	  for (int a = 5; a < 518; a++)
	  {
	    
	     C[a]=C[a-5]/13;
	    
	     C[a]=B[a][b][a];
	    
	     A[a][b]=17;
	     A[a-4][b-4]=3;
	    
	     A[a][b]=C[a]/D[a]-B[a][b][a];
	    
	     D[a]=39;
	     D[a+2]=8;
	    
	     int var_a=A[a][b]+14;
	     int var_b=A[a][b-4]/9;
	    
	     D[a]=C[a]-A[a][b]*D[a];
	     C[a]=C[a+5]/11-D[a];
	  }

    return 0;
}