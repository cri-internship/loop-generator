#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(660, 680, 370, "ones");
	int ***A = create_three_dim_int(780, 460, 80, "ones");
	int **C = create_two_dim_int(620, 350, "ones");

	for (int b = 0; b < 345; b++)
	  for (int a = 0; a < 615; a++)
	  {
	    
	     A[a][b][a]=A[a+3][b+1][a+4]-30;
	    
	     C[a][b]=C[a+5][b+5]*A[a][b][a]-B[a][b][a];
	    
	     int var_a=C[a][b]-8;
	     int var_b=C[a+5][b+3]*43;
	  }

    return 0;
}