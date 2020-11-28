#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	//freopen("results.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	ifstream inFile;
    inFile.open("results.txt");
    int line = 1;
    int z=0,o=0;
    string s;
    while(getline(inFile, s)) {
        //cout << "The length of line number " << line << " is: " << s.length() << endl;
        //cout<<s<<endl;
        if(s.length()>6){
        	string s1=s.substr(0,5);
        	//cout<<s1<<endl;
        	if(s1=="Faces"){
        		//cout<<s[14]<<endl;
        		if(s[14]=='0')
        			z++;
        		if(s[14]=='1')
        			o++;
        	}
        }
        line++;
    }
    cout<<"No of zeros: "<<z<<endl;
    cout<<"No of ones: "<<o<<endl;
	cout<<"Accuracy: "<<o/(o+z)<<endl;
    return 0;
}