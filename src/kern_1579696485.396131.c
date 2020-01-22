#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(30, 740, 870, "zeros");
	int **D = create_two_dim_int(450, 760, "zeros");
	int ***A = create_three_dim_int(880, 140, 140, "zeros");
	int ***B = create_three_dim_int(350, 650, 200, "zeros");
	int ***C = create_three_dim_int(630, 140, 630, "zeros");

	for (int b = 2; b < 137; b++)
	  for (int a = 5; a < 346; a++)
	  {
	    
	     C[a][b][a]=C[a-5][b][a-2]-E[a][b][a]+11;
	    
	     A[a][b][a]=A[a+1][b+1][a+3]*C[a][b][a];
	    
	     A[a][b][a]=A[a+2][b+3][a+3]-31;
	    
	     int var_a=B[a][b][a]*1;
	     int var_b=B[a+4][b+3][a+4]-48;
	    
	     int var_c=C[a][b][a]/46;
	     int var_d=C[a-2][b-2][a]*13;
	  }

    return 0;
}