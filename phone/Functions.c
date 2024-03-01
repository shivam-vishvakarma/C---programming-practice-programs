int input(char s[5])
{
	int a;
	printf("%s",s);
	scanf("%d",&a);
	return a;
}
void inputs(char * str,char s[5])
{
	printf("%s",s);
	gets(str);
}
int prime(int a)
{
	int i,t;
	if(a>3)
	{
		for(i=2;i<a;i++)
		{
			if(a%i==0)
			{
				t=0;
				break;
			}
			else
			{
				t=1;
			}
		}
		return t;
	}
	else
	{
		return 1;
	}
}
void diamond(int n)
{
	int i,j,k;
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=n/2;i<n;i++)
	{
		printf("\t");
		printf("\t");
		printf("\t");
		for(k=n-i;k!=0;k--)
		{
			printf(" ");
		}
		for(j=0;j<i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=n-1;i!=0;i--)
	{
		printf("\t");
		printf("\t");
		printf("\t");
		for(k=n-i;k!=0;k--)
		{
			printf(" ");
		}
		for(j=1;j<i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
}
int MYname()
{
	printf("     SSSS    HH      HH  IIIIIIII VV                VV   AA       MM        MM\n");
	printf("   SS    SS  HH      HH     II     VV              VV  AA  AA     MMM      MMM\n");
	printf("   SS        HH      HH     II      VV            VV  AA    AA    MM M    M MM\n");
	printf("    SS       HH      HH     II       VV          VV  AA      AA   MM  M  M  MM\n");
	printf("     SSSS    HHHHHHHHHH     II        VV        VV   AA      AA   MM    M   MM\n");
	printf("        SS   HHHHHHHHHH     II         VV      VV    AAAAAAAAAA   MM        MM\n");
	printf("          SS HH      HH     II          VV    VV     AAAAAAAAAA   MM        MM\n");
	printf("          SS HH      HH     II           VV  VV      AA      AA   MM        MM\n");
	printf("   SS   SS   HH      HH     II            VVVV       AA      AA   MM        MM\n");
	printf("     SSSS    HH      HH  IIIIIIII          VV        AA      AA   MM        MM\n");
}