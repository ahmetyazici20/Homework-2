/****************************************************************************
 * Copyleft (L) 2021 CENG - All Rights Not Reserved
 * You may use, distribute and modify this code.
 ****************************************************************************/

 /**
  * @file CE103-HW2-Lib.c
  * @author Ahmet Burak YAZICI
  * @date 16 November 2021
  *
  * @brief <b> HW-2 Functions </b>
  *
  * HW-2 Sample Lib Functions
  *
  * @see http://bilgisayar.mmf.erdogan.edu.tr/en/
  *
  */

#include "CE103-HW2-Lib.h"

  /**
   @name TestFunction(fnCE103HW2Lib)
	  @brief \b Auto Generated Test Function

	  Auto Generated Test Function Has Doxygen and Plantuml Integration

   Sample Web Page Link
   @see https://www.cplusplus.com/reference/cstring/strcpy/

   Sample Image AES Block Decryption Operation

   @image html aes_enc_dec.png
   @image rtf aes_enc_dec.png
   @image latex aes_enc_dec.png

   Sample Related Function Link
   @see TestFunction (fnCE103HW2Lib)
   <b> Plant UML Sample </b> <BR>
   @image html fnCE103HW2Lib.png
   @image rtf fnCE103HW2Lib.png
   @image latex fnCE103HW2Lib.png

   <!--

	  @startuml fnCE103HW2Lib.png

	  title Servlet Container

	  (*) --> "ClickServlet.handleRequest()"
	  --> "new Page"

	  if "Page.onSecurityCheck" then
		->[true] "Page.onInit()"

		if "isForward?" then
		 ->[no] "Process controls"

		 if "continue processing?" then
		   -->[yes] ===RENDERING===
		 else
		   -->[no] ===REDIRECT_CHECK===
		 endif

		else
		 -->[yes] ===RENDERING===
		endif

		if "is Post?" then
		  -->[yes] "Page.onPost()"
		  --> "Page.onRender()" as render
		  --> ===REDIRECT_CHECK===
		else
		  -->[no] "Page.onGet()"
		  --> render
		endif

	  else
		-->[false] ===REDIRECT_CHECK===
	  endif

	  if "Do redirect?" then
	   ->[yes] "redirect request"
	   --> ==BEFORE_DESTROY===
	  else
	   if "Do Forward?" then
		-left->[yes] "Forward request"
		--> ==BEFORE_DESTROY===
	   else
		-right->[no] "Render page template"
		--> ==BEFORE_DESTROY===
	   endif
	  endif

	  --> "Page.onDestroy()"
	  -->(*)
	  @enduml

   -->

	 @param [in] fia	[\b unsigned char*] Binary Data Input
	 @param [in] fib	[\b int] Binary Data Input Length
	 @param [out] fic	[\b char*] Hex String Output Array

	  @retval [\b int] operation result success 0 fail 1

	  Example Usage :

	   @code
		#include <stdio.h>
		#include <string.h>

		int main (){
		  unsigned char data[]="\x13\x13\x13x\13";
		 int dataLength = 4;
		  char dataHex[40];

		  if(fnCE103HW2Lib(data,dataLength,dataHex)!=0)
		 {
		   printf("Operation Failed!");
		   return -1;
		 }

		printf("Converted Data [%s]",dataHex);

		  return 0;
	   }
	  @endcode
  **/
int fnCE103HW2Lib(unsigned char* fia, int fib, char* fic)
{
	//Empty Body...
	return -1;
}

/**
*
*	  @name   fibonacciNumber (ce103_fibonacciNumber)
*
*	  @brief Fibonacci Number Calculator
*
*	  Calculates the fibonacci number in the given index and return as output
*
*	  @param  [in] fiIndex [\b int]  index of fibonacci number in the serie
*
*	  @retval [\b int] calculated fibonacci number
**/
int ce103_fibonacciNumber(int fiIndex)
{
	int printf(const char*);
	int nextTerm;
	int filndex;
	int number1 = 0, number2 = 1;
	if (filndex == 1) {
		return 0;
	}
	if (filndex == 2) {
		return 1;
	}
	if (filndex == 3) {
		return 1;
	}
	for (int i = 3; i < filndex; ++i) {
		printf("%d,", nextTerm);
		number1 = number2;
		number2 = nextTerm;
		nextTerm = number1 + number2;
	}

	return nextTerm;
	return -1;
}   // if nextTerm is same numbers will be added and next term will increase and will process by fibonacci numbers

/**
	@name   strrev (ce103_strrev)

	@brief \b Reverse String

	Reverse given string

	@param [in] fiStr [\b char*] The given string which is needed to be reversed.

	@retval [\b char*] This function returns the string after reversing the given string
**/
char* ce103_strrev(char* fiStr)
{
	char ch;
	char* p = fiStr;
	char* q = fiStr;

	for (; *q != '\0'; q++);
	;
	q--;
	for (; p < q; p++, q--) {
		ch = *p;
		*p = *q;
		*q = ch;
	}
	return fiStr;
	return 0;
}   // if the parameters are p<q like this, parameters will be added and extracted and changes values so string will be reversed by parameters 

/**
	@name   strlen (ce103_strlen)
	@brief \b Get string length

	Returns the length of the C string str.

	The length of a C string is determined by the terminating null-character:
	A C string is as long as the number of characters between the beginning of
	the string and the terminating null character
	(without including the terminating null character itself).

	see more <a href="https://en.cppreference.com/w/c/string/byte/strlen">strlen reference 1</a>
	see more <a href="https://www.programiz.com/c-programming/library-function/string.h/strlen">strlen reference 2</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strlen/">strlen reference 3</a>

	@param [in] fiStr [\b const char*] pointer to the null-terminated byte string to be examined

	@retval [\b int] The length of the null-terminated byte string str.
**/
int ce103_strlen(const char* fiStr)
{
	unsigned int count = 0;

	while (*fiStr != '\0')
	{
		count++;
		fiStr++;
	}
	return count;
	return -1;
}   // in every turn string lenght will increase and will count

/**
	@name   strcat (ce103_strcat)
	@brief \b Concatenate strings

	Appends a copy of the null-terminated byte string pointed to by src to the end of the null-terminated byte string pointed to by dest

	The character src[0] replaces the null terminator at the end of dest. The resulting byte string is null-terminated.

	The behavior is undefined if the destination array is not large enough for the contents of
	both src and dest and the terminating null character. The behavior is undefined if the strings overlap.
	The behavior is undefined if either dest or src is not a pointer to a null-terminated byte string.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcat">strcat reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcat/">strcat reference</a>

	@param  [in] fiDest [\b char*] pointer to the null-terminated byte string to append to
	@param  [in] fiSrc  [\b char*] pointer to the null-terminated byte string to copy from

	@retval [\b char*] returns a copy of dest
**/
char* ce103_strcat(char* fiDest, char* fiSrc)
{
	char* start = fiDest;

	while (*fiDest != '\0')
	{
		fiDest++;
	}

	while (*fiSrc != '\0')
	{
		*fiDest = *fiSrc;
		fiDest++;
		fiSrc++;
	}

	*fiDest = '\0';
	return start;
	return 0;
}   // change the destinations value to 0

/**
	@name   strcmp (ce103_strcmp)
	@brief  \b Compare two strings

	Compares two null-terminated byte strings lexicographically.

	The sign of the result is the sign of the difference between
	the values of the first pair of characters (both interpreted as unsigned char)
	that differ in the strings being compared.The behavior is undefined
	if lhs or rhs are not pointers to null-terminated byte strings.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcmp">strcmp reference</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcmp/">strcmp reference</a>

	@param  [in] fiLhs [\b const char*] pointers to the null-terminated byte strings to compare
	@param  [in] fiRhs [\b const char*] pointers to the null-terminated byte strings to compare

	@retval [\b int] Negative value if lhs appears before rhs in lexicographical order.
			Zero if lhs and rhs compare equal.
			Positive value if lhs appears after rhs in lexicographical order.
**/
int ce103_strcmp(const char* fiLhs, const char* fiRhs)
{
	while ((*fiLhs != '\0' && *fiRhs != '\0') && *fiLhs == *fiRhs)
	{
		fiLhs++;
		fiRhs++;
	}

	if (*fiLhs == *fiRhs)
	{
		return 0; // strings are identical
	}

	else
	{
		return *fiLhs - *fiRhs;
	}

	return -2;
}   // will determine the inputs value and state if they are equal 

/**
*
	@name  strcpy (ce103_strcpy)
	@brief \b Copy string

	Copies the C string pointed by source into the array pointed by destination,
	including the terminating null character (and stopping at that point).

	To avoid overflows, the size of the array pointed by destination shall be long enough to contain
	the same C string as source (including the terminating null character),
	and should not overlap in memory with source.

	see more <a href="https://en.cppreference.com/w/c/string/byte/strcpy">strcpy reference 1</a>
	see more <a href="https://www.cplusplus.com/reference/cstring/strcpy/">strcpy reference 2</a>

	@param [out] foDestination	[\b char*]			Pointer to the destination array where the content is to be copied.
	@param [in]  fiSource		[\b const char*]	C string to be copied.

	@retval returns a copy of dest
**/
char* ce103_strcpy(char* foDestination, const char* fiSource)
{
	char* start = foDestination;

	while (*fiSource != '\0')
	{
		*foDestination = *fiSource;
		foDestination++;
		fiSource++;
	}

	*foDestination = '\0'; // add '\0' at the end
	return start;
	return 0;
}   // state a source and and destination and every destination it will bring a copy of source 

/**
 * @name    hex2bin (ce103_hex2bin)
 * @brief   \b Hexadecimal to Binary (BCD)  Conversion
 *
 * Hexadecimal to Binary (BCD)  Conversion
 * Packs hexadecimal string to packed binary array, Example: "AB1234" => 0xAB 0x12 0x34
 * If length of the input string is less than the fiHexLen,remaining bytes is not filled.
 * If odd number of characters processed, last nibble is padded with 0
 *
 * @param   [in]  fiHex    [\b unsigned char*] Ascii hex string.
 * @param   [in]  fiHexLen [\b int]     Ascii data length.
 * @param  [out]  foBin    [\b char*]   Convertion result as binary.
 */
void ce103_hex2bin(char* fiHex, int fiHexLen, unsigned char* foBin)
{
#include<stdio.h>
	int main()
	{
		char hexNum[100];
		long int count = 0;
		printf("Enter a hexadecimal number To Convet it into Binary : ");
		scanf("%s", hexNum);
		printf("\nBinary Number is : ");
		while (hexNum[count])
		{
			switch (hexNum[count])
			{
			case '0': printf("0000");
				break;
			case '1': printf("0001");
				break;
			case '2': printf("0010");
				break;
			case '3': printf("0011");
				break;
			case '4': printf("0100");
				break;
			case '5': printf("0101");
				break;
			case '6': printf("0110");
				break;
			case '7': printf("0111");
				break;
			case '8': printf("1000");
				break;
			case '9': printf("1001");
				break;
			case 'A': printf("1010");
				break;
			case 'B': printf("1011");
				break;
			case 'C': printf("1100");
				break;
			case 'D': printf("1101");
				break;
			case 'E': printf("1110");
				break;
			case 'F': printf("1111");
				break;
			case 'a': printf("1010");
				break;
			case 'b': printf("1011");
				break;
			case 'c': printf("1100");
				break;
			case 'd': printf("1101");
				break;
			case 'e': printf("1110");
				break;
			case 'f': printf("1111");
				break;
			default: printf("\nInvalid Entry, Please Try Again  %c", hexNum[count]);
			}
			count++;
		}
		return 0;
	}
}   // take every hex convertion as a case and present converted output

/**
* @name    bin2hex (ce103_bin2hex)
* @brief   \b Binary (BCD) to Hexadecimal Conversion
*
* Unpacks alpha numeric value, Example: 0x12 0x34 = "1234".
*
* @param [in]  fiBin      [\b unsigned char*]    Binary data to be converted.
* @param [in]  fiBinLen   [\b int]				 Binary data length.
* @param [out] foHex      [\b char*]			 Convertion result as ascii. Doubles the binary length.
*
*/
void ce103_bin2hex(unsigned char* fiBin, int fiBinLen, char* foHex)
{
#include<stdio.h>
#include<conio.h>
	void BinToHex(int bin);
	int i = 0;
	char hexnum[20];
	int main()
	{
		int binnum;
		printf("Enter any Binary Number: ");
		scanf("%d", &binnum);
		BinToHex(binnum);
		printf("\nEquivalent Hexadecimal Value = ");
		for (i = i; i >= 0; i--)
			printf("%c", hexnum[i]);
		getch();
		return 0;
	}
	void BinToHex(int bin)
	{
		int hex = 0, mul = 1, count = 1, rem;
		while (bin != 0)
		{
			rem = bin % 10;
			hex = hex + (rem * mul);
			if (count % 4 == 0)
			{
				if (hex < 10)
					hexnum[i] = hex + 48;
				else
					hexnum[i] = hex + 55;
				mul = 1;
				hex = 0;
				count = 1;
				i++;
			}
			else
			{
				mul = mul * 2;
				count++;
			}
			bin = bin / 10;
		}
		if (count != 1)
			hexnum[i] = hex + 48;
		if (count == 1)
			i--;
	}
}   // every bite change add a value of 1 and output the next hexadecimal
