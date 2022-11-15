#ifndef FUNCTION_LIKE_MACRO
#define FUNCTION_LIKE_MACRO
/**
 *File: 3-function_like_macro.h
 *Auth: Ayodele Abiola
 *Desc: Header file that defines a function-like macro ABS(x)
 *	that computes the absolute value of a number x.
 */
#define ABS(x) ((x) < (0) ? ((x) * (-1)) : (x))
#endif
