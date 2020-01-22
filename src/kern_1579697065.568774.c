#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int ***D = create_three_dim_int(520, 240, 920, "random");
	int **E = create_two_dim_int(460, 540, "random");
	int **C = create_two_dim_int(870, 320, "random");
	int **B = create_two_dim_int(810, 660, "random");
	int ***A = create_three_dim_int(280, 480, 870, "random");

	for (int b = 5; b < 240; b++)
	  for (int a = 4; a < 277; a++)
	  {
	    
	     A[a][b][a]=A[a-2][b-4][a-4]*41;
	    
	     B[a][b]=B[a-1][b-5]-38;
	    
	     D[a][b][a]=D[a-3][b][a-2]/6;
	    
	     A[a][b][a]=A[a][b+1][a+3]/B[a][b]+C[a][b]*D[a][b][a]-44;
	    
	     int var_a=C[a][b]*34;
	     int var_b=C[a-4][b-1]/34;
	    
	     int var_c=A[a][b][a]+13;
	     int var_d=A[a-4][b][a-4]*26;
	  }

    return 0;
}