#include"Myheader.h"

////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: bChkVowel
//  Description: Return true if accepted character is a vowel and false if the character is not a vowel
//  Input: char[IN]
//  Output: BOOL
//  Author: Vinayak Mahendra Patil
////////////////////////////////////////////////////////////////////////////////////////////////////////

BOOL bChkVowel(char cAlpha)
{
    if(cAlpha=='a'|| cAlpha=='e'|| cAlpha=='i'|| cAlpha=='o'|| cAlpha=='u'||cAlpha=='A'|| cAlpha=='E'|| cAlpha=='I'|| cAlpha=='O'|| cAlpha=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
