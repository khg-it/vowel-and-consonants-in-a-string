# include <iostream>
using namespace std;

int main()
{
	char a[100];
    char *p=a;
	int vow=0,con=0;
	cout<<"enter string..."<<endl;
	cin>>a;
    while(*p!='\0')
    {
     if(*p=='a'|| *p=='e'|| *p=='i'|| *p=='o'|| *p=='u'|| *p=='A'|| *p=='E' || *p=='I' || *p=='O' || *p=='U')   	
     {
     	vow++;
	 }
	 else
	 {
	 	con++;
	 }
	 *p++;
    }
    cout<<"vowels:"<<vow<<endl;
    cout<<"consonants: "<<con<<endl;
    return 0;
    
	
}
