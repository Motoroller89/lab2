//
// Created by danya on 11.11.2022.
//

#ifndef UNTITLED4_SUBSEQUENC_H
#define UNTITLED4_SUBSEQUENC_H

#include <iostream>
#include <vector>
#include <regex>

using namespace std;

template<class T>
class subsequences{

private:

    static T find_string(string *s,int len_find){
        T all_words;
        for (int i=0; i<s->size()-1; i++){
            all_words.push_back(s->substr(i,len_find));

        }

        return all_words;
    }

    static T long_subsequence(T s,int  len_find){
        int max_ = -100;
        T word;
        for (int i =0; i< s.size();i++){
            int k =0;
            if(s[i].size()==len_find){
                for( int j =i+1; j <s.size();j++ ){
                    if (s[i] == s[j])
                        k+= 1;
                }
                if(k>max_){
                    word.clear();
                    word.push_back(s[i]);
                }
            }
        }
        return word;
    }

public:

    static T end_word(string string, int len_find){
        T str = find_string(&string,len_find);
        return long_subsequence(str,len_find);
    }
};
#endif //UNTITLED4_SUBSEQUENC_H
