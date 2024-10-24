#include<stdio.h>
#include<conio.h>

void main( )
  { 
    int  m , n ;
    void swap( int *a , int *b ) ;
    clrscr( );
    printf( “Enter two numbers\n” ) ;
    scanf( “%d %d” , &m , &n) ;
    swap ( &m , &n ) ;
    printf ( “ The values of m & n after swapping are :\n “) ;
    printf ( “ %d %d “ , m, n ) ;
    getch( ) ;
  }
   Void swap ( int *a , int *b )
  {
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
  }
