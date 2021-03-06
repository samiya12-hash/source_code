#include<bits/stdc++.h>
using namespace std;
vector<int>temp_array(string pattern)//crering lps array
{   /**lps :
    //pattern er 1 index theke 0 index er stahe match start korbo
    // somehow jodi  na mile then lps[in-1] er sathe match korbo
    // jodi match[in==0] hoi then abar i increment kore 0 index theke match
    //start korbo
    **/
    vector<int>lps(pattern.length());
    int index = 0;
    for(int i=1;i<pattern.length();)
    {
        if(pattern[index]==pattern[i])
        {
            lps[i] = index+1;
            index++;i++;
        }
        else
        {
            if(index!=0)index = lps[index-1];
            else {lps[i] = index;i++;}
        }
    }
    return lps;
}
void kmp(string text,string pattern)
{
   /**
    // same as lps//
    dif. hoilo kono stage e asi jodi match index 0 hoi
    //taile ar dorkar nai...check korar..**/
    vector<int>lps = temp_array(pattern);
    int i=0,j=0;///i->text & j->pattern
     bool found = false;
    while(i<text.length())
    {

        if(text[i]==pattern[j])
        {
            i++;j++;
        }
        else
        {
            if(j!=0)j = lps[j-1];
            else i++;
        }
        if(j==pattern.length())
        {
            cout<<"found"<<" index = "<<(i-pattern.length())<<endl;
            found = true;
            j = lps[j-1];
 `       }
    }
    if(!found)cout<<"not found"<<endl;
}
int main()
{
    //freopen("inputfile.txt","r",stdin);
    string text,pattern;
    getline(cin,text);
    getline(cin,pattern);
    kmp(text,pattern);
    return 0;
}
