#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **C = create_two_dim_int(960, 890, "random");
	int ***B = create_three_dim_int(690, 510, 20, "random");
	int **A = create_two_dim_int(940, 490, "random");

	for (int b = 4; b < 487; b++)
	  for (int a = 4; a < 685; a++)
	  {
	    
	     C[a][b]=C[a-4][b-2]*B[a][b][a]/A[a][b];
	    
	     A[a][b]=C[a][b]+C[a][b];
	     A[a-4][b-4]=C[a][b]+B[a][b][a];
	    
	     A[a][b]=0;
	    
	     C[a][b]=A[a][b]/C[a][b]*B[a][b][a];
	     B[a][b][a]=A[a-2][b-4]-B[a][b][a]*C[a][b];
	    
	     int var_a=B[a][b][a]+1;
	     int var_b=B[a+5][b+2][a+5]+30;
	    
	     int var_c=C[a][b]-25;
	     int var_d=C[a-1][b-1]+21;
	  }

    return 0;
}