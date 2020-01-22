#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../init_array_lib/init_dyn_array.h"


int main( int argc, const char* argv[] )
{
    srand(time(NULL));

    
	int **B = create_two_dim_int(30, 180, "zeros");
	int ***A = create_three_dim_int(60, 650, 390, "zeros");

	for (int d = 2; d < 390; d++)
	  for (int c = 5; c < 176; c++)
	    for (int b = 1; b < 27; b++)
	      for (int a = 1; a < 27; a++)
	      {
	        
	       A[a][b][c]=A[a+5][b][c]/B[a][b];
	        
	       B[a][b]=B[a+3][b+4]+29;
	        
	       B[a][b]=B[a+2][b]/2;
	        
	       int var_a=B[a][b]*18;
	       int var_b=B[a+1][b+4]/26;
	        
	       int var_c=A[a][b][c]*23;
	       int var_d=A[a][b-5][c]*4;
	        
	       int var_e=A[a][b][c]*24;
	       int var_f=A[a-1][b][c-2]*49;
	      }

    return 0;
}