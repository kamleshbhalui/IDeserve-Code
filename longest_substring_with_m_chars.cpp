#include"base.h"

start_main
string str;
cin>>str;
int uniqc;
cin>>uniqc;
string ans="";
for(int i=0;i<=str.size()-uniqc;i++)
  {

    string s;
    set<char>se;
    for(int j=i;j<str.size();j++)
      {
	    s+=str[j];
	    se.insert(str[j]);
	    if(se.size()<=(size_t)uniqc)
	      {

		if(s.size()>ans.size())
		  ans=s;

	      }
	    else
	      {break;}
	  }
      }
  
 cout<<ans<<"\n";

end_main
