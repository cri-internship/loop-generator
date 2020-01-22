#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int *C = create_one_dim_int(690, "ones");
	int ***D = create_three_dim_int(320, 890, 770, "ones");
	int ***A = create_three_dim_int(680, 890, 140, "ones");
	int *B = create_one_dim_int(860, "ones");

	for (int c = 4; c < 770; c++)
	  for (int b = 4; b < 890; b++)
	    for (int a = 2; a < 320; a++)
	    {
	      
	      B[a]=B[a-2]/A[a][b][c];
	      
	      B[a]=B[a-1]*C[a];
	      
	      C[a]=13;
	      C[a+1]=36;
	      
	      D[a][b][c]=2;
	      D[a][b-4][c-4]=20;
	      
	      B[a]=C[a]/D[a][b][c]+B[a];
	      A[a][b][c]=C[a+5]/16;
	      
	      int var_a=C[a]/24;
	      int var_b=C[a-1]/1;
	    }

    return 0;
}