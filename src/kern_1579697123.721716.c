#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***B = create_three_dim_int(60, 340, 120, "ones");
	int ***C = create_three_dim_int(770, 670, 260, "ones");
	int ***A = create_three_dim_int(270, 890, 730, "ones");
	int ***E = create_three_dim_int(440, 410, 440, "ones");
	int *D = create_one_dim_int(480, "ones");

	for (int c = 1; c < 120; c++)
	  for (int b = 0; b < 340; b++)
	    for (int a = 5; a < 60; a++)
	    {
	      
	      A[a][b][c]=A[a+2][b+3][c+5]-B[a][b][c]/D[a]*C[a][b][c];
	      
	      E[a][b][c]=34;
	      E[a+5][b+3][c+1]=49;
	      
	      E[a][b][c]=11;
	      
	      int var_a=D[a]+6;
	      
	      int var_c=B[a][b][c]/48;
	      int var_d=B[a-5][b][c-1]+14;
	    }

    return 0;
}