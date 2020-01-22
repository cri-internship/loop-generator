#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **E = create_two_dim_int(460, 480, "random");
	int ***A = create_three_dim_int(330, 90, 860, "random");
	int *B = create_one_dim_int(370, "random");
	int *C = create_one_dim_int(80, "random");
	int *D = create_one_dim_int(910, "random");

	for (int b = 0; b < 89; b++)
	  for (int a = 1; a < 75; a++)
	  {
	    
	     C[a]=C[a-1]*16;
	    
	     C[a]=C[a+2]+13;
	    
	     C[a]=C[a+5]/16+D[a]*E[a][b]-B[a];
	    
	     A[a][b][a]=A[a+3][b+1][a+3]/31;
	    
	     int var_a=B[a]/10;
	     int var_b=B[a+5]+46;
	    
	     B[a]=D[a]/45*B[a];
	  }

    return 0;
}