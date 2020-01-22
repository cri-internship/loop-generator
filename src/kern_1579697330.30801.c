#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(620, 440, 960, "zeros");
	int ***C = create_three_dim_int(350, 340, 900, "zeros");
	int ***A = create_three_dim_int(960, 850, 230, "zeros");

	for (int b = 4; b < 340; b++)
	  for (int a = 5; a < 350; a++)
	  {
	    
	     A[a][b][a]=A[a][b+5][a+3]*C[a][b][a]+B[a][b][a];
	    
	     B[a][b][a]=B[a+2][b+1][a+4]-A[a][b][a]+A[a][b][a];
	    
	     B[a][b][a]=C[a][b][a]+A[a][b][a];
	    
	     C[a][b][a]=B[a][b][a];
	     C[a-1][b-4][a]=A[a][b][a];
	    
	     A[a][b][a]=A[a][b][a]+C[a][b][a];
	     B[a][b][a]=A[a-5][b-3][a-5]/B[a][b][a]+C[a][b][a];
	    
	     int var_a=A[a][b][a]-9;
	     int var_b=A[a-3][b][a-4]-50;
	  }

    return 0;
}