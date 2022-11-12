//Проверка множества слов на соответствие регулярному выражению и-11; 14
//Поиск наиболее частых подпоследовательностей и-9  12
//35
//бинарное дерево + 15 . 50
//2.8

#include <iostream>
#pragma once
#include "Sequence.h"
#include "ArraySequence.h"
#include "DynamicArray.h"
#include <string>
#include <vector>
#include <cstring>
using namespace std;



//void test_subseq(){
//    string vec = "ababbab";
//    cout<< subsequences<vector<string>>::end_word(vec,2)[0];
//}

int main() {

    char s[] = {"Hell o World"};
    char *t;
    if ((t = strchr(s, '!')) || (t = strchr(s, '^')) || (t = strchr(s, '$')) || (t = strchr(s, '*')) || (t = strchr(s, '?')) || (t = strchr(s, '{'))
            || (t = strchr(s, '}')) )
        cout << "true";



    //int l1,l2 = 0;
    //ArraySequence<char> arraySeq(0);
//
    //while(true){
    //    char d;
    //    cin>> d;
    //    if (d == '0'){
    //        break;
    //    }
    //    arraySeq.append(d);
    //}
//
    //cout<<"input diapozon"<<endl;
//
    //cin>>l1>>l2;
//
    //arraySeq.output();
    //return 0;
}
