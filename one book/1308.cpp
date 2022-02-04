#include <bits/stdc++.h>
using namespace std;
char s[1001],ss[1001];
char arr[1001],cha[1001];

int Compare(char a[],char b[])
{
	int lena,lenb,i;
	lena=strlen(a);
	lenb=strlen(b);
	if(lena<lenb) return -1;
	else if(lena>lenb) return 1;
	else
	{
		if(strcmp(a,b)==0) return 0;
		else
		{ 
			for(i=0;i<lena;i++)
			{ 
				if(a[i]>b[i]) return 1;
				if(a[i]<b[i]) return -1;
			}
			return 0;
		}
	}
}

int Judge(char ch[])
{
	int i,k;
	k=strlen(ch);
	for(i=0;i<k;i++) 
		if(ch[i]!='0') 
			return 0;
	return 1;
}

void Sub(char a1[],char b1[])     
{	
	int lena,lenb,i,j,k,flag;
	int a[1000]={0},b[1000]={0},d[1000]={0};
	lena=strlen(a1);
	lenb=strlen(b1);
	if(Compare(a1,b1)>=0) 
	{
		for(i=0;i<lena;i++) a[i]=a1[lena-1-i]-'0';
		for(i=0;i<lenb;i++) b[i]=b1[lenb-1-i]-'0';
		flag=0;
	}
	else 
	{
		for(i=0;i<lenb;i++) a[i]=b1[lenb-1-i]-'0';
		for(i=0;i<lena;i++) b[i]=a1[lena-1-i]-'0';
		flag=1;
	}
	k=lena>lenb?lena:lenb;
	for(i=0;i<k;i++)
	{
		if(a[i]<b[i])
		{
			a[i+1]--;
			d[i]=a[i]-b[i]+10; 
		}
		else  d[i]=a[i]-b[i];
	}
	while(!d[i-1])
	{  
        k--;
        i--;  
    }
	if(!flag)
	{ 
		for(i=0;i<k;i++)
		{
			if(!i&&!d[k-i-1]) continue;
			cha[i]=d[k-i-1]+'0'; 
		} 
	}
	else 
	{ 
		cha[0]='-'; 
		for(i=1;i<=k;i++)
		{
			if(i==1&&!d[k-i]) continue;
			cha[i]=d[k-i]+'0';
		}
	}
	if(Judge(cha))
		strcpy(cha,"0");
}

void chu_gao()
{
	char a[1000],b[1000],t[1000];
	int lens,lent,i,j,k,flag=0;
    memset(arr,0,sizeof(arr));
	if(Compare(s,ss)<0)
		strcpy(arr,s);
	else if(!Compare(s,ss))
		cha[0]='1';
	else
	{ 
		j=lent=0; lens=strlen(s); 
		memset(b,0,sizeof(b)); 
		memset(t,0,sizeof(t));
		for(i=0;i<lens;i++)
		{
			b[j++]=s[i]; 
			flag=0;
			while(Compare(b,ss)>=0)
			{
				Sub(b,ss);
				strcpy(b,cha);
				memset(cha,0,sizeof(cha));
				t[lent]++;
				flag=1;
			}
			if(flag) t[lent]+='0';
			else t[lent]='0';
			if(!strcmp(b,"0")) j=0;
			else j=strlen(b);
			lent++; 
		}
		k=0;
		for(i=0;i<lent;i++)		
			if(t[i]!='0')
				break;
			for(j=i;j<lent;j++) 
				cha[k++]=t[j];
			strcpy(arr,b); 
	}
	if(Judge(cha))
		strcpy(cha,"0");
	if(Judge(arr))
		strcpy(arr,"0");
}
// 1797809090683075665989928075647368545499856035432375283103370
// 1231312318767141738178325678412414124141425346756786867867867
//  566496771915933927811602397234954421358430688675588415235503
int main()
{
    scanf("%s%s",s,ss); 
    chu_gao();
	printf("%s\n%s",cha,arr);
    return 0;
}