#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***E = create_three_dim_int(250, 80, 10, "zeros");
	int *C = create_one_dim_int(230, "zeros");
	int ***A = create_three_dim_int(340, 520, 160, "zeros");
	int **D = create_two_dim_int(610, 960, "zeros");
	int **B = create_two_dim_int(960, 650, "zeros");

	for (int b = 4; b < 78; b++)
	  for (int a = 5; a < 246; a++)
	  {
	    
	     E[a][b][a]=E[a+4][b+2][a+1]*32;
	    
	     C[a]=A[a][b][a]-B[a][b]/E[a][b][a]+19*D[a][b];
	     A[a][b][a]=A[a-5][b-4][a-2]/B[a][b]*D[a][b]+E[a][b][a];
	    
	     int var_a=A[a][b][a]+25;
	     int var_b=A[a-1][b-1][a-1]*13;
	    
	     int var_c=B[a][b]-20;
	     int var_d=B[a+5][b]+0;
	  }

    return 0;
}