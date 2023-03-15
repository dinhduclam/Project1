//Xay dung tu dien Anh-Viet doc tu file
#include <iostream>
#include <iterator>
#include <map>
#include <string.h>
#include <stdio.h>

using namespace std;

map<string, string> dict;

int find_tab(char *s){
	for (int i=0; i<strlen(s); i++)
		if (s[i] == '\t') return i;
}

int add(char *s){
	int tab_index = find_tab(s);
	
	char tuTA[tab_index + 1];
	char tuTV[strlen(s) - tab_index + 1];
	
	for (int i=0; i<tab_index; i++){
		tuTA[i] = s[i];
	}
	tuTA[tab_index] = '\0';
	
	for (int i=tab_index + 1; i<=strlen(s); i++){
		tuTV[i-tab_index-1] = s[i];
	}
	
	while (tuTA[strlen(tuTA) - 1] == ' '){
		tuTA[strlen(tuTA) - 1] = NULL;	
	}
	while (tuTV[strlen(tuTV) - 1] == ' '){
		tuTV[strlen(tuTV) - 1] = NULL;	
	}
	
	dict.insert(pair<string, string>(tuTA, tuTV));
}



int main()
{
	FILE *f;
	f = fopen("../File/Tu dien anh viet xay dung .txt", "r");
	
	char s[200];
	while (!feof(f)){
		fgets(s, sizeof(s), f);
		if (s[strlen(s)-1] == '\n') s[strlen(s)-1] = NULL;
		add(s);
	}
	
	map<string,string>::iterator it; 
	
	cout << "Nhap dau . de thoat!" << endl;
	
	char tuTA[60];
	cout << "Nhap tu tieng Anh: ";
	while (strcmp(gets(tuTA), ".")){
		it = dict.find(tuTA);
		if (it == dict.end()) cout << "Tu " << tuTA << ": Khong co trong tu dien" << endl;
		else cout << "Nghia cua tu " << tuTA << " la: " << dict[tuTA] << endl;
		cout << "Nhap tu tieng Anh: ";
	}
	
	return 0;
}

