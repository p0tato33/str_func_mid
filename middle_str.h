#ifndef MIDDLE_STR_H_INCLUDED
#define MIDDLE_STR_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

bool isDigit(unsigned char c); 
unsigned char toUpper(unsigned char c);
unsigned char registr(unsigned char c);
bool Compare(string s1, string s2);
int kol_slov(string str);
string dlin_slovo(string str);
char simvol(string str);             //7
bool podstroka(string s1, string s2);
string Cezar(string str, int k);      //10
string not_probel_str(string str);
bool ip(string str);
string zamena(string str);
string ft_rev_covert_new(int n, int k);  //14

#endif // MIDDLE_STR_H_INCLUDED
