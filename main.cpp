#include <iostream>
#include <string>
#include <string>

using namespace std;

int find(string s,char a){
    int size = s.size();
    for(int i=0;i<size;i++){
        if(s[i]==a){
            return i;
        }
    }
        return -1;
}

void printpostorder(string preorder,string inorder){
if(preorder.empty() ||inorder.empty())
        return;
int rootindex = find(inorder,preorder[0]);
int in_pre_ordersize = inorder.size();
if(in_pre_ordersize==1){
        cout<<preorder[0]<<"  ";
   return;
}
//cout<<preorder[0]<<endl;
printpostorder(preorder.substr(1,rootindex),inorder.substr(0,rootindex));
//cout<<preorder[0]<<endl;
//if(rootindex+1>in_pre_ordersize) return;

printpostorder(preorder.substr(rootindex+1,in_pre_ordersize-rootindex-1),inorder.substr(rootindex+1,in_pre_ordersize-rootindex-1));

cout<<preorder[0]<<"  ";
}


int main()
{
//printpostorder("5324768","2345678");
//printpostorder("537","357");
printpostorder("ABFGC", "FBGAC");
cout<<endl;
printpostorder("fcadi","acdfi");
cout<<endl;
printpostorder("caqjt","acjqt");
cout<<endl;
printpostorder("dacmy","acdmy");
cout<<endl;
printpostorder("nmaoz","amnoz");


//cout<<postorder1<<endl;



    return 0;
}
