#include"Myheader.h"

int main(int argc,char *argv[])
{
	char cAplha='\0';
	BOOL bRet=TRUE;

	printf("Enter a character:");
	scanf("%c",&cAplha);
	
	bRet=bChkVowel(cAplha);
	
	if(bRet)
	{
	printf("%c is a vowel character\n",cAplha);	
	}
	else
	{
	printf("%c is not a vowel character\n",cAplha);	
	}
	return 0;
}
