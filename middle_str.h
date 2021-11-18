#pragma once

#include <iostream>
#include <string>

using namespace std;

bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2); 
int itc_countWords(string str);	
string itc_maxCharWord(string str); 
char itc_sameChar(string str); 
bool itc_isFirstInSecond(string s1, string s2); 
string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str); 
string itc_DecToBin(string str); 
string itc_decToBase(int num, int base); 
int itc_len(string str);
string itc_rev_str(string str);
string itc_slice_str(string str, int start, int end);
int itc_find_str(string str1, string str2);
