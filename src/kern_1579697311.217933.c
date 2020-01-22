#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***C = create_three_dim_int(360, 110, 230, "zeros");
	int **B = create_two_dim_int(10, 540, "zeros");
	int *A = create_one_dim_int(620, "zeros");
	int *D = create_one_dim_int(230, "zeros");

	for (int b = 0; b < 110; b++)
	  for (int a = 4; a < 230; a++)
	  {
	    
	     C[a][b][a]=C[a+3][b][a+5]/19;
	    
	     C[a][b][a]=35;
	    
	     int var_a=D[a]+3;
	     int var_b=D[a-2]/24;
	    
	     int var_c=A[a]+1;
	     int var_d=A[a-2]*22;
	  }

    return 0;
}